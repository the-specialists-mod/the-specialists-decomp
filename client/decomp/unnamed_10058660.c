/* client.dll - unnamed_10058660 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10058660  FUN_10058660  (84 bytes)
 * undefined FUN_10058660(int * param_1, byte.conflict * param_2)
 */
void __cdecl FUN_10058660(int *param_1,byte_conflict *param_2)

{
  undefined1 local_200 [512];
  
  FUN_1006ca7b(local_200,0x200,param_2,(undefined4 *)&stack0x0000000c);
  (**(code **)(param_1[0x32] + 0x200))(param_1 + 0x32,local_200);
  FUN_10058730(param_1);
  return;
}

/* 100586c0  FUN_100586c0  (13 bytes)
 * undefined FUN_100586c0(undefined4 param_1)
 */
void __thiscall FUN_100586c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}

/* 100586d0  FUN_100586d0  (7 bytes)
 * undefined1 FUN_100586d0(int param_1)
 */
undefined1 __fastcall FUN_100586d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x261);
}

/* 100586e0  FUN_100586e0  (18 bytes)
 * undefined FUN_100586e0(undefined1 param_1)
 */
void __thiscall FUN_100586e0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x261) = param_1;
  FUN_10058730(this);
  return;
}

/* 10058700  FUN_10058700  (46 bytes)
 * undefined FUN_10058700(int * param_1)
 */
void __fastcall FUN_10058700(int *param_1)

{
  *(bool *)((int)param_1 + 0x261) = *(char *)((int)param_1 + 0x261) == '\0';
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(param_1);
  }
  FUN_10058730(param_1);
  return;
}

/* 10058730  FUN_10058730  (290 bytes)
 * undefined FUN_10058730(int * param_1)
 * called by: FUN_100585b0, FUN_100585f0, FUN_10058640, FUN_10058660, FUN_100586e0, FUN_10058700
 */
void __fastcall FUN_10058730(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  int *apiStack_38 [2];
  int iStack_30;
  int *piStack_2c;
  int *local_14;
  int local_10 [4];
  
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    piVar3 = (int *)param_1[0x97];
  }
  else {
    piVar3 = (int *)param_1[0x96];
  }
  piVar1 = param_1 + 0x32;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = piVar1;
  if (piVar3 != (int *)0x0) {
    piStack_2c = local_10 + 1;
    iStack_30 = (int)local_10;
    apiStack_38[1] = (int *)0x10058784;
    (**(code **)(*piVar3 + 8))();
  }
  iStack_30 = 0x1005878f;
  piStack_2c = piVar3;
  (**(code **)(param_1[0x66] + 0x1fc))();
  iStack_30 = local_10[0];
  apiStack_38[1] = local_14;
  apiStack_38[0] = (int *)0x100587a0;
  (**(code **)(param_1[0x66] + 8))();
  apiStack_38[0] = local_10;
  (**(code **)(*piVar1 + 0xc))(&local_14);
  (**(code **)(*piVar1 + 0x21c))(3);
  uVar2 = (uint)((char)param_1[0x31] == '\0');
  (*(code *)**(undefined4 **)(&iStack_30)[uVar2])
            (0,(local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] - local_10[uVar2 * 2 + -5]) / 2);
  (**(code **)*apiStack_38[uVar2 == 0])
            ((&iStack_30)[uVar2 * 2] + 5,
             (local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] -
             (int)(&piStack_2c)[(uint)(uVar2 == 0) * 2]) / 2);
  piVar3 = apiStack_38[1];
  if ((int)apiStack_38[1] <= (int)piStack_2c) {
    piVar3 = piStack_2c;
  }
  (**(code **)(*param_1 + 8))(iStack_30 + 5 + (int)apiStack_38[0],piVar3);
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 10058880  FUN_10058880  (3202 bytes)
 * Panel * FUN_10058880(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_10064380
 */
Panel * __thiscall
FUN_10058880(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *pLVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ScrollPanel *pSVar5;
  LineBorder *pLVar6;
  undefined4 *puVar7;
  Button *pBVar8;
  void *this_00;
  Panel *pPVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  byte_conflict *pbVar13;
  TextPanel *this_01;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  void *this_02;
  byte_conflict *pbVar20;
  int unaff_EDI;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  Panel *this_03;
  undefined4 *puVar27;
  void *this_04;
  Panel *pPVar28;
  undefined4 *puVar29;
  void *pvVar30;
  Button BVar31;
  char cVar32;
  void *pvStack_1d4;
  Label *pLVar33;
  void *pvVar34;
  undefined4 uStack_170;
  void *pvStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined1 *apuStack_160 [2];
  Color aCStack_158 [16];
  void *local_148;
  int iStack_144;
  Label *local_140;
  int local_13c;
  int local_138;
  void *local_128;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_6c;
  void *pvStack_68;
  undefined4 uStack_58;
  undefined4 uStack_44;
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077b4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_128 = this;
  vgui::Panel::Panel(this,param_3,param_4,param_5,param_6);
  uVar10 = uStack_170;
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined ***)this = &PTR_setPos_1007df48;
  uStack_170 = CONCAT13(1,(undefined3)uStack_170);
  if (DAT_100d5908 < 0x280) {
    uStack_170 = uVar10 & 0xffffff;
  }
  puVar18 = (undefined4 *)((int)this + 0x16c);
  for (iVar19 = 0x300; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  pvVar3 = (void *)(DAT_100d5cb0 + 0x22c);
  local_148 = pvVar3;
  iVar19 = FUN_1005cc60(pvVar3,(byte_conflict *)s_Title_Font_1009649c);
  local_13c = iVar19;
  local_138 = FUN_1005cc60(pvVar3,(byte_conflict *)s_Briefing_Text_1009648c);
  pLVar1 = operator_new(0xd0);
  local_4 = 0;
  local_140 = pLVar1;
  if (pLVar1 == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    lVar21 = __ftol();
    uVar10 = (uint)lVar21;
    lVar21 = __ftol();
    piVar2 = (int *)vgui::Label::Label(pLVar1,s_,(int)lVar21,uVar10);
  }
  local_4 = 0xffffffff;
  pvVar34 = this;
  (**(code **)(*piVar2 + 0x40))();
  apuStack_160[0] = (undefined1 *)*piVar2;
  FUN_1005cce0(pvVar3,iVar19);
  (**(code **)(apuStack_160[0] + 0x208))();
  FUN_1005ccf0(pvVar3,iStack_144,&uStack_168,&uStack_170,(uint *)&stack0xfffffe8c,
               (uint *)&pvStack_16c);
  (**(code **)(*piVar2 + 0x120))();
  FUN_1005cd30(pvVar3,iStack_144,(uint *)&stack0xfffffe88,(uint *)&stack0xfffffe80,
               (uint *)&stack0xfffffe7c,(uint *)&stack0xfffffe84);
  (**(code **)(*piVar2 + 300))();
  (**(code **)(*piVar2 + 0x21c))();
  iVar19 = *piVar2;
  FUN_100349a0(s__Title_SelectYourClass_10096474);
  (**(code **)(iVar19 + 0x200))();
  pvVar3 = operator_new(0xd0);
  uStack_30 = 1;
  pvStack_16c = pvVar3;
  if (pvVar3 == (void *)0x0) {
    pSVar5 = (ScrollPanel *)0x0;
  }
  else {
    lVar21 = __ftol();
    iVar19 = (int)lVar21;
    lVar21 = __ftol();
    iVar4 = (int)lVar21;
    lVar21 = __ftol();
    iVar16 = (int)lVar21;
    lVar21 = __ftol();
    pSVar5 = FUN_1005a860(pvVar3,(int)lVar21,iVar16,iVar4,iVar19);
  }
  *(ScrollPanel **)((int)this + 0x168) = pSVar5;
  uStack_30 = 0xffffffff;
  this_00 = this;
  (**(code **)(*(int *)pSVar5 + 0x40))();
  pvVar3 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  pLVar6 = operator_new(0x44);
  uStack_44 = 2;
  if (pLVar6 != (LineBorder *)0x0) {
    pvStack_1d4 = (void *)0x10058b72;
    vgui::Color::Color(aCStack_158,0xb2,0x76,0,0);
    apuStack_160[0] = &stack0xfffffe34;
    vgui::LineBorder::LineBorder(pLVar6);
  }
  uStack_44 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0x168) + 0xd4))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x168) + 0x204))();
  uStack_164 = (**(code **)(*piVar2 + 0x18))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  pvStack_1d4 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  puVar18 = (undefined4 *)((int)this + 0x134);
  iVar19 = 0;
  do {
    iVar4 = iVar19;
    lVar21 = __ftol();
    pvVar12 = (void *)lVar21;
    puVar7 = operator_new(0x108);
    this_02 = pvVar3;
    if (puVar7 != (undefined4 *)0x0) {
      pcVar24 = (&PTR_s_civilian_10096a0c)[iVar19];
      *puVar7 = &PTR_FUN_1007df38;
      _strncpy((char *)(puVar7 + 1),pcVar24,0x100);
      *(undefined1 *)((int)puVar7 + 0x103) = 0;
      puVar7[0x41] = 1;
      *puVar7 = &PTR_FUN_1007df34;
      this_02 = pvVar3;
    }
    FUN_100349a0((&PTR_s__Civilian_100969dc)[iVar19]);
    FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10093568);
    pBVar8 = operator_new(0x130);
    uStack_58 = 3;
    if (pBVar8 == (Button *)0x0) {
      pBVar8 = (Button *)0x0;
    }
    else {
      lVar21 = __ftol();
      this_00 = (void *)lVar21;
      lVar21 = __ftol();
      iVar16 = (int)lVar21;
      lVar21 = __ftol();
      FUN_1005a0b0(pBVar8,(char *)apuStack_160,(int)lVar21,(int)pvVar12,iVar16,(int)this_00,
                   (Button)0x1);
      *(undefined ***)pBVar8 = &PTR_setPos_1007dcc8;
      *(int *)(pBVar8 + 300) = iVar19;
    }
    uStack_58 = 0xffffffff;
    *puVar18 = pBVar8;
    if ((iVar19 < 1) || (9 < iVar19)) {
      FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10092bf4);
    }
    else {
      FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10093a90);
    }
    FUN_1005a280((void *)*puVar18,(char)apuStack_160[0]);
    cVar32 = '\0';
    (**(code **)(*(int *)*puVar18 + 0x21c))();
    (**(code **)(*(int *)*puVar18 + 0x240))();
    puVar7 = operator_new(0xc);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &PTR_LAB_1007dc9c;
      puVar7[1] = iVar19;
      puVar7[2] = this;
    }
    (**(code **)(*(int *)*puVar18 + 0x70))();
    this_03 = this;
    (**(code **)(*(int *)*puVar18 + 0x40))();
    pPVar9 = operator_new(0xc0);
    pvStack_68 = (void *)0x4;
    if (pPVar9 == (Panel *)0x0) {
      pPVar9 = (Panel *)0x0;
    }
    else {
      lVar21 = __ftol();
      vgui::Panel::Panel(pPVar9,0,0,(int)pvVar34,(int)lVar21);
      *(undefined ***)pPVar9 = &PTR_setPos_1007daa0;
      *(undefined4 *)(pPVar9 + 0xbc) = 0xff;
    }
    puVar18[-0x18] = pPVar9;
    iVar19 = *(int *)pPVar9;
    pvStack_68 = (void *)0xffffffff;
    uVar10 = (**(code **)(**(int **)((int)this + 0x168) + 0x204))();
    (**(code **)(iVar19 + 0x40))();
    lVar21 = __ftol();
    pPVar9 = (Panel *)lVar21;
    if (cVar32 != '\0') {
      lVar21 = __ftol();
      pPVar9 = (Panel *)lVar21;
    }
    FUN_1006ac7a(&stack0xfffffe8c,(byte_conflict *)s__Title__s_10096468);
    FUN_100349a0(&stack0xfffffe8c);
    pLVar1 = operator_new(0xd0);
    uStack_6c = 5;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      pLVar33 = pLVar1;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,(int)pPVar9,(int)lVar21);
      pLVar1 = pLVar33;
    }
    iVar19 = *piVar2;
    uStack_6c = 0xffffffff;
    uVar11 = FUN_1005cce0(this_00,unaff_EDI);
    (**(code **)(iVar19 + 0x208))();
    (**(code **)(*piVar2 + 0x40))();
    pvVar3 = this_02;
    FUN_1005ccf0(this_02,(int)pLVar1,(uint *)&stack0xfffffe30,(uint *)&stack0xfffffe28,
                 (uint *)&stack0xfffffe24,(uint *)&pvStack_1d4);
    this_04 = pvStack_1d4;
    pvVar30 = pvVar12;
    (**(code **)(*piVar2 + 0x120))();
    FUN_1005cd30(this_02,(int)pPVar9,(uint *)&stack0xfffffe20,(uint *)&stack0xfffffe18,
                 (uint *)&stack0xfffffe14,(uint *)&stack0xfffffe1c);
    uVar17 = uVar10;
    pPVar28 = this_03;
    puVar29 = puVar7;
    (**(code **)(*piVar2 + 300))();
    uVar26 = 3;
    (**(code **)(*piVar2 + 0x21c))();
    (**(code **)(*piVar2 + 0x200))();
    if ((char)((uint)this_03 >> 0x18) != '\0') {
      iVar19 = 0;
      this_02 = pvVar30;
      this = pPVar9;
      do {
        if (iVar19 == 1) {
          pcVar24 = s__sred_10096460;
        }
        else {
          pcVar24 = s__sblue_10096458;
        }
        FUN_1006ac7a(&stack0xfffffe60,(byte_conflict *)pcVar24);
        pvVar12 = operator_new(0xd4);
        uStack_98 = 6;
        if (pvVar12 == (void *)0x0) {
          pLVar1 = (Label *)0x0;
        }
        else {
          lVar21 = __ftol();
          uVar22 = (uint)lVar21;
          lVar21 = __ftol();
          pLVar1 = FUN_1005a550(pvVar12,&stack0xfffffe60,0,0,(int)lVar21,uVar22);
        }
        uStack_98 = 0xffffffff;
        *(Label **)((int)this + (int)(puVar29 + iVar19 * 3) * 4 + 0x16c) = pLVar1;
        (**(code **)(*(int *)pLVar1 + 0x40))();
        if (iVar19 != 1) {
          (**(code **)(*(int *)pLVar1 + 0x24))();
        }
        (**(code **)(*piVar2 + 0x210))();
        puVar27 = *(undefined4 **)pLVar1;
        pvStack_1d4 = (void *)((float)DAT_100d5908 * 0.0015625 * 150.0);
        pvVar12 = (void *)(*(code *)puVar27[6])();
        __ftol();
        (*(code *)*puVar27)();
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
    }
    FUN_100348d0(s__Title_CurrentlyOnYourTeam_1009643c,(char *)((int)this + 0xd70),0x80);
    pLVar1 = operator_new(0xd0);
    uStack_98 = 7;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,uVar17,(int)lVar21);
    }
    puVar18[-0xc] = piVar2;
    uVar17 = puVar18[-0x18];
    uStack_98 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    uVar25 = 0xff;
    uVar23 = 0;
    uVar22 = 0;
    (**(code **)(*(int *)puVar18[-0xc] + 300))();
    (**(code **)(*(int *)puVar18[-0xc] + 0x21c))();
    iVar19 = *(int *)puVar18[-0xc];
    FUN_1005cce0(this_02,(int)pPVar28);
    (**(code **)(iVar19 + 0x208))();
    FUN_1006ac7a(&stack0xfffffe44,(byte_conflict *)s_classes_short__s_txt_10096424);
    pbVar13 = (*gEngfuncs.COM_LoadFile)(&stack0xfffffe44,5,(int *)0x0);
    pbVar20 = (byte_conflict *)s_Class_Description_not_available__10096400;
    if (pbVar13 != (byte_conflict *)0x0) {
      pbVar20 = pbVar13;
    }
    this_01 = operator_new(0xc0);
    uStack_a8 = 8;
    if (this_01 == (TextPanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      uVar14 = (uint)lVar21;
      lVar21 = __ftol();
      iVar19 = (int)lVar21;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::TextPanel::TextPanel
                                (this_01,(char *)pbVar20,(int)pvVar12,(int)lVar21,iVar19,uVar14);
    }
    uVar14 = puVar18[-0x18];
    uStack_a8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    iVar19 = *piVar2;
    FUN_1005cce0(this_02,(int)puVar29);
    (**(code **)(iVar19 + 0x200))();
    FUN_1005ccf0(this_04,(int)pPVar28,(uint *)&stack0xfffffdf4,(uint *)&stack0xfffffdec,
                 (uint *)&stack0xfffffde8,(uint *)&stack0xfffffdf0);
    (**(code **)(*piVar2 + 0x120))(uVar10,uVar26);
    FUN_1005cd30(this_03,(int)pPVar28,(uint *)&stack0xfffffde4,(uint *)&stack0xfffffddc,
                 (uint *)&stack0xfffffdd8,(uint *)&stack0xfffffde0);
    (**(code **)(*piVar2 + 300))(uVar25,uVar22,uVar14,uVar23);
    piVar15 = (int *)(**(code **)(*piVar2 + 0x208))();
    (**(code **)(*piVar15 + 0x68))(&stack0xfffffe08,&stack0xfffffe04);
    (**(code **)(*piVar2 + 8))(iVar19,this_03);
    (**(code **)(*piVar2 + 4))(&stack0xfffffe00,&stack0xfffffdd4);
    iVar19 = uVar17 + uVar26;
    if ((int *)puVar18[0xe] != (int *)0x0) {
      (**(code **)(*(int *)puVar18[0xe] + 4))(&stack0xfffffdf8,&stack0xfffffdcc);
      iVar16 = (**(code **)(*(int *)puVar18[0xe] + 0x1c))();
      if (iVar19 < (int)(iVar16 + uVar17)) {
        iVar19 = (**(code **)(*(int *)puVar18[0xe] + 0x1c))();
        iVar19 = iVar19 + uVar17;
      }
    }
    (**(code **)(*(int *)puVar18[-0x18] + 8))(uVar11 + (int)puVar7,iVar19);
    puVar18 = puVar18 + 1;
    iVar19 = iVar4 + 1;
  } while (iVar19 < 0xb);
  pBVar8 = operator_new(300);
  uStack_58 = 9;
  if (pBVar8 == (Button *)0x0) {
    pBVar8 = (Button *)0x0;
  }
  else {
    BVar31 = (Button)0x0;
    lVar21 = __ftol();
    uVar10 = (uint)lVar21;
    lVar21 = __ftol();
    uVar17 = (uint)lVar21;
    uVar26 = 0;
    lVar21 = __ftol();
    uVar11 = (uint)lVar21;
    pcVar24 = FUN_100349a0(s_HD_Menu_Cancel_100963ee + 2);
    pBVar8 = FUN_1005a0b0(pBVar8,pcVar24,uVar11,uVar26,uVar17,uVar10,BVar31);
  }
  *(Button **)((int)this + 0x164) = pBVar8;
  uStack_58 = 0xffffffff;
  (**(code **)(*(int *)pBVar8 + 0x40))();
  puVar18 = operator_new(8);
  if (puVar18 != (undefined4 *)0x0) {
    *puVar18 = &PTR_FUN_1007da94;
    puVar18[1] = 0;
  }
  (**(code **)(**(int **)((int)this + 0x164) + 0x240))();
  *(undefined4 *)((int)this + 0xd6c) = 0;
  ExceptionList = pvStack_68;
  return this;
}

/* 100597e0  FUN_100597e0  (127 bytes)
 * undefined4 FUN_100597e0(int param_1)
 */
undefined4 __thiscall FUN_100597e0(void *this,int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (((-1 < param_1) && (param_1 < 10)) &&
     (in_EAX = 0, *(int *)((int)this + param_1 * 4 + 0x134) != 0)) {
    if (param_1 == 0) {
      if (*(int *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) == -1) {
        uVar1 = (**(code **)(**(int **)((int)this + 0x134) + 600))();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      param_1 = 10;
    }
    in_EAX = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x260))();
    if (in_EAX == 0) {
      uVar1 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 600))();
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* 10059860  FUN_10059860  (30 bytes)
 * undefined FUN_10059860(int * param_1)
 */
void __fastcall FUN_10059860(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  (**(code **)(*(int *)param_1[0x5a] + 0x20c))(0,0);
  return;
}

/* 10059880  FUN_10059880  (134 bytes)
 * undefined FUN_10059880(int param_1)
 */
void __thiscall FUN_10059880(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xb;
  puVar2 = (undefined4 *)((int)this + 0xd4);
  do {
    (**(code **)(*(int *)puVar2[0x18] + 0x234))(0);
    (**(code **)(*(int *)*puVar2 + 0x24))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((10 < param_1) || (param_1 < 0)) {
    param_1 = 0;
  }
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x234))(1);
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0xd4) + 0x24))(1);
  *(int *)((int)this + 0xd6c) = param_1;
  (**(code **)(**(int **)((int)this + 0x168) + 0x20c))(0,0);
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  return;
}

/* 10059910  FUN_10059910  (49 bytes)
 * undefined FUN_10059910(int param_1)
 */
void __fastcall FUN_10059910(int param_1)

{
  (*gEngfuncs.pfnClientCmd)((char *)(param_1 + 4));
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_10064200((int)DAT_100d5cb0);
    return;
  }
  FUN_100636d0(DAT_100d5cb0);
  return;
}

/* 10059950  FUN_10059950  (49 bytes)
 * undefined FUN_10059950(int param_1)
 */
void __fastcall FUN_10059950(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_10064200((int)DAT_100d5cb0);
    return;
  }
  FUN_100636d0(DAT_100d5cb0);
  FUN_10064050(DAT_100d5cb0,*(int *)(param_1 + 4));
  return;
}

/* 1005a010  FUN_1005a010  (85 bytes)
 * undefined * FUN_1005a010(byte.conflict * param_1)
 * called by: FUN_1005a070
 */
undefined * __cdecl FUN_1005a010(byte_conflict *param_1)

{
  undefined1 local_100 [256];
  
  FUN_1006ac7a(local_100,param_1);
  FUN_1006ac7a(&DAT_1018d19c,(byte_conflict *)s_gfx_vgui__s_tga_100964d8);
  return &DAT_1018d19c;
}

/* 1005a070  FUN_1005a070  (49 bytes)
 * undefined FUN_1005a070(void)
 * called by: FUN_1005a500, FUN_1005a550, FUN_1005a620
 */
void FUN_1005a070(void)

{
  undefined *puVar1;
  byte_conflict local_100 [256];
  
  FUN_1006ac7a(local_100,(byte_conflict *)s___d__s_100964e8);
  puVar1 = FUN_1005a010(local_100);
  FUN_1005b8d0(puVar1);
  return;
}

/* 1005a0b0  FUN_1005a0b0  (86 bytes)
 * Button * FUN_1005a0b0(Button * param_1, char * param_2, int param_3, int param_4, int param_5, int param_6, Button param_7)
 * called by: FUN_10058880, FUN_1005a620, FUN_1005bb90, FUN_1005f220, FUN_10060c70, FUN_100615a0, FUN_10061720, FUN_100655d0
 */
Button * __thiscall
FUN_1005a0b0(Button *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
            Button param_7)

{
  vgui::Button::Button(param_1,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)param_1 = &PTR_setPos_1007e4a4;
  param_1[0x128] = param_7;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_1005a170((int *)param_1);
  FUN_1005a250(param_1,param_2);
  return param_1;
}

/* 1005a110  FUN_1005a110  (83 bytes)
 * Button * FUN_1005a110(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_10060c70
 */
Button * __thiscall
FUN_1005a110(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  vgui::Button::Button(this,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_1007e4a4;
  *(undefined4 *)((int)this + 0xf0) = param_1;
  *(undefined1 *)((int)this + 0x128) = 0;
  FUN_1005a170(this);
  FUN_1005a250(this,param_2);
  return this;
}

/* 1005a170  FUN_1005a170  (116 bytes)
 * undefined FUN_1005a170(int * param_1)
 * called by: FUN_1005a0b0, FUN_1005a110
 */
void __fastcall FUN_1005a170(int *param_1)

{
  undefined4 *puVar1;
  
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  (**(code **)(*param_1 + 0x124))(3);
  (**(code **)(*param_1 + 0x21c))(3);
  if ((char)param_1[0x4a] == '\0') {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_LAB_1007e70c;
      puVar1[2] = param_1;
      (**(code **)(*param_1 + 0x70))(puVar1);
      *(undefined1 *)(param_1 + 0x48) = 0;
      return;
    }
    (**(code **)(*param_1 + 0x70))(0);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}

/* 1005a1f0  FUN_1005a1f0  (95 bytes)
 * undefined FUN_1005a1f0(char * param_1)
 * called by: FUN_1005a250, FUN_1005a280
 */
void __fastcall FUN_1005a1f0(char *param_1)

{
  Label *extraout_ECX;
  Label *extraout_ECX_00;
  Label *this;
  undefined1 local_80 [31];
  undefined1 local_61;
  
  if (param_1[0x120] == '\0') {
    FUN_1006ac7a(local_80,(byte_conflict *)s__s_100964f0);
    this = extraout_ECX_00;
  }
  else {
    FUN_1006ac7a(local_80,(byte_conflict *)s__c__s_100964f8);
    this = extraout_ECX;
  }
  local_61 = 0;
  vgui::Label::setText(this,param_1);
  return;
}

/* 1005a250  FUN_1005a250  (43 bytes)
 * undefined FUN_1005a250(char * param_1)
 * called by: FUN_1005a0b0, FUN_1005a110
 */
void __thiscall FUN_1005a250(void *this,char *param_1)

{
  _strncpy((char *)((int)this + 0x100),param_1,0x20);
  *(undefined1 *)((int)this + 0x11f) = 0;
  FUN_1005a1f0(this);
  return;
}

/* 1005a280  FUN_1005a280  (18 bytes)
 * undefined FUN_1005a280(char param_1)
 * called by: FUN_10058880, FUN_10060180, FUN_10060c70, FUN_100655d0
 */
void __thiscall FUN_1005a280(void *this,char param_1)

{
  *(char *)((int)this + 0x120) = param_1;
  FUN_1005a1f0(this);
  return;
}

/* 1005a2a0  FUN_1005a2a0  (7 bytes)
 * undefined1 FUN_1005a2a0(int param_1)
 * called by: FUN_100601f0
 */
undefined1 __fastcall FUN_1005a2a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x120);
}

/* 1005a2b0  FUN_1005a2b0  (25 bytes)
 * undefined FUN_1005a2b0(int param_1)
 * called by: FUN_10060530
 */
void __thiscall FUN_1005a2b0(void *this,int param_1)

{
  *(int *)((int)this + 0xf4) = param_1;
  (**(code **)(*(int *)this + 0x250))(0,0);
  return;
}

/* 1005a2d0  FUN_1005a2d0  (23 bytes)
 * undefined FUN_1005a2d0(undefined4 param_1)
 * called by: FUN_10060450
 */
void __thiscall FUN_1005a2d0(void *this,undefined4 *param_1)

{
  if (*(void **)((int)this + 0xf4) != (void *)0x0) {
    FUN_10060450(*(void **)((int)this + 0xf4),param_1);
  }
  return;
}

/* 1005a2f0  FUN_1005a2f0  (119 bytes)
 * undefined FUN_1005a2f0(Label * param_1)
 */
void __fastcall FUN_1005a2f0(Label *param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    cVar2 = (**(code **)(*(int *)param_1 + 0x238))();
    piVar1 = *(int **)(param_1 + 0xfc);
    if (cVar2 == '\0') {
      piVar1[0x34] = 0;
      (**(code **)(*piVar1 + 0x30))();
    }
    else {
      piVar1[0x34] = 1;
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  cVar2 = (**(code **)(*(int *)param_1 + 0x248))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)param_1 + 0x124))(7);
    vgui::Label::paint(param_1);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x124))(3);
  vgui::Label::paint(param_1);
  return;
}

/* 1005a370  FUN_1005a370  (85 bytes)
 * undefined FUN_1005a370(int * param_1)
 */
void __fastcall FUN_1005a370(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x248))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x17c))(4);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  (**(code **)(*param_1 + 0x17c))(6);
  (**(code **)(*param_1 + 0x184))(0,0,param_1[3],param_1[4]);
  return;
}

/* 1005a3d0  FUN_1005a3d0  (60 bytes)
 * undefined FUN_1005a3d0(int * param_1)
 * called by: FUN_1005a3d0
 */
void __fastcall FUN_1005a3d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1005a440((int)param_1);
  if (iVar1 != 0) {
    FUN_10060280(iVar1);
    if (*(void **)(iVar1 + 0xbc) != (void *)0x0) {
      piVar2 = (int *)FUN_100602d0(*(void **)(iVar1 + 0xbc),iVar1);
      FUN_1005a3d0(piVar2);
    }
  }
  (**(code **)(*param_1 + 0x234))(1);
  return;
}

/* 1005a410  FUN_1005a410  (36 bytes)
 * undefined FUN_1005a410(int * param_1)
 */
void __fastcall FUN_1005a410(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1005a440((int)param_1);
  if ((iVar1 == 0) || (param_1[0x3d] == 0)) {
    (**(code **)(*param_1 + 0x234))(0);
  }
  return;
}

/* 1005a440  FUN_1005a440  (7 bytes)
 * undefined4 FUN_1005a440(int param_1)
 * called by: FUN_1005a3d0, FUN_1005a410
 */
undefined4 __fastcall FUN_1005a440(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}

/* 1005a460  FUN_1005a460  (160 bytes)
 * bool FUN_1005a460(int param_1)
 */
bool __fastcall FUN_1005a460(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 300) == -1) {
    return *(int *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) == -1;
  }
  if (((*(uint *)(DAT_100d5cb0 + 0x894) & *(uint *)(&DAT_10096a44 + *(int *)(param_1 + 300) * 4)) !=
       0) || ((*(uint *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) &
              *(uint *)(&DAT_10096a44 + *(int *)(param_1 + 300) * 4)) != 0)) {
    return true;
  }
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_classautokill_10093834);
  if (fVar1 != (float10)0.0) {
    if (*(int *)(DAT_100d5cb0 + 0x8b8) != 0) {
      if (*(int *)(param_1 + 300) == 10) {
        return true;
      }
      if (*(int *)(DAT_100d5cb0 + 0x8b8) != 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 300) == DAT_10190a10) {
      return true;
    }
  }
  return false;
}

/* 1005a500  FUN_1005a500  (73 bytes)
 * Label * FUN_1005a500(undefined4 param_1, int param_2, int param_3)
 * called by: FUN_10060530
 */
Label * __thiscall FUN_1005a500(void *this,undefined4 param_1,int param_2,int param_3)

{
  Image *pIVar1;
  
  vgui::Label::Label(this,s_,param_2,param_3);
  *(undefined ***)this = &PTR_setPos_1007e738;
  vgui::Label::setContentFitted(this,true);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 0xd0) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  return this;
}

/* 1005a550  FUN_1005a550  (83 bytes)
 * Label * FUN_1005a550(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 * called by: FUN_10058880
 */
Label * __thiscall
FUN_1005a550(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  Image *pIVar1;
  
  vgui::Label::Label(this,s_,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_1007e738;
  vgui::Label::setContentFitted(this,true);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 0xd0) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  return this;
}

/* 1005a5f0  FUN_1005a5f0  (37 bytes)
 * undefined FUN_1005a5f0(int * param_1)
 */
void __fastcall FUN_1005a5f0(int *param_1)

{
  (**(code **)(*param_1 + 0x17c))(5);
  (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  return;
}

/* 1005a620  FUN_1005a620  (142 bytes)
 * Button * FUN_1005a620(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_1005a860
 */
Button * __thiscall
FUN_1005a620(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Image *pIVar1;
  InputSignal *pIVar2;
  
  FUN_1005a0b0(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_1007e96c;
  vgui::Label::setFgColor(this,3);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 300) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  pIVar2 = operator_new(0xc);
  if (pIVar2 != (InputSignal *)0x0) {
    *(void **)(pIVar2 + 4) = this;
    *(undefined ***)pIVar2 = &PTR_LAB_1007e70c;
    *(void **)(pIVar2 + 8) = this;
    vgui::Panel::addInputSignal(this,pIVar2);
    return this;
  }
  vgui::Panel::addInputSignal(this,(InputSignal *)0x0);
  return this;
}

/* 1005a860  FUN_1005a860  (640 bytes)
 * ScrollPanel * FUN_1005a860(int param_1, int param_2, int param_3, int param_4)
 * called by: FUN_10058880, FUN_1005bb90, FUN_100655d0
 */
ScrollPanel * __thiscall FUN_1005a860(void *this,int param_1,int param_2,int param_3,int param_4)

{
  ScrollBar *pSVar1;
  void *pvVar2;
  Button *pBVar3;
  Slider *pSVar4;
  int unaff_retaddr;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  Slider *local_4;
  
  local_4 = (Slider *)0xffffffff;
  puStack_8 = &LAB_10077ba2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::ScrollPanel::ScrollPanel(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_setPos_1007ee14;
  pSVar1 = vgui::ScrollPanel::getVerticalScrollBar(this);
  pvVar2 = operator_new(0x130);
  local_4 = (Slider *)0x0;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,0,s_,0,0,0x10,0x10);
  }
  iVar5 = 0;
  local_4 = (Slider *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3);
  pvVar2 = operator_new(0x130);
  pvStack_c = (void *)0x1;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,1,s_,0,0,0x10,0x10);
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  local_4 = pSVar4;
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,0,param_3 + -1,param_3,unaff_retaddr + param_3 * -2 + 2,true);
    *(undefined ***)pSVar4 = &PTR_setPos_1007ebd4;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  pSVar1 = vgui::ScrollPanel::getHorizontalScrollBar(this);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,2,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,0);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,3,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,iVar5,0,param_3 + iVar5 * -2,iVar5,false);
    *(undefined ***)pSVar4 = &PTR_setPos_1007ebd4;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  ExceptionList = pBVar3;
  return this;
}

/* 1005ab10  FUN_1005ab10  (96 bytes)
 * undefined FUN_1005ab10(int param_1)
 */
void __fastcall FUN_1005ab10(int param_1)

{
  float10 fVar1;
  
  (*gEngfuncs.pfnClientCmd)((char *)(param_1 + 4));
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_100636d0(DAT_100d5cb0);
  }
  else {
    FUN_10064200((int)DAT_100d5cb0);
  }
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_classautokill_10093834);
  if ((fVar1 != (float10)0.0) && (DAT_10190a10 != 0)) {
    (*gEngfuncs.pfnClientCmd)(&DAT_10096504);
  }
  return;
}

/* 1005abc0  FUN_1005abc0  (25 bytes)
 * Panel * FUN_1005abc0(Panel * param_1)
 * called by: FUN_1005ce70
 */
Panel * __fastcall FUN_1005abc0(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &PTR_setPos_1007f03c;
  FUN_1005b200((int)param_1);
  return param_1;
}

/* 1005abe0  FUN_1005abe0  (30 bytes)
 * undefined4 * FUN_1005abe0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1005abe0(void *this,byte_conflict param_1)

{
  FUN_1005ac00(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1005ac00  FUN_1005ac00  (11 bytes)
 * undefined FUN_1005ac00(undefined4 * param_1)
 * called by: FUN_1005abe0, Unwind@10077cb0
 */
void __fastcall FUN_1005ac00(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1007f03c;
  FUN_1005ad20((int)param_1);
  return;
}

/* 1005ac10  FUN_1005ac10  (260 bytes)
 * uint FUN_1005ac10(int param_1, int param_2)
 * called by: FUN_1005ce70
 */
uint __thiscall FUN_1005ac10(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005ad20((int)this);
  iVar5 = param_1 * param_2;
  piVar2 = operator_new(iVar5 * 0x14 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar5;
    piVar2 = piVar2 + 1;
    FUN_1006cacb(piVar2,0x14,iVar5,&LAB_1005abb0);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0xe0) = piVar2;
  puVar3 = operator_new((param_2 + param_1) * 8);
  *(undefined4 **)((int)this + 0xd0) = puVar3;
  puVar1 = puVar3 + param_1;
  *(undefined4 **)((int)this + 0xd4) = puVar1;
  *(undefined4 **)((int)this + 0xd8) = puVar1 + param_2;
  *(undefined4 **)((int)this + 0xdc) = puVar1 + param_2 + param_1;
  if ((*(int *)((int)this + 0xe0) == 0) || (puVar3 == (undefined4 *)0x0)) {
    uVar4 = FUN_1005ad20((int)this);
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    for (iVar5 = (param_2 + param_1 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(int *)((int)this + 0xc0) = param_1;
    *(int *)((int)this + 0xc4) = param_2;
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}

/* 1005ad20  FUN_1005ad20  (68 bytes)
 * undefined FUN_1005ad20(int param_1)
 * called by: FUN_1005ac00, FUN_1005ac10
 */
void __fastcall FUN_1005ad20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 != 0) {
    FUN_1006cb4d(iVar1,0x14,*(int *)(iVar1 + -4),CBasePlayerItem::AttemptToMaterialize);
    FUN_1006ad4c((LPVOID)(iVar1 + -4));
  }
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0xd0));
  FUN_1005b200(param_1);
  return;
}

/* 1005ad70  FUN_1005ad70  (76 bytes)
 * undefined4 FUN_1005ad70(int param_1, int param_2, int * param_3)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ad70(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1005b230(this,param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = piVar1;
  if ((int *)*piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*piVar1 + 0x40))(0);
  }
  *piVar1 = (int)param_3;
  if (param_3 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_3 + 0x40))(this);
  }
  *(undefined1 *)((int)this + 0xbc) = 1;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

/* 1005adc0  FUN_1005adc0  (77 bytes)
 * undefined FUN_1005adc0(int param_1, int param_2)
 * called by: FUN_1005ce70
 */
void __thiscall FUN_1005adc0(void *this,int param_1,int param_2)

{
  if (param_1 != *(int *)((int)this + 200)) {
    *(int *)((int)this + 200) = param_1;
    FUN_1005b280(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  if (param_2 != *(int *)((int)this + 0xcc)) {
    *(int *)((int)this + 0xcc) = param_2;
    FUN_1005b2e0(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  return;
}

/* 1005ae10  FUN_1005ae10  (59 bytes)
 * undefined4 FUN_1005ae10(int param_1, undefined4 param_2)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ae10(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) {
    *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4) = param_2;
    uVar1 = FUN_1005b280(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

/* 1005ae50  FUN_1005ae50  (59 bytes)
 * undefined4 FUN_1005ae50(int param_1, undefined4 param_2)
 * called by: FUN_1005af30
 */
undefined4 __thiscall FUN_1005ae50(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4) = param_2;
    uVar1 = FUN_1005b2e0(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

/* 1005ae90  FUN_1005ae90  (33 bytes)
 * undefined4 FUN_1005ae90(int param_1)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ae90(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    return *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4);
  }
  return 0;
}

/* 1005aec0  FUN_1005aec0  (108 bytes)
 * int FUN_1005aec0(int param_1)
 * called by: FUN_1005af30
 */
int __thiscall FUN_1005aec0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_4;
  
  iVar1 = param_1;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    iVar3 = 0;
    iVar4 = 0;
    local_4 = this;
    if (0 < *(int *)((int)this + 0xc0)) {
      do {
        piVar2 = (int *)FUN_1005b230(this,iVar4,iVar1);
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0xc))(&local_4,&param_1);
          if (iVar3 < param_1) {
            iVar3 = param_1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0xc0));
    }
    return iVar3;
  }
  return 0;
}

/* 1005af30  FUN_1005af30  (47 bytes)
 * undefined FUN_1005af30(void * param_1)
 * called by: FUN_1005ce70, FUN_1005db70
 */
void __fastcall FUN_1005af30(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0xc4)) {
    do {
      iVar1 = FUN_1005aec0(param_1,iVar2);
      FUN_1005ae50(param_1,iVar2,iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0xc4));
  }
  return;
}

/* 1005af60  FUN_1005af60  (107 bytes)
 * undefined4 FUN_1005af60(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall
FUN_1005af60(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint in_EAX;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) &&
      (in_EAX = param_2, -1 < param_2)) && (param_2 < *(int *)((int)this + 0xc4))) {
    *param_3 = *(undefined4 *)(*(int *)((int)this + 0xd8) + param_1 * 4);
    *param_5 = *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4);
    *param_4 = *(undefined4 *)(*(int *)((int)this + 0xdc) + param_2 * 4);
    *param_6 = *(undefined4 *)(*(int *)((int)this + 0xd4) + param_2 * 4);
    return CONCAT31((int3)((uint)param_6 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

/* 1005afd0  FUN_1005afd0  (91 bytes)
 * undefined4 FUN_1005afd0(int param_1)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005afd0(void *this,int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0xc0);
    if (in_EAX == *(uint *)((int)this + 0xc0)) {
      iVar1 = 0;
      if (0 < (int)*(uint *)((int)this + 0xc0)) {
        do {
          *(undefined4 *)(*(int *)((int)this + 0xd0) + iVar1 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)this + 0xc0));
      }
      uVar2 = FUN_1005b280(this,0);
      *(undefined1 *)((int)this + 0xbc) = 1;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* 1005b030  FUN_1005b030  (134 bytes)
 * undefined FUN_1005b030(void * param_1)
 * called by: FUN_1005ce70, FUN_1005db70
 */
void __fastcall FUN_1005b030(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0xc0) < 1) {
    *(undefined1 *)((int)param_1 + 0xbc) = 0;
    return;
  }
  do {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0xc4)) {
      do {
        piVar1 = (int *)FUN_1005b230(param_1,iVar2,iVar3);
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 0x10))
                    (*(undefined4 *)(*(int *)((int)param_1 + 0xd8) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + iVar3 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd0) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd4) + iVar3 * 4));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0xc4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)((int)param_1 + 0xc0));
  *(undefined1 *)((int)param_1 + 0xbc) = 0;
  return;
}

/* 1005b0c0  FUN_1005b0c0  (48 bytes)
 * int FUN_1005b0c0(int param_1)
 * called by: FUN_1005ce70, FUN_1005db70
 */
int __fastcall FUN_1005b0c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (0 < iVar1) {
    return *(int *)(*(int *)(param_1 + 0xdc) + -4 + iVar1 * 4) +
           *(int *)(*(int *)(param_1 + 0xd4) + -4 + iVar1 * 4) + *(int *)(param_1 + 0xcc);
  }
  return 0;
}

/* 1005b1b0  FUN_1005b1b0  (69 bytes)
 * undefined FUN_1005b1b0(int param_1, char param_2, undefined4 param_3, undefined2 param_4, undefined2 param_5, undefined2 param_6, undefined2 param_7)
 * called by: FUN_1005db70
 */
void __thiscall
FUN_1005b1b0(void *this,int param_1,char param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  
  iVar1 = FUN_1005b230(this,0,param_1);
  *(char *)(iVar1 + 4) = param_2;
  if (param_2 != '\0') {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined2 *)(iVar1 + 6) = param_4;
    *(undefined2 *)(iVar1 + 8) = param_5;
    *(undefined2 *)(iVar1 + 10) = param_6;
    *(undefined2 *)(iVar1 + 0xc) = param_7;
  }
  return;
}

/* 1005b200  FUN_1005b200  (45 bytes)
 * undefined FUN_1005b200(int param_1)
 * called by: FUN_1005abc0, FUN_1005ad20
 */
void __fastcall FUN_1005b200(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}

/* 1005b230  FUN_1005b230  (66 bytes)
 * int FUN_1005b230(int param_1, int param_2)
 * called by: FUN_1005ad70, FUN_1005aec0, FUN_1005b030, FUN_1005b1b0, FUN_1005b330
 */
int __thiscall FUN_1005b230(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0xc4))) {
    return *(int *)((int)this + 0xe0) + (*(int *)((int)this + 0xc0) * param_2 + param_1) * 0x14;
  }
  return 0;
}

/* 1005b280  FUN_1005b280  (94 bytes)
 * undefined FUN_1005b280(int param_1)
 * called by: FUN_1005adc0, FUN_1005ae10, FUN_1005afd0
 */
void __thiscall FUN_1005b280(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 200);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd8) + -4 + param_1 * 4) +
                    *(int *)(*(int *)((int)this + 0xd0) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc0)) {
    do {
      *(int *)(*(int *)((int)this + 0xd8) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd0) + param_1 * 4) + *(int *)((int)this + 200)
      ;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc0));
  }
  return;
}

/* 1005b2e0  FUN_1005b2e0  (78 bytes)
 * undefined FUN_1005b2e0(int param_1)
 * called by: FUN_1005adc0, FUN_1005ae50
 */
void __thiscall FUN_1005b2e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xdc) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc4)) {
    do {
      *(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd4) + param_1 * 4) +
                      *(int *)((int)this + 0xcc);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc4));
  }
  return;
}

/* 1005b330  FUN_1005b330  (141 bytes)
 * undefined4 FUN_1005b330(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4)
 */
uint __thiscall
FUN_1005b330(void *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = -1;
  iVar4 = 0;
  *param_4 = -1;
  uVar3 = *(uint *)((int)this + 0xc0);
  if (0 < (int)uVar3) {
    do {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 0xc4)) {
        do {
          piVar2 = (int *)FUN_1005b230(this,iVar4,iVar5);
          if (((int *)*piVar2 != (int *)0x0) &&
             (cVar1 = (**(code **)(*(int *)*piVar2 + 0x80))(param_1,param_2), cVar1 != '\0')) {
            *param_4 = iVar4;
            *param_3 = iVar5;
            return CONCAT31((int3)((uint)param_3 >> 8),1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 0xc4));
      }
      uVar3 = *(uint *)((int)this + 0xc0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3 & 0xffffff00;
}

/* 1005b3c0  FUN_1005b3c0  (13 bytes)
 * undefined FUN_1005b3c0(undefined4 param_1)
 */
void __cdecl FUN_1005b3c0(int param_1)

{
  int extents [4];
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  extents[2] = param_1;
  extents[1] = unaff_retaddr;
  extents[3] = in_stack_00000008;
  extents[0] = param_1;
  (*gEngfuncs.VGui_ViewportPaintBackground)(extents);
  return;
}

/* 1005b3d0  FUN_1005b3d0  (6 bytes)
 * undefined FUN_1005b3d0(void)
 * called by: FUN_1005b3e0
 */
void FUN_1005b3d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x1005b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*gEngfuncs.VGui_GetPanel)();
  return;
}

/* 1005b3e0  FUN_1005b3e0  (168 bytes)
 * undefined FUN_1005b3e0(void)
 * called by: HUD_VidInit
 */
void FUN_1005b3e0(void)

{
  int *piVar1;
  BorderLayout *this;
  undefined4 uVar2;
  undefined4 *this_00;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_1005b3d0();
  (**(code **)(*piVar1 + 300))(0x80,0x80,0,0);
  this = operator_new(8);
  if (this == (BorderLayout *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = vgui::BorderLayout::BorderLayout(this,0);
  }
  (**(code **)(*piVar1 + 0xb4))(uVar2);
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10060aa0(DAT_100d5cb0);
    return;
  }
  this_00 = FUN_10066790(0xad8);
  if (this_00 != (undefined4 *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x1c))();
    iVar4 = (**(code **)(*piVar1 + 0x18))();
    DAT_100d5cb0 = FUN_100607f0(this_00,0,0,iVar4,iVar3);
    (**(code **)(*(int *)DAT_100d5cb0 + 0x40))(piVar1);
    return;
  }
  DAT_100d5cb0 = (Panel *)0x0;
  (**(code **)(iRam00000000 + 0x40))(piVar1);
  return;
}

/* 1005b490  FUN_1005b490  (256 bytes)
 * Panel * FUN_1005b490(Panel * param_1)
 * called by: FUN_1005ce70
 */
Panel * __fastcall FUN_1005b490(Panel *param_1)

{
  Panel *this;
  Slider2 *this_00;
  ScrollBar2 *this_01;
  
  vgui::Panel::Panel(param_1,0,0,0,0);
  this = param_1 + 200;
  vgui::Panel::Panel(this,0,0,0,0);
  this_00 = (Slider2 *)(param_1 + 0x188);
  vgui::Slider2::Slider2(this_00,0,0,10,0x28,true);
  this_01 = (ScrollBar2 *)(param_1 + 0x284);
  vgui::ScrollBar2::ScrollBar2(this_01,0,0,0,0,true);
  *(undefined ***)(param_1 + 0x35c) = &PTR_LAB_1007f43c;
  *(undefined ***)param_1 = &PTR_LAB_1007f23c;
  *(Panel **)(param_1 + 0x360) = param_1;
  (**(code **)(*(int *)this + 0x40))(param_1);
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  (**(code **)(*(int *)this_00 + 0x214))(0x32);
  (**(code **)(*(int *)this_00 + 0x218))(1);
  (**(code **)(*(int *)this_01 + 0x40))(param_1);
  (**(code **)(*(int *)this_01 + 0x204))(param_1 + 0x35c);
  (**(code **)(*(int *)this_01 + 0x224))(this_00);
  (**(code **)(*(int *)this_01 + 0x230))(1);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(Panel **)(param_1 + 0xc0) = param_1 + 0xbc;
  *(Panel **)(param_1 + 0xc4) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  return param_1;
}

/* 1005b590  FUN_1005b590  (103 bytes)
 * undefined FUN_1005b590(undefined4 * param_1)
 * called by: Unwind@10077cd9
 */
void __fastcall FUN_1005b590(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_1007f23c;
  puVar3 = (undefined4 *)param_1[0x31];
  puVar1 = param_1 + 0x2f;
  param_1[0x61] = 0;
  if (puVar3 == puVar1) {
    param_1[0x31] = puVar1;
    param_1[0x30] = puVar1;
    return;
  }
  do {
    (**(code **)(*(int *)*puVar3 + 0x40))(0);
    puVar2 = (undefined4 *)puVar3[2];
    FUN_1006ad4c(puVar3);
    puVar3 = puVar2;
  } while (puVar2 != puVar1);
  param_1[0x31] = puVar1;
  param_1[0x30] = puVar1;
  return;
}

/* 1005b600  FUN_1005b600  (145 bytes)
 * undefined FUN_1005b600(int * param_1)
 * called by: FUN_1005ce70
 */
void __thiscall FUN_1005b600(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    (**(code **)(*param_1 + 0x40))((int)this + 200);
    iVar1 = *(int *)((int)this + 0xc0);
    puVar2[1] = iVar1;
    puVar2[2] = (int)this + 0xbc;
    *(undefined4 **)(iVar1 + 8) = puVar2;
    *(undefined4 **)(puVar2[2] + 4) = puVar2;
    iVar1 = *(int *)((int)this + 0x284);
    iVar3 = FUN_1005b890((int)this);
    (**(code **)(iVar1 + 0x208))(0,iVar3);
    (**(code **)(*(int *)((int)this + 0x188) + 0x214))(0x32);
    (**(code **)(*(int *)((int)this + 0x188) + 0x218))(1);
    FUN_1005b730(this);
  }
  return;
}

/* 1005b6a0  FUN_1005b6a0  (27 bytes)
 * int FUN_1005b6a0(int param_1)
 * called by: FUN_1005b890
 */
int __fastcall FUN_1005b6a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != param_1 + 0xbc; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* 1005b700  FUN_1005b700  (38 bytes)
 * undefined FUN_1005b700(int * param_1)
 */
void __fastcall FUN_1005b700(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0xa1] + 0x200))();
  param_1[0x61] = iVar1;
  FUN_1005b730(param_1);
  return;
}

/* 1005b730  FUN_1005b730  (301 bytes)
 * undefined FUN_1005b730(int * param_1)
 * called by: FUN_1005b600, FUN_1005b700, FUN_1005b860
 */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1005b730(int *param_1)

{
  undefined1 *puVar1;
  uint unaff_ESI;
  int *piVar2;
  int unaff_EDI;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  puStack_3c = local_24;
  puStack_38 = local_20;
  puStack_40 = local_c;
  puStack_44 = local_8;
  uStack_48 = 0x1005b754;
  (**(code **)(*param_1 + 0x14))();
  puVar1 = (undefined1 *)0x0;
  iVar4 = 0;
  uStack_48 = unaff_ESI;
  (**(code **)(param_1[0x32] + 0x10))(0,0,unaff_EDI + -0xf);
  uVar3 = 0;
  (**(code **)(param_1[0xa1] + 0x10))(puStack_44 + -0xf,0,0xf,puStack_40);
  uStack_48 = uStack_48 & 0xffffff00;
  iVar5 = 0;
  puStack_40 = (undefined1 *)FUN_1005b890((int)param_1);
  piVar2 = (int *)param_1[0x31];
  if (piVar2 != param_1 + 0x2f) {
    do {
      if (iVar5 < param_1[0x61]) {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
LAB_1005b823:
        uStack_48 = CONCAT31(uStack_48._1_3_,1);
      }
      else if (iVar5 < (int)puStack_40) {
        (**(code **)(*(int *)*piVar2 + 0x24))(1);
        (**(code **)(*(int *)*piVar2 + 0xc))(&puStack_38,&uStack_48);
        (**(code **)(*(int *)*piVar2 + 0x10))(0,puVar1,uVar3,iVar4);
        puVar1 = puVar1 + (int)puStack_44;
        if (iVar4 < (int)puVar1) goto LAB_1005b823;
      }
      else {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
      }
      piVar2 = (int *)piVar2[2];
      iVar5 = iVar5 + 1;
    } while (piVar2 != param_1 + 0x2f);
  }
  (**(code **)(param_1[0xa1] + 0x24))(uStack_48);
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 1005b860  FUN_1005b860  (45 bytes)
 * undefined FUN_1005b860(int param_1)
 * called by: FUN_1005d5f0
 */
void __thiscall FUN_1005b860(void *this,int param_1)

{
  *(int *)((int)this + 0x364) = param_1;
  (**(code **)(*(int *)((int)this + 0x284) + 0x208))(0,param_1);
  FUN_1005b730(this);
  return;
}

/* 1005b890  FUN_1005b890  (17 bytes)
 * int FUN_1005b890(int param_1)
 * called by: FUN_1005b600, FUN_1005b730
 */
int __fastcall FUN_1005b890(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x364);
  if (iVar1 < 0) {
    iVar1 = FUN_1005b6a0(param_1);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

/* 1005b8d0  FUN_1005b8d0  (176 bytes)
 * undefined4 FUN_1005b8d0(undefined4 param_1)
 * called by: FUN_100158c0, FUN_10017af0, FUN_100585b0, FUN_1005a070, vgui::ScrollBar2::ScrollBar2
 */
undefined4 __cdecl FUN_1005b8d0(char *param_1)

{
  BitmapTGA *this;
  undefined4 uVar1;
  undefined **local_1c;
  byte_conflict *local_18;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10077bdb;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  local_1c = &PTR_LAB_1007f440;
  local_18 = (byte_conflict *)0x0;
  local_14[1] = 0;
  local_14[0] = 0;
  ExceptionList = &pvStack_c;
  local_18 = (*gEngfuncs.COM_LoadFile)(param_1,5,local_14);
  if (local_18 == (byte_conflict *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  local_14[1] = 0;
  this = operator_new(0x30);
  uStack_4 = 0;
  if (this != (BitmapTGA *)0x0) {
    uVar1 = vgui::BitmapTGA::BitmapTGA(this,(InputStream *)&local_1c,true);
  }
  uStack_4 = 0xffffffff;
  (*gEngfuncs.COM_FreeFile)(local_18);
  ExceptionList = pvStack_c;
  return uVar1;
}

/* 1005ba10  FUN_1005ba10  (48 bytes)
 * undefined FUN_1005ba10(int param_1, int param_2, undefined4 param_3)
 */
void __thiscall FUN_1005ba10(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = (**(code **)(*(int *)this + 0x14))(param_3);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(iVar2 + param_1) = uVar1;
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

/* 1005ba50  FUN_1005ba50  (175 bytes)
 * undefined4 FUN_1005ba50(undefined4 param_1)
 * called by: FUN_10017af0
 */
undefined4 __cdecl FUN_1005ba50(char *param_1)

{
  BitmapTGA *this;
  undefined4 uVar1;
  undefined **local_1c;
  byte_conflict *local_18;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10077bfb;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  local_1c = &PTR_LAB_1007f440;
  local_18 = (byte_conflict *)0x0;
  local_14[1] = 0;
  local_14[0] = 0;
  ExceptionList = &pvStack_c;
  local_18 = (*gEngfuncs.COM_LoadFile)(param_1,5,local_14);
  if (local_18 == (byte_conflict *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  local_14[1] = 0;
  this = operator_new(0x30);
  uStack_4 = 0;
  if (this != (BitmapTGA *)0x0) {
    uVar1 = vgui::BitmapTGA::BitmapTGA(this,(InputStream *)&local_1c,false);
  }
  uStack_4 = 0xffffffff;
  (*gEngfuncs.COM_FreeFile)(local_18);
  ExceptionList = pvStack_c;
  return uVar1;
}

/* 1005bb00  FUN_1005bb00  (130 bytes)
 * Panel * FUN_1005bb00(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 * called by: FUN_10063c00
 */
Panel * __cdecl
FUN_1005bb00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  void *this;
  Panel *pPVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    pPVar1 = FUN_1005bb90(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Panel *)0x0;
}

/* 1005bb90  FUN_1005bb90  (1727 bytes)
 * Panel * FUN_1005bb90(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 * called by: FUN_1005bb00
 */
Panel * __thiscall
FUN_1005bb90(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,int param_8)

{
  Panel *this_00;
  LineBorder *pLVar1;
  uint uVar2;
  Label *this_01;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  ScrollPanel *pSVar8;
  TextPanel *this_02;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  Button *pBVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  Panel *pPVar19;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  Button BVar24;
  undefined4 uStack_bc;
  uint uVar25;
  void *this_03;
  void *this_04;
  int *piStack_70;
  uint uVar26;
  uint uVar27;
  void *pvVar28;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  Panel *local_1c;
  int local_18;
  uint uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077c72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_5,param_6,param_7,param_8);
  *(undefined4 *)((int)this + 200) = param_4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(uint *)((int)this + 0xbc) = (-(uint)(param_3 != 0) & 0xffffff65) + 0xff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined ***)this = &PTR_setPos_1007f464;
  pvVar5 = (void *)(DAT_100d5cb0 + 0x22c);
  FUN_1005cc60(pvVar5,(byte_conflict *)s_Title_Font_1009649c);
  FUN_1005cc60(pvVar5,(byte_conflict *)s_Briefing_Text_1009648c);
  this_00 = operator_new(0xc0);
  local_4 = 0;
  pPVar19 = (Panel *)0x0;
  local_1c = this_00;
  if (this_00 != (Panel *)0x0) {
    lVar20 = __ftol();
    lVar21 = __ftol();
    lVar22 = __ftol();
    lVar23 = __ftol();
    vgui::Panel::Panel(this_00,(int)lVar23,(int)lVar22,(int)lVar21,(int)lVar20);
    *(undefined ***)this_00 = &PTR_setPos_1007daa0;
    *(uint *)(this_00 + 0xbc) = (-(uint)(param_3 != 0) & 0x9b) + 100;
    pPVar19 = this_00;
  }
  *(Panel **)((int)this + 0xd4) = pPVar19;
  local_4 = 0xffffffff;
  pvVar28 = this;
  (**(code **)(*(int *)pPVar19 + 0x40))();
  pLVar1 = operator_new(0x44);
  puStack_8 = (undefined1 *)0x1;
  if (pLVar1 == (LineBorder *)0x0) {
    uVar2 = 0;
  }
  else {
    piStack_70 = (int *)0x1005bd26;
    vgui::Color::Color((Color *)&local_1c,0xb2,0x76,0,0);
    puStack_20 = &stack0xffffff98;
    uVar2 = vgui::LineBorder::LineBorder(pLVar1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xd4))();
  uVar27 = 1;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x24))();
  piStack_70 = (int *)0x1005bd81;
  (**(code **)(**(int **)((int)this + 0xd4) + 4))();
  piStack_70 = (int *)&stack0xffffffb4;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xc))();
  this_01 = operator_new(0xd0);
  puStack_20 = (undefined1 *)0x2;
  if (this_01 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    piVar4 = (int *)vgui::Label::Label(this_01,s_,(int)lVar20,iVar3);
  }
  puStack_20 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  iVar3 = *piVar4;
  FUN_1005cce0(pvVar5,uStack_10);
  (**(code **)(iVar3 + 0x208))();
  (**(code **)(*piVar4 + 0x20c))();
  FUN_1005ccf0(pvVar5,local_18,(uint *)&piStack_70,&uStack_14,&uStack_10,(uint *)&pvStack_c);
  this_04 = pvStack_c;
  (**(code **)(*piVar4 + 0x120))();
  (**(code **)(*piVar4 + 0x124))();
  FUN_1005cd30(pvVar5,local_18,(uint *)&stack0xffffff7c,&uStack_28,&uStack_24,(uint *)&puStack_20);
  (**(code **)(*piVar4 + 300))();
  this_03 = (void *)0x3;
  (**(code **)(*piVar4 + 0x21c))();
  (**(code **)(*piVar4 + 0x200))();
  pvVar5 = operator_new(0xd0);
  if (pvVar5 == (void *)0x0) {
    pSVar8 = (ScrollPanel *)0x0;
    uVar7 = uStack_10;
  }
  else {
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    iVar6 = (int)lVar20;
    lVar20 = __ftol();
    uVar7 = (uint)lVar20;
    lVar20 = __ftol();
    uStack_bc = 0x1005bf75;
    pSVar8 = FUN_1005a860(pvVar5,(int)lVar20,uVar7,iVar6,iVar3);
    uVar7 = uStack_10;
  }
  (**(code **)(*(int *)pSVar8 + 0x40))();
  uVar25 = 0;
  (**(code **)(*(int *)pSVar8 + 0x200))();
  uStack_bc = 1;
  (**(code **)(*(int *)pSVar8 + 0x1fc))();
  (**(code **)(*(int *)pSVar8 + 0x220))();
  this_02 = operator_new(0xc0);
  if (this_02 == (TextPanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::TextPanel::TextPanel(this_02,s_,0,0,0x40,0x40);
  }
  uVar26 = 0xffffffff;
  iVar3 = *piVar4;
  uVar9 = (**(code **)(*(int *)pSVar8 + 0x204))();
  (**(code **)(iVar3 + 0x40))();
  iVar3 = *piVar4;
  uVar10 = FUN_1005cce0(this_04,(int)pvVar28);
  (**(code **)(iVar3 + 0x200))();
  FUN_1005ccf0(this_03,uVar2,(uint *)&stack0xffffff4c,(uint *)&stack0xffffffa8,
               (uint *)&stack0xffffffac,(uint *)&stack0xffffffb0);
  pvVar5 = (void *)0xffffffff;
  (**(code **)(*piVar4 + 0x120))(uVar25,unaff_EDI,0xffffffff,unaff_EBP);
  FUN_1005cd30(this_03,(int)piStack_70,(uint *)&stack0xffffff3c,(uint *)&stack0xffffff98,
               (uint *)&stack0xffffff9c,(uint *)&stack0xffffffa0);
  (**(code **)(*piVar4 + 300))(uVar10,uVar26,uVar27,uVar2);
  (**(code **)(*piVar4 + 0x1fc))(uVar7);
  piVar11 = (int *)(**(code **)(*(int *)pSVar8 + 0x208))();
  piStack_70 = (int *)(**(code **)(*(int *)pSVar8 + 0x208))();
  piVar12 = (int *)(**(code **)(*piVar4 + 0x208))();
  iVar3 = *piVar12;
  uVar13 = (**(code **)(*piVar11 + 0x1c))();
  uVar13 = (**(code **)(*piStack_70 + 0x18))(uVar13);
  (**(code **)(iVar3 + 0x14))(uVar13);
  piVar11 = (int *)(**(code **)(*piVar4 + 0x208))();
  (**(code **)(*piVar11 + 0x68))(&stack0xffffff48,&uStack_bc);
  (**(code **)(*piVar4 + 8))(uVar9,uVar10);
  (**(code **)(*(int *)pSVar8 + 0x200))(1,1);
  (**(code **)(*(int *)pSVar8 + 0x1fc))(0,0);
  (**(code **)(*(int *)pSVar8 + 0x220))();
  pBVar14 = operator_new(300);
  uStack_bc = 5;
  if (pBVar14 == (Button *)0x0) {
    pBVar14 = (Button *)0x0;
  }
  else {
    BVar24 = (Button)0x0;
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    iVar6 = (int)lVar20;
    lVar20 = __ftol();
    iVar15 = (int)lVar20;
    lVar20 = __ftol();
    iVar16 = (int)lVar20;
    pcVar17 = FUN_100349a0(s__Menu_OK_10092f74);
    pBVar14 = FUN_1005a0b0(pBVar14,pcVar17,iVar16,iVar15,iVar6,iVar3,BVar24);
  }
  uStack_bc = 0xffffffff;
  puVar18 = operator_new(8);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    *puVar18 = &PTR_FUN_1007da94;
    puVar18[1] = 0;
  }
  (**(code **)(*(int *)pBVar14 + 0x240))(puVar18);
  (**(code **)(*(int *)pBVar14 + 0x40))(this);
  ExceptionList = pvVar5;
  return this;
}

/* 1005c2a0  FUN_1005c2a0  (27 bytes)
 * undefined FUN_1005c2a0(void)
 * called by: HUD_Init
 */
void FUN_1005c2a0(void)

{
  DAT_1018f1a8 = (*gEngfuncs.pfnRegisterVariable)(s_bitmapfonts_10096534,&DAT_10092c08,0);
  return;
}

/* 1005c300  FUN_1005c300  (2027 bytes)
 * undefined4 * FUN_1005c300(int param_1)
 * called by: FUN_100607f0
 */
undefined4 * __thiscall FUN_1005c300(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  Font *this_00;
  undefined4 uVar6;
  int iVar7;
  void *this_01;
  void *this_02;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar8;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  void *this_11;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  byte_conflict *pbVar16;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  char *pcStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  int iStack_684;
  char *pcStack_680;
  char *pcStack_678;
  byte_conflict abStack_674 [47];
  undefined1 uStack_645;
  byte_conflict abStack_634 [40];
  char local_60c [8];
  char acStack_604 [8];
  byte_conflict abStack_5fc [7];
  undefined1 uStack_5f5;
  char acStack_5f4 [8];
  char acStack_5ec [1004];
  char acStack_200 [500];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10077c9c;
  pvStack_c = ExceptionList;
  pcVar11 = (char *)0x0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_1007f680;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  pcVar3 = (char *)FUN_1005caf0(s_,param_1,s__textscheme_txt_10096708);
  *(int *)((int)this + 0xc) = param_1;
  if ((DAT_1018d2a0 & 1) == 0) {
    DAT_1018d2a0 = DAT_1018d2a0 | 1;
    FUN_1006cacb(&DAT_1018d2a8,0x7c,0x40,&LAB_1005c2c0);
    FUN_1006af63(0x1005cbd0);
  }
  puVar12 = &DAT_1018d2a8;
  for (iVar7 = 0x7c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  if (pcVar3 == (char *)0x0) {
    (*gEngfuncs.Con_DPrintf)(s_Unable_to_find___textscheme_txt_100966e4);
  }
  else {
    pcStack_690 = (*gEngfuncs.COM_ParseFile)(pcVar3,local_60c);
    iVar7 = -1;
    pcVar3 = acStack_604;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      pcVar3 = (char *)0x1018d22c;
      while ((int)pcVar3 < 0x1018f1a8) {
        _strncpy((char *)&iStack_684,acStack_604,0x40);
        uStack_645 = 0;
        pcVar4 = (*gEngfuncs.COM_ParseFile)(pcStack_690,acStack_604);
        uVar9 = FUN_10076d90(this_01,abStack_5fc,&DAT_100966e0);
        if (uVar9 != 0) {
          if ((int)uStack_68c < 0) {
            (*gEngfuncs.Con_Printf)(s_error_parsing_font_scheme_text_f_100965f4,abStack_5fc);
          }
          else {
            (*gEngfuncs.Con_Printf)
                      (s_error_parsing_font_scheme_text_f_100965a4,
                       &DAT_1018d2a8 + (int)uStack_68c * 0x1f,abStack_5fc);
          }
          break;
        }
        pcStack_680 = (*gEngfuncs.COM_ParseFile)(pcVar4,(char *)abStack_5fc);
        _strncpy((char *)abStack_634,acStack_5f4,0x40);
        uStack_5f5 = 0;
        uVar9 = FUN_10076d90(this_02,abStack_674,(byte_conflict *)s_SchemeName_100966d4);
        pvVar8 = extraout_ECX;
        pcVar4 = pcVar3;
        if (uVar9 == 0) {
          if (pcVar11 != (char *)0x0) {
            if (uStack_688._2_1_ == '\0') {
              pcVar11[99] = -1;
              pcVar11[0x62] = -1;
              pcVar11[0x61] = -1;
              pcVar11[0x60] = -1;
            }
            if ((char)uStack_688 == '\0') {
              *(undefined4 *)(pcVar11 + 0x68) = *(undefined4 *)(pcVar11 + 0x60);
            }
            if (uStack_688._3_1_ == '\0') {
              *(undefined4 *)(pcVar11 + 0x70) = *(undefined4 *)(pcVar11 + 0x68);
            }
            if (uStack_68c._3_1_ == '\0') {
              pcVar11[0x67] = '\0';
              pcVar11[0x66] = '\0';
              pcVar11[0x65] = '\0';
              pcVar11[100] = '\0';
            }
            if (uStack_688._1_1_ == '\0') {
              *(undefined4 *)(pcVar11 + 0x6c) = *(undefined4 *)(pcVar11 + 100);
            }
            if (uStack_68c._2_1_ == '\0') {
              *(undefined4 *)(pcVar11 + 0x74) = *(undefined4 *)(pcVar11 + 0x6c);
            }
            if (*(int *)(pcVar11 + 0x50) == 0) {
              pcVar11[0x50] = '\x11';
              pcVar11[0x51] = '\0';
              pcVar11[0x52] = '\0';
              pcVar11[0x53] = '\0';
            }
            if (pcVar11[0x20] == '\0') {
              uVar9 = 0xffffffff;
              pcVar4 = s_Arial_100966cc;
              do {
                pcVar13 = pcVar4;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar13 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar13;
              } while (cVar1 != '\0');
              uVar9 = ~uVar9;
              pcVar4 = pcVar13 + -uVar9;
              pcVar11 = pcVar11 + 0x20;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar11 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar11 = pcVar11 + 1;
              }
            }
          }
          pcVar4 = pcVar3 + 0x7c;
          iStack_684 = iStack_684 + 1;
          uStack_68c._0_3_ = (uint3)uStack_68c & 0xffff;
          uStack_68c = (char *)(uint)(uint3)uStack_68c;
          uStack_688 = 0;
          _strncpy(pcVar4,(char *)abStack_634,0x20);
          pcVar3[0x9b] = '\0';
          pvVar8 = extraout_ECX_00;
          pcVar11 = pcVar4;
        }
        if (pcVar11 == (char *)0x0) {
          (*gEngfuncs.Con_Printf)(s_font_scheme_text_file_MUST_start_1009656c);
          break;
        }
        uVar9 = FUN_10076d90(pvVar8,abStack_674,(byte_conflict *)s_FontName_100966c0);
        if (uVar9 == 0) {
          _strncpy(pcVar11 + 0x20,(char *)abStack_634,0x30);
          pcVar11[0x4f] = '\0';
        }
        else {
          uVar9 = FUN_10076d90(this_03,abStack_674,(byte_conflict *)s_FontSize_100966b4);
          if (uVar9 == 0) {
            uVar6 = FUN_1006c042(this_04,abStack_634);
            *(undefined4 *)(pcVar11 + 0x50) = uVar6;
          }
          else {
            uVar9 = FUN_10076d90(abStack_674,abStack_674,(byte_conflict *)s_FontWeight_100966a8);
            if (uVar9 == 0) {
              uVar6 = FUN_1006c042(this_05,abStack_634);
              *(undefined4 *)(pcVar11 + 0x54) = uVar6;
            }
            else {
              uVar9 = FUN_10076d90(this_05,abStack_674,(byte_conflict *)s_FgColor_100966a0);
              if (uVar9 == 0) {
                FUN_1005cb80(pcVar11 + 0x60,(char *)abStack_634);
                uStack_688._0_3_ = CONCAT12(1,(undefined2)uStack_688);
              }
              else {
                uVar9 = FUN_10076d90(this_06,abStack_674,(byte_conflict *)s_BgColor_10096698);
                if (uVar9 == 0) {
                  FUN_1005cb80(pcVar11 + 100,(char *)abStack_634);
                  uStack_68c = (char *)CONCAT13(1,(uint3)uStack_68c);
                }
                else {
                  uVar9 = FUN_10076d90(this_07,abStack_674,(byte_conflict *)s_FgColorArmed_10096688)
                  ;
                  if (uVar9 == 0) {
                    FUN_1005cb80(pcVar11 + 0x68,(char *)abStack_634);
                    uStack_688 = CONCAT31(uStack_688._1_3_,1);
                  }
                  else {
                    uVar9 = FUN_10076d90(this_08,abStack_674,
                                         (byte_conflict *)s_BgColorArmed_10096678);
                    if (uVar9 == 0) {
                      FUN_1005cb80(pcVar11 + 0x6c,(char *)abStack_634);
                      uStack_688._0_2_ = CONCAT11(1,(char)uStack_688);
                    }
                    else {
                      uVar9 = FUN_10076d90(this_09,abStack_674,
                                           (byte_conflict *)s_FgColorMousedown_10096664);
                      if (uVar9 == 0) {
                        FUN_1005cb80(pcVar11 + 0x70,(char *)abStack_634);
                        uStack_688 = CONCAT13(1,(undefined3)uStack_688);
                      }
                      else {
                        uVar9 = FUN_10076d90(this_10,abStack_674,
                                             (byte_conflict *)s_BgColorMousedown_10096650);
                        if (uVar9 == 0) {
                          pcVar3 = pcVar11 + 0x74;
                        }
                        else {
                          uVar9 = FUN_10076d90(this_11,abStack_674,
                                               (byte_conflict *)s_BorderColor_10096644);
                          if (uVar9 != 0) goto LAB_1005c73f;
                          pcVar3 = pcVar11 + 0x78;
                        }
                        FUN_1005cb80(pcVar3,(char *)abStack_634);
                        uStack_68c._0_3_ = CONCAT12(1,(undefined2)uStack_68c);
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_1005c73f:
        pcStack_678 = (*gEngfuncs.COM_ParseFile)(pcStack_680,acStack_5f4);
        iVar7 = -1;
        pcVar3 = acStack_5ec;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = pcVar4;
        if (iVar7 == -2) break;
      }
    }
    (*gEngfuncs.COM_FreeFile)(uStack_68c);
    if (-1 < (int)pcStack_690) goto LAB_1005c88f;
  }
  uVar9 = 0xffffffff;
  pcStack_690 = (char *)0x0;
  pcVar11 = s_Default_Scheme_1009655c;
  do {
    pcVar3 = pcVar11;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar3 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar3;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar11 = pcVar3 + -uVar9;
  pcVar3 = (char *)&DAT_1018d2a8;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar11 = s_Arial_100966cc;
  do {
    pcVar3 = pcVar11;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar3 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar3;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar11 = pcVar3 + -uVar9;
  pcVar3 = (char *)&DAT_1018d2c8;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar3 = pcVar3 + 1;
  }
  DAT_1018d2f8 = 0;
  DAT_1018d30b = 0xff;
  DAT_1018d30a = 0xff;
  DAT_1018d309 = 0xff;
  DAT_1018d308 = 0xff;
  DAT_1018d313 = 0xff;
  DAT_1018d312 = 0xff;
  DAT_1018d311 = 0xff;
  DAT_1018d310 = 0xff;
  DAT_1018d31b = 0xff;
  DAT_1018d31a = 0xff;
  DAT_1018d319 = 0xff;
  DAT_1018d318 = 0xff;
LAB_1005c88f:
  pcStack_690 = pcStack_690 + 1;
  *(char **)((int)this + 8) = pcStack_690;
  piVar5 = operator_new((int)pcStack_690 * 0x7c + 4);
  uStack00000008 = 0;
  if (piVar5 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = piVar5 + 1;
    *piVar5 = (int)pcStack_690;
    FUN_1006cacb(piVar14,0x7c,(int)pcStack_690,&LAB_1005c2c0);
  }
  *(int **)((int)this + 4) = piVar14;
  uStack00000008 = 0xffffffff;
  pcStack_690 = (char *)0x0;
  piVar5 = &DAT_1018d2a8;
  for (uVar9 = *(int *)((int)this + 8) * 0x1f & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
    *piVar14 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar14 = piVar14 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(char *)piVar14 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar14 = (int *)((int)piVar14 + 1);
  }
  if (0 < *(int *)((int)this + 8)) {
    iVar7 = 0;
    do {
      iVar15 = 0;
      *(undefined4 *)(iVar7 + 0x58 + *(int *)((int)this + 4)) = 0;
      uStack_68c = pcStack_690;
      if (0 < iVar7) {
        do {
          pvVar8 = (void *)(iVar15 + 0x20 + *(int *)((int)this + 4));
          uVar9 = FUN_10076d90(pvVar8,(byte_conflict *)(iVar7 + 0x20 + *(int *)((int)this + 4)),
                               pvVar8);
          if (((uVar9 == 0) &&
              (iVar2 = *(int *)((int)this + 4),
              *(int *)(iVar7 + 0x50 + iVar2) == *(int *)(iVar15 + 0x50 + iVar2))) &&
             (*(int *)(iVar7 + 0x54 + iVar2) == *(int *)(iVar15 + 0x54 + iVar2))) {
            *(undefined4 *)(iVar7 + 0x58 + iVar2) = *(undefined4 *)(iVar15 + 0x58 + iVar2);
            *(undefined4 *)(iVar7 + 0x5c + *(int *)((int)this + 4)) = 0;
          }
          iVar15 = iVar15 + 0x7c;
          uStack_68c = (char *)((int)uStack_68c + -1);
        } while (uStack_68c != (char *)0x0);
      }
      if (*(int *)(iVar7 + 0x58 + *(int *)((int)this + 4)) == 0) {
        pbVar16 = (byte_conflict *)0x0;
        iStack_684 = -1;
        if ((DAT_1018f1a8 != 0) && (*(float *)(DAT_1018f1a8 + 0xc) != 0.0)) {
          FUN_1006ac7a(acStack_200,(byte_conflict *)s_gfx_vgui_fonts__d__s_tga_10096540);
          pbVar16 = (*gEngfuncs.COM_LoadFile)(acStack_200,5,&iStack_684);
        }
        this_00 = operator_new(0x10);
        uStack00000008 = 1;
        if (this_00 == (Font *)0x0) {
          uVar6 = 0;
        }
        else {
          iVar15 = *(int *)((int)this + 4) + iVar7;
          uVar6 = vgui::Font::Font(this_00,(char *)(iVar15 + 0x20),pbVar16,iStack_684,
                                   *(int *)(iVar15 + 0x50),0,0.0,*(int *)(iVar15 + 0x54),false,false
                                   ,false,false);
        }
        uStack00000008 = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x58 + *(int *)((int)this + 4)) = uVar6;
        *(undefined4 *)(iVar7 + 0x5c + *(int *)((int)this + 4)) = 1;
      }
      *(char *)(iVar7 + 99 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar7 + 99 + *(int *)((int)this + 4));
      *(char *)(iVar7 + 0x67 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar7 + 0x67 + *(int *)((int)this + 4));
      *(char *)(iVar7 + 0x6b + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar7 + 0x6b + *(int *)((int)this + 4));
      *(char *)(iVar7 + 0x6f + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar7 + 0x6f + *(int *)((int)this + 4));
      *(char *)(iVar7 + 0x73 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar7 + 0x73 + *(int *)((int)this + 4));
      pcVar11 = (char *)(iVar7 + 0x77 + *(int *)((int)this + 4));
      iVar7 = iVar7 + 0x7c;
      pcStack_690 = (char *)((int)pcStack_690 + 1);
      *pcVar11 = -1 - *pcVar11;
    } while ((int)pcStack_690 < *(int *)((int)this + 8));
  }
  ExceptionList = unaff_retaddr;
  return this;
}

/* 1005caf0  FUN_1005caf0  (141 bytes)
 * int FUN_1005caf0(undefined4 param_1, int param_2, undefined4 param_3)
 * called by: FUN_1005c300
 */
int __cdecl FUN_1005caf0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  byte_conflict *pbVar3;
  int iVar4;
  char local_100 [256];
  
  iVar4 = DAT_10096530 + -1;
  piVar2 = (int *)(iVar4 * 4 + 0x1009650c);
  iVar1 = *(int *)(iVar4 * 4 + 0x1009650c);
  while (param_2 < iVar1) {
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + -1;
    if (iVar4 < 0) {
      return 0;
    }
    iVar1 = *piVar2;
  }
  while( true ) {
    FUN_1006ac7a(local_100,(byte_conflict *)s__s_d_s_10096718);
    pbVar3 = (*gEngfuncs.COM_LoadFile)(local_100,5,(int *)0x0);
    if (pbVar3 != (byte_conflict *)0x0) {
      return (int)pbVar3;
    }
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
  }
  return 0;
}

/* 1005cb80  FUN_1005cb80  (73 bytes)
 * undefined FUN_1005cb80(undefined1 * param_1, char * param_2)
 * called by: FUN_1005c300
 */
void __cdecl FUN_1005cb80(undefined1 *param_1,char *param_2)

{
  undefined1 local_c;
  undefined1 local_8;
  undefined1 local_4;
  
  FUN_1006bf83(param_2,(byte_conflict *)s__d__d__d__d_10096720);
  *param_1 = param_2._0_1_;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}

/* 1005cbf0  FUN_1005cbf0  (30 bytes)
 * undefined4 * FUN_1005cbf0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1005cbf0(void *this,byte_conflict param_1)

{
  FUN_1005cc10(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1005cc10  FUN_1005cc10  (65 bytes)
 * undefined FUN_1005cc10(undefined4 * param_1)
 * called by: FUN_1005cbf0, Unwind@10077e20
 */
void __fastcall FUN_1005cc10(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_1007f680;
  if (iVar1 != 0) {
    FUN_1006cb4d(iVar1,0x7c,*(int *)(iVar1 + -4),&LAB_1005c2e0);
    FUN_1006ad4c((LPVOID)(iVar1 + -4));
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}

/* 1005cc60  FUN_1005cc60  (69 bytes)
 * int FUN_1005cc60(byte.conflict * param_1)
 * called by: FUN_10058880, FUN_1005bb90, FUN_1005ce70, FUN_1005db70, FUN_100607f0, FUN_10064410, FUN_100655d0
 */
int __thiscall FUN_1005cc60(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *this_00;
  void *extraout_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 8)) {
    iVar2 = 0;
    this_00 = this;
    do {
      uVar1 = FUN_10076d90(this_00,param_1,(byte_conflict *)(*(int *)((int)this + 4) + iVar2));
      if (uVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x7c;
      this_00 = extraout_ECX;
    } while (iVar3 < *(int *)((int)this + 8));
  }
  return 0;
}

/* 1005ccb0  FUN_1005ccb0  (33 bytes)
 * int FUN_1005ccb0(int param_1)
 * called by: FUN_1005cce0, FUN_1005ccf0, FUN_1005cd30, FUN_1005cd70, FUN_1005cdb0, FUN_1005cdf0
 */
int __thiscall FUN_1005ccb0(void *this,int param_1)

{
  if (param_1 < *(int *)((int)this + 8)) {
    return *(int *)((int)this + 4) + param_1 * 0x7c;
  }
  return *(int *)((int)this + 4);
}

/* 1005cce0  FUN_1005cce0  (16 bytes)
 * undefined4 FUN_1005cce0(int param_1)
 * called by: FUN_10058880, FUN_1005bb90, FUN_1005ce70, FUN_1005db70, FUN_100607f0, FUN_10064410, FUN_100655d0
 */
undefined4 __thiscall FUN_1005cce0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  return *(undefined4 *)(iVar1 + 0x58);
}

/* 1005ccf0  FUN_1005ccf0  (57 bytes)
 * undefined FUN_1005ccf0(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * called by: FUN_10058880, FUN_1005bb90, FUN_100607f0, FUN_10064410, FUN_100655d0
 */
void __thiscall
FUN_1005ccf0(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x60);
  *param_3 = (uint)*(byte *)(iVar1 + 0x61);
  *param_4 = (uint)*(byte *)(iVar1 + 0x62);
  *param_5 = (uint)*(byte *)(iVar1 + 99);
  return;
}

/* 1005cd30  FUN_1005cd30  (57 bytes)
 * undefined FUN_1005cd30(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * called by: FUN_10058880, FUN_1005bb90, FUN_100607f0, FUN_10064410, FUN_100655d0
 */
void __thiscall
FUN_1005cd30(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 100);
  *param_3 = (uint)*(byte *)(iVar1 + 0x65);
  *param_4 = (uint)*(byte *)(iVar1 + 0x66);
  *param_5 = (uint)*(byte *)(iVar1 + 0x67);
  return;
}

/* 1005cd70  FUN_1005cd70  (57 bytes)
 * undefined FUN_1005cd70(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * called by: FUN_100607f0
 */
void __thiscall
FUN_1005cd70(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x68);
  *param_3 = (uint)*(byte *)(iVar1 + 0x69);
  *param_4 = (uint)*(byte *)(iVar1 + 0x6a);
  *param_5 = (uint)*(byte *)(iVar1 + 0x6b);
  return;
}

/* 1005cdb0  FUN_1005cdb0  (57 bytes)
 * undefined FUN_1005cdb0(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * called by: FUN_100607f0
 */
void __thiscall
FUN_1005cdb0(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x6c);
  *param_3 = (uint)*(byte *)(iVar1 + 0x6d);
  *param_4 = (uint)*(byte *)(iVar1 + 0x6e);
  *param_5 = (uint)*(byte *)(iVar1 + 0x6f);
  return;
}

/* 1005cdf0  FUN_1005cdf0  (57 bytes)
 * undefined FUN_1005cdf0(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * called by: FUN_100607f0
 */
void __thiscall
FUN_1005cdf0(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005ccb0(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x78);
  *param_3 = (uint)*(byte *)(iVar1 + 0x79);
  *param_4 = (uint)*(byte *)(iVar1 + 0x7a);
  *param_5 = (uint)*(byte *)(iVar1 + 0x7b);
  return;
}

/* 1005ce30  FUN_1005ce30  (58 bytes)
 * undefined FUN_1005ce30(undefined4 param_1)
 */
void __thiscall FUN_1005ce30(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x40)) {
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0x40) <= iVar2)) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 0x48) + iVar2 * 4);
      }
      (**(code **)(*piVar1 + 0xc))(param_1,this);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x40));
  }
  return;
}

/* 1005ce70  FUN_1005ce70  (1828 bytes)
 * Panel * FUN_1005ce70(int param_1, int param_2, int param_3, int param_4)
 * called by: FUN_10063a50
 */
Panel * __thiscall FUN_1005ce70(void *this,int param_1,int param_2,int param_3,int param_4)

{
  Panel *this_00;
  Panel *this_01;
  char *pcVar1;
  int iVar2;
  int iVar3;
  LineBorder *pLVar4;
  Border *pBVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_EBX;
  int *piVar9;
  int unaff_EBP;
  float fVar10;
  int *this_02;
  longlong lVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  undefined1 *puStack_c4;
  void **ppvStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 *puVar14;
  void *pvStack_94;
  undefined4 uStack_90;
  int aiStack_7c [2];
  Color aCStack_34 [4];
  void *local_30;
  float fStack_2c;
  int iStack_28;
  undefined1 uStack_20;
  undefined1 *puStack_18;
  LineBorder *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077d2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_30 = this;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  this_00 = (Panel *)((int)this + 0xc0);
  *(undefined ***)((int)this + 0xbc) = &PTR_LAB_1007c5dc;
  vgui::Panel::Panel(this_00,0,0,10,10);
  *(undefined ***)this_00 = &vgui::Label::_vftable_;
  vgui::Label::init((Label *)this_00,1,s_,true);
  this_01 = (Panel *)((int)this + 400);
  FUN_1005abc0(this_01);
  local_4 = 0;
  aiStack_7c[1] = 0x1005cf14;
  FUN_1006cacb((int)this + 0x274,0xe8,8,FUN_1005ec40);
  local_4._0_1_ = 1;
  FUN_1005b490((Panel *)((int)this + 0x9bc));
  local_4._0_1_ = 2;
  aiStack_7c[1] = 0x1005cf46;
  FUN_1006cacb((int)this + 0xd24,0xe4,0x4a,FUN_1005abc0);
  local_4._0_1_ = 3;
  aiStack_7c[1] = 0x1005cf6b;
  FUN_1006cacb((int)this + 0x4f0c,0xe8,0x250,FUN_1005ec40);
  local_4 = CONCAT31(local_4._1_3_,4);
  vgui::Panel::Panel((Panel *)((int)this + 0x2678c));
  *(undefined ***)((int)this + 0x2678c) = &PTR_setPos_1007f8b0;
  *(undefined ***)this = &PTR_setPos_1007f6b4;
  *(undefined ***)((int)this + 0xbc) = &PTR_LAB_1007f688;
  pvVar6 = (void *)(DAT_100d5cb0 + 0x22c);
  iVar2 = FUN_1005cc60(pvVar6,(byte_conflict *)s_Scoreboard_Title_Text_100967cc);
  iVar3 = FUN_1005cc60(pvVar6,(byte_conflict *)s_Scoreboard_Small_Text_100967b4);
  FUN_1005cce0(pvVar6,iVar2);
  FUN_1005cce0(pvVar6,iVar3);
  vgui::Panel::setBgColor(this,0,0,0,0x60);
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x208))();
  (**(code **)(*(int *)this_00 + 0x200))();
  aiStack_7c[1] = 0x1005d037;
  (**(code **)(*(int *)this_00 + 300))();
  aiStack_7c[1] = 3;
  aiStack_7c[0] = 0x1005d043;
  (**(code **)(*(int *)this_00 + 0x124))();
  aiStack_7c[0] = 3;
  (**(code **)(*(int *)this_00 + 0x21c))();
  pLVar4 = operator_new(0x44);
  uStack_20 = 5;
  if (pLVar4 == (LineBorder *)0x0) {
    pBVar5 = (Border *)0x0;
    local_14 = pLVar4;
  }
  else {
    uStack_90 = 0x1005d07c;
    local_14 = pLVar4;
    vgui::Color::Color(aCStack_34,0x3c,0x3c,0x3c,0x80);
    puStack_18 = &stack0xffffff78;
    pBVar5 = (Border *)vgui::LineBorder::LineBorder(pLVar4);
  }
  uStack_20 = 4;
  vgui::Panel::setBorder(this,pBVar5);
  vgui::Panel::setPaintBorderEnabled(this,true);
  local_14 = (LineBorder *)(DAT_10096734 + 3);
  if (0x27f < DAT_100d5908) {
    lVar11 = __ftol();
    local_14 = (LineBorder *)lVar11;
  }
  iVar2 = *(int *)this_00;
  lVar11 = __ftol();
  iVar3 = (int)lVar11;
  uStack_90 = 0x1005d115;
  pLVar4 = local_14;
  (**(code **)(iVar2 + 0x10))();
  uStack_90 = 0;
  pvStack_94 = (void *)0x1005d121;
  (**(code **)(*(int *)this_00 + 0x220))();
  pvStack_94 = this;
  (**(code **)(*(int *)this_00 + 0x40))();
  FUN_1005ac10(this_01,8,1);
  FUN_1005adc0(this_01,0,0);
  iVar2 = 0;
  do {
    fVar10 = (float)(iVar2 * 0xc);
    pcVar1 = (char *)(&DAT_10096730)[iVar2 * 3];
    fStack_2c = fVar10;
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 == '#') {
        iVar8 = *(int *)((int)this + iVar2 * 0xe8 + 0x274);
        local_30 = (void *)((int)this + iVar2 * 0xe8 + 0x274);
        FUN_100349a0(pcVar1);
        (**(code **)(iVar8 + 0x22c))();
        fVar10 = fStack_2c;
      }
      else if (pcVar1 != (char *)0x0) {
        (**(code **)(*(int *)((int)this + iVar2 * 0xe8 + 0x274) + 0x22c))();
      }
    }
    local_30 = *(void **)((int)&DAT_10096734 + (int)fVar10);
    if (DAT_100d5908 < 0x280) {
      pvVar6 = local_30;
      if (DAT_100d5908 == 400) {
        if (iVar2 == 1) {
          pvVar6 = (void *)((int)local_30 + -0x1c);
        }
        else if (iVar2 == 0) {
          pvVar6 = (void *)((int)local_30 + -8);
        }
      }
    }
    else {
      lVar11 = __ftol();
      pvVar6 = (void *)lVar11;
    }
    FUN_1005ae10(this_01,iVar2,pvVar6);
    piVar9 = (int *)((int)this + iVar2 * 0xe8 + 0x274);
    FUN_1005ad70(this_01,iVar2,0,piVar9);
    (**(code **)(*piVar9 + 300))();
    puVar14 = (undefined1 *)0xff;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b8 = 0x1005d250;
    (**(code **)(*piVar9 + 300))();
    uStack_b8 = 3;
    puStack_bc = (undefined1 *)0x1005d25c;
    (**(code **)(*piVar9 + 0x124))();
    puStack_bc = puVar14;
    ppvStack_c0 = (void **)0x1005d26b;
    (**(code **)(*piVar9 + 0x208))();
    ppvStack_c0 = *(void ***)(&DAT_10096738 + unaff_EBX);
    puStack_c4 = (undefined1 *)0x1005d280;
    (**(code **)(*piVar9 + 0x21c))();
    puStack_c4 = (undefined1 *)0xc;
    if (0x1df < DAT_100d590c) {
      puStack_c4 = (undefined1 *)0x1005d2aa;
      lVar11 = __ftol();
      puStack_c4 = (undefined1 *)lVar11;
    }
    puStack_c8 = (undefined4 *)0x32;
    iStack_cc = 0x1005d2b4;
    (**(code **)(*piVar9 + 8))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  uStack_b0 = 0x1005d2dd;
  FUN_1005af60(this_01,6,0,aiStack_7c,(undefined4 *)&stack0xffffffa4,(undefined4 *)&stack0xffffff80,
               (undefined4 *)&stack0xffffffa0);
  fStack_2c = (float)iStack_28;
  local_30 = (void *)(aiStack_7c[0] + iVar3);
  lVar11 = __ftol();
  FUN_1005ae10(this_01,7,(int)lVar11);
  FUN_1005af30(this_01);
  iVar2 = *(int *)this_01;
  local_30 = (void *)((float)DAT_100d5908 * 0.0015625 * 4.0);
  FUN_1005ae90(this_01,0);
  __ftol();
  lVar11 = __ftol();
  uVar12 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar7 = (undefined4)lVar11;
  (**(code **)(iVar2 + 0x10))();
  pvVar6 = this;
  (**(code **)(*(int *)this_01 + 0x40))();
  iVar2 = 0xff;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  puStack_bc = (undefined1 *)0x1005d39c;
  (**(code **)(*(int *)this_01 + 300))();
  puStack_bc = &stack0xffffff68;
  ppvStack_c0 = &pvStack_94;
  puStack_c4 = &stack0xffffff64;
  puStack_c8 = &uStack_90;
  iStack_cc = 0x1005d3b8;
  uStack_d0 = uVar7;
  (**(code **)(*(int *)this_01 + 0x14))();
  iStack_cc = ((unaff_EBP - iVar2) - (int)pvVar6) + -6;
  (**(code **)(*(int *)((int)this + 0x9bc) + 0x10))(uVar12,iVar2 + (int)pvVar6);
  uVar12 = 0;
  (**(code **)(*(int *)((int)this + 0x9bc) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)((int)this + 0x9bc) + 0x40))(this);
  piVar9 = (int *)((int)this + 0x4f0c);
  iVar2 = 0;
  this_02 = (int *)((int)this + 0xd24);
  do {
    FUN_1005ac10(this_02,8,1);
    iVar3 = 0;
    piVar13 = piVar9;
    do {
      (**(code **)(*piVar9 + 0x220))(0);
      piVar9[0x35] = (int)pLVar4;
      (**(code **)(*piVar9 + 0x70))(-(uint)(this != (void *)0x0) & (int)this + 0xbcU);
      FUN_1005ad70(this_02,iVar3,0,piVar9);
      piVar9 = piVar9 + 0x10c4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    (**(code **)(*this_02 + 300))(0,0,0,0xff);
    FUN_1005adc0(this_02,0,0);
    FUN_1005afd0(this_02,(int)this_01);
    FUN_1005af30(this_02);
    (**(code **)(*this_02 + 0x14))(&uStack_b8,&puStack_bc,&uStack_d0,&ppvStack_c0);
    iVar3 = *this_02;
    uVar7 = uVar12;
    iVar8 = FUN_1005b0c0((int)this_02);
    (**(code **)(iVar3 + 8))(uVar7,iVar8);
    FUN_1005b030(this_02);
    FUN_1005b600((void *)((int)this + 0x9bc),this_02);
    iVar2 = iVar2 + 1;
    this_02 = this_02 + 0x39;
    piVar9 = piVar13 + 0x3a;
  } while (iVar2 < 0x4a);
  piVar9 = (int *)((int)this + 0x2678c);
  (**(code **)(*(int *)((int)this + 0x2678c) + 300))(0,0,0,0xff);
  (**(code **)(*piVar9 + 0x40))(this);
  (**(code **)(*piVar9 + 0x10))(0,0,pvStack_94,uStack_90);
  (**(code **)(*piVar9 + 0x70))(-(uint)(this != (void *)0x0) & (int)this + 0xbcU);
  FUN_1005d5a0((int)this);
  ExceptionList = ppvStack_c0;
  return this;
}

/* 1005d5a0  FUN_1005d5a0  (65 bytes)
 * undefined FUN_1005d5a0(int param_1)
 * called by: FUN_1005ce70, FUN_10060aa0
 */
void __fastcall FUN_1005d5a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x26ae8) = 0;
  *(undefined4 *)(param_1 + 0x26aec) = 0;
  *(undefined4 *)(param_1 + 0x2684c) = 0;
  *(undefined4 *)(param_1 + 0x26848) = 0;
  puVar2 = &DAT_101901f0;
  for (iVar1 = 0x208; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_1018f1b0;
  for (iVar1 = 0x28a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_101900ec;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 1005d5f0  FUN_1005d5f0  (172 bytes)
 * undefined FUN_1005d5f0(int * param_1)
 * called by: FUN_1005da20, FUN_10064750
 */
void __fastcall FUN_1005d5f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 local_30 [48];
  
  iVar1 = DAT_100d5cb0 + 0xab0;
  if (iVar1 != 0) {
    puVar3 = local_30;
    puVar4 = &DAT_10093568;
    FUN_1006ac7a(puVar3,&DAT_10093568);
    (**(code **)(param_1[0x30] + 0x200))(param_1 + 0x30,local_30,puVar3,puVar4,iVar1);
  }
  param_1[0x9a15] = 0;
  FUN_10064880(DAT_100d5cb0);
  iVar1 = 0;
  piVar2 = param_1 + 0x9a60;
  do {
    piVar2[-0x4a] = 0;
    *piVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 0x26aa8) = 0;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x4a);
  if (DAT_100cf97c == 0) {
    FUN_1005d8f0(param_1,0,(byte_conflict *)0x0);
  }
  else {
    FUN_1005d6a0(param_1);
  }
  FUN_1005b860(param_1 + 0x26f,param_1[0x9a15]);
  FUN_1005db70(param_1);
  return;
}

/* 1005d6a0  FUN_1005d6a0  (578 bytes)
 * undefined FUN_1005d6a0(void * param_1)
 * called by: FUN_1005d5f0
 */
void __fastcall FUN_1005d6a0(void *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  byte_conflict *pbVar8;
  int iVar9;
  char *local_4;
  
  iVar4 = 1;
  if (0 < *(int *)((int)param_1 + 0x26848)) {
    puVar2 = &DAT_1018f1e8;
    do {
      if (*(int *)(puVar2 + 8) == 0) {
        *puVar2 = 0;
      }
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x14;
    } while (iVar4 <= *(int *)((int)param_1 + 0x26848));
  }
  psVar7 = &DAT_1018fbf0;
  local_4 = &DAT_1019021e;
  do {
    iVar4 = 1;
    if (((*(int *)(psVar7 + -2) != 0) && (*local_4 != '\0')) &&
       (0 < *(int *)((int)param_1 + 0x26848))) {
      pbVar8 = &DAT_1018f1d8;
      do {
        uVar3 = FUN_10076d90(local_4,(byte_conflict *)local_4,pbVar8);
        if (uVar3 == 0) break;
        iVar4 = iVar4 + 1;
        pbVar8 = pbVar8 + 0x28;
      } while (iVar4 <= *(int *)((int)param_1 + 0x26848));
      if (iVar4 <= *(int *)((int)param_1 + 0x26848)) {
        iVar4 = iVar4 * 0x28;
        if ((*(int *)(iVar4 + 0x1018f1d0) == 0) && (DAT_100cf97c < 2)) {
          *(short *)(&DAT_1018f1c0 + iVar4) =
               *(short *)(&DAT_1018f1c0 + iVar4) + *(short *)(local_4 + -8);
        }
        *(short *)(&DAT_1018f1c2 + iVar4) =
             *(short *)(&DAT_1018f1c2 + iVar4) + *(short *)(local_4 + -6);
        *(short *)(&DAT_1018f1c4 + iVar4) = *(short *)(&DAT_1018f1c4 + iVar4) + *psVar7;
        *(short *)(iVar4 + 0x1018f1c6) =
             *(short *)(iVar4 + 0x1018f1c6) + (ushort)*(byte *)(psVar7 + 2);
        if ((char)psVar7[1] == '\0') {
          sVar1 = *(short *)(local_4 + -2);
          *(undefined2 *)(iVar4 + 0x1018f1c8) = 0;
          *(int *)(&DAT_1018f1d4 + iVar4) = (int)sVar1;
        }
        else {
          sVar1 = *(short *)(local_4 + -2);
          *(undefined2 *)(iVar4 + 0x1018f1c8) = 1;
          *(int *)(&DAT_1018f1d4 + iVar4) = (int)sVar1;
        }
      }
    }
    iVar4 = 1;
    psVar7 = psVar7 + 10;
    local_4 = local_4 + 0x20;
  } while ((int)psVar7 < 0x101900dc);
  if (0 < *(int *)((int)param_1 + 0x26848)) {
    psVar7 = &DAT_1018f1f2;
    do {
      psVar7[1] = 0;
      psVar7[2] = 0;
      if (0 < *psVar7) {
        psVar7[-3] = psVar7[-3] / *psVar7;
        psVar7[-2] = psVar7[-2] / *psVar7;
      }
      iVar4 = iVar4 + 1;
      psVar7 = psVar7 + 0x14;
    } while (iVar4 <= *(int *)((int)param_1 + 0x26848));
  }
  while( true ) {
    iVar5 = 1;
    iVar9 = 0;
    iVar4 = -99999;
    local_4 = (char *)0x1869f;
    if (*(int *)((int)param_1 + 0x26848) < 1) break;
    psVar7 = &DAT_1018f1ea;
    do {
      if (((0 < psVar7[4]) && (*(int *)(psVar7 + 5) == 0)) &&
         ((iVar6 = (int)psVar7[-1], iVar4 <= iVar6 &&
          ((iVar4 < iVar6 || ((int)*psVar7 < (int)local_4)))))) {
        local_4 = (char *)(int)*psVar7;
        iVar4 = iVar6;
        iVar9 = iVar5;
      }
      iVar5 = iVar5 + 1;
      psVar7 = psVar7 + 0x14;
    } while (iVar5 <= *(int *)((int)param_1 + 0x26848));
    if (iVar9 == 0) break;
    *(int *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26858) = iVar9;
    *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26980) = 1;
    (&DAT_1018f1cc)[iVar9 * 10] = 1;
    *(int *)((int)param_1 + 0x26854) = *(int *)((int)param_1 + 0x26854) + 1;
    FUN_1005d8f0(param_1,0,(byte_conflict *)(&DAT_1018f1b0 + iVar9 * 10));
  }
  FUN_1005d8f0(param_1,2,(byte_conflict *)0x0);
  return;
}

/* 1005d8f0  FUN_1005d8f0  (299 bytes)
 * undefined FUN_1005d8f0(int param_1, byte.conflict * param_2)
 * called by: FUN_1005d5f0, FUN_1005d6a0
 */
void __thiscall FUN_1005d8f0(void *this,int param_1,byte_conflict *param_2)

{
  bool bVar1;
  cl_entity_s *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int idx;
  int local_c;
  int local_4;
  
  bVar1 = false;
  while( true ) {
    iVar5 = -99999;
    local_c = 99999;
    local_4 = 0;
    idx = 1;
    piVar4 = &DAT_1018fbec;
    psVar6 = &DAT_10190216;
    do {
      if (((((*(char *)((int)this + idx + 0x26aa8) == '\0') && (*piVar4 != 0)) && (iVar5 <= *psVar6)
           ) && (pcVar2 = (*gEngfuncs.GetEntityByIndex)(idx), pcVar2 != (cl_entity_s *)0x0)) &&
         (((param_2 == (byte_conflict *)0x0 ||
           (uVar3 = FUN_10076d90(psVar6 + 4,(byte_conflict *)(psVar6 + 4),param_2), uVar3 == 0)) &&
          ((iVar5 < *psVar6 || (psVar6[1] < local_c)))))) {
        local_c = (int)psVar6[1];
        iVar5 = (int)*psVar6;
        local_4 = idx;
      }
      psVar6 = psVar6 + 0x10;
      idx = idx + 1;
      piVar4 = piVar4 + 5;
    } while ((int)psVar6 < 0x101909f6);
    if (local_4 == 0) break;
    if ((!bVar1) && (param_1 != 0)) {
      bVar1 = true;
      *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = param_1;
      *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
    }
    *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26858) = local_4;
    *(undefined1 *)((int)this + local_4 + 0x26aa8) = 1;
    *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
  }
  if (param_2 != (byte_conflict *)0x0) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = 3;
    *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
  }
  return;
}

/* 1005da20  FUN_1005da20  (335 bytes)
 * undefined FUN_1005da20(int * param_1)
 * called by: FUN_1005e630, FUN_100651c0
 */
void __fastcall FUN_1005da20(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 *puVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte_conflict *_Source;
  byte_conflict *pbVar8;
  undefined4 *puVar9;
  int *local_4;
  
  iVar1 = 1;
  if (0 < param_1[0x9a12]) {
    puVar4 = &DAT_1018f1f2;
    do {
      *puVar4 = 0;
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x14;
    } while (iVar1 <= param_1[0x9a12]);
  }
  FUN_10064880(DAT_100d5cb0);
  param_1[0x9a12] = 0;
  _Source = &DAT_1019021e;
  local_4 = &DAT_1018fbec;
  this = extraout_ECX;
  do {
    if ((*local_4 != 0) && (*_Source != '\0')) {
      iVar1 = 1;
      if (0 < param_1[0x9a12]) {
        pbVar8 = &DAT_1018f1d8;
        do {
          if (*pbVar8 == '\0') break;
          uVar2 = FUN_10076d90(this,_Source,pbVar8);
          if (uVar2 == 0) break;
          iVar1 = iVar1 + 1;
          pbVar8 = pbVar8 + 0x28;
          this = extraout_ECX_00;
        } while (iVar1 <= param_1[0x9a12]);
      }
      this = (void *)param_1[0x9a12];
      if ((int)this < iVar1) {
        pvVar3 = (void *)0x1;
        if (0 < (int)this) {
          pcVar6 = &DAT_1018f1d8;
          do {
            if (*pcVar6 == '\0') break;
            pvVar3 = (void *)((int)pvVar3 + 1);
            pcVar6 = pcVar6 + 0x28;
          } while ((int)pvVar3 <= (int)this);
        }
        if ((int)this < (int)pvVar3) {
          this = pvVar3;
        }
        param_1[0x9a12] = (int)this;
        _strncpy((char *)(&DAT_1018f1b0 + (int)pvVar3 * 10),(char *)_Source,0x10);
        *(undefined2 *)(&DAT_1018f1ca + (int)pvVar3 * 0x28) = 0;
        this = extraout_ECX_01;
      }
      *(short *)(&DAT_1018f1ca + iVar1 * 0x28) = *(short *)(&DAT_1018f1ca + iVar1 * 0x28) + 1;
    }
    local_4 = local_4 + 5;
    _Source = _Source + 0x20;
    if (0x101900d7 < (int)local_4) {
      iVar1 = 1;
      if (0 < param_1[0x9a12]) {
        puVar7 = (undefined4 *)&DAT_1018f1d8;
        do {
          if (*(short *)((int)puVar7 + 0x1a) < 1) {
            puVar9 = puVar7;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          iVar1 = iVar1 + 1;
          puVar7 = puVar7 + 10;
        } while (iVar1 <= param_1[0x9a12]);
      }
      FUN_1005d5f0(param_1);
      return;
    }
  } while( true );
}

/* 1005db70  FUN_1005db70  (2559 bytes)
 * undefined FUN_1005db70(int * param_1)
 * called by: FUN_1005d5f0
 */
void __fastcall FUN_1005db70(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  longlong lVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  int *piVar19;
  byte_conflict *pbVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  int *piStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  void *pvVar23;
  undefined4 uVar24;
  int *piVar25;
  int *piVar26;
  int *this;
  int iStack_134;
  undefined1 auStack_12c [4];
  int *local_128;
  undefined1 auStack_124 [4];
  undefined4 local_120;
  undefined1 auStack_11c [8];
  int *local_114;
  undefined4 local_110;
  undefined4 local_108;
  char acStack_dc [220];
  
  pvVar23 = (void *)(DAT_100d5cb0 + 0x22c);
  local_114 = param_1;
  iVar2 = FUN_1005cc60(pvVar23,(byte_conflict *)s_Scoreboard_Text_10096858);
  iVar3 = FUN_1005cc60(pvVar23,(byte_conflict *)s_Scoreboard_Title_Text_100967cc);
  local_128 = (int *)FUN_1005cc60(pvVar23,(byte_conflict *)s_Scoreboard_Small_Text_100967b4);
  local_108 = FUN_1005cce0(pvVar23,iVar2);
  local_120 = FUN_1005cce0(pvVar23,iVar3);
  local_110 = FUN_1005cce0(pvVar23,(int)local_128);
  piVar4 = (int *)(**(code **)(*param_1 + 0x14c))();
  (**(code **)(*piVar4 + 0x34))();
  (**(code **)param_1[0x2f])();
  puVar5 = FUN_10017570();
  cVar1 = FUN_100188b0((int)puVar5);
  if (cVar1 == '\0') {
    param_1[0x26e] = -1;
  }
  piVar4 = param_1 + 0x9a16;
  piVar26 = param_1 + 0x13c3;
  this = param_1 + 0x349;
  iVar2 = 0;
  do {
    FUN_1005b1b0(this,0,'\0',0,0,0,0,0);
    if (iVar2 < param_1[0x9a15]) {
      iVar3 = 0;
      do {
        iVar11 = iVar2 + iVar3 * 0x4a;
        piVar13 = param_1 + iVar11 * 0x3a + 0x13c3;
        (**(code **)(param_1[iVar11 * 0x3a + 0x13c3] + 0x24))();
        (**(code **)(**(int **)(piVar13[0x34] + 0x28) + 0x70))(s_);
        (**(code **)(*piVar13 + 0x1fc))(0);
        piVar19 = local_128;
        (**(code **)(*piVar13 + 0x208))();
        piVar13[0x37] = 0;
        piVar13[0x38] = 0;
        if (DAT_100d590c < 0x1e1) {
          iVar11 = 0xf;
        }
        else {
          lVar16 = __ftol();
          iVar11 = (int)lVar16;
        }
        iVar10 = *piVar13;
        uVar6 = (**(code **)(iVar10 + 0x18))();
        (**(code **)(iVar10 + 8))(uVar6);
        puVar12 = (undefined4 *)0x0;
        uVar24 = 0xff;
        pvVar23 = (void *)0x0;
        (**(code **)(*piVar13 + 300))(0,0,0,0xff);
        piVar25 = (int *)0x0;
        if (piVar4[0x4a] == 3) {
          (**(code **)(*piVar13 + 0x22c))(&DAT_10094c94);
          goto LAB_1005e491;
        }
        if (piVar4[0x4a] == 1) {
          iVar11 = *piVar4;
          puVar12 = &DAT_1018f1b0 + iVar11 * 10;
          iVar10 = *(int *)(&DAT_1018f1d4 + iVar11 * 0x28) % DAT_10096970;
          iStack_188 = (&DAT_1009697c)[iVar10 * 3];
          uStack_18c = (&DAT_10096978)[iVar10 * 3];
          piStack_190 = (int *)(&DAT_10096974)[iVar10 * 3];
          (**(code **)(*piVar13 + 0x120))();
          uVar7 = 0x14;
          if (0x1df < DAT_100d590c) {
            lVar16 = __ftol();
            uVar7 = (undefined4)lVar16;
          }
          iVar10 = *piVar13;
          uVar7 = (**(code **)(iVar10 + 0x18))(uVar7);
          (**(code **)(iVar10 + 8))(uVar7);
          (**(code **)(*piVar13 + 0x208))(uVar24);
          iVar11 = *(int *)(&DAT_1018f1d4 + iVar11 * 0x28) % DAT_10096970;
          uVar21 = (undefined2)(&DAT_1009697c)[iVar11 * 3];
          uVar18 = (undefined2)(&DAT_10096978)[iVar11 * 3];
          uVar17 = (undefined2)(&DAT_10096974)[iVar11 * 3];
LAB_1005de43:
          uVar22 = 0;
          lVar16 = __ftol();
          FUN_1005b1b0(pvVar23,0,'\x01',(int)lVar16,uVar17,uVar18,uVar21,uVar22);
        }
        else {
          if (piVar4[0x4a] == 2) {
            iStack_188 = 100;
            uStack_18c = 100;
            piStack_190 = (int *)0x64;
            (**(code **)(*piVar13 + 0x120))();
            uVar7 = 0x14;
            if (0x1df < DAT_100d590c) {
              lVar16 = __ftol();
              uVar7 = (undefined4)lVar16;
            }
            iVar11 = *piVar13;
            uVar7 = (**(code **)(iVar11 + 0x18))(uVar7);
            (**(code **)(iVar11 + 8))(uVar7);
            (**(code **)(*piVar13 + 0x208))(uVar24);
            uVar21 = 100;
            uVar18 = 100;
            uVar17 = 100;
            goto LAB_1005de43;
          }
          iVar10 = (int)(short)(&DAT_101901fc)[*piVar4 * 0x10] % DAT_10096970;
          iStack_188 = (&DAT_1009697c)[iVar10 * 3];
          uStack_18c = (&DAT_10096978)[iVar10 * 3];
          piStack_190 = (int *)(&DAT_10096974)[iVar10 * 3];
          (**(code **)(*piVar13 + 0x120))();
          if ((&DAT_1018fbde)[*piVar4 * 0x14] == '\0') {
            if (((*piVar4 == *(int *)(iVar11 + 0x26ae8)) && (*(int *)(iVar11 + 0x26aec) != 0)) &&
               (DAT_100cf944 < (float)*(int *)(iVar11 + 0x26aec))) {
              iVar11 = *piVar13;
              lVar16 = __ftol();
              (**(code **)(iVar11 + 300))(0xff,0,0,(int)lVar16);
            }
          }
          else {
            (**(code **)(*piVar13 + 0x124))(2);
            iVar11 = (int)(short)(&DAT_101901fc)[*piVar4 * 0x10] % DAT_10096970;
            (**(code **)(*piVar13 + 300))
                      ((&DAT_10096974)[iVar11 * 3],(&DAT_10096978)[iVar11 * 3],
                       (&DAT_1009697c)[iVar11 * 3],0xc4);
          }
        }
        if ((iStack_188 == 1) || (iStack_188 == 2)) {
          iVar11 = *piVar13;
          uVar24 = 3;
LAB_1005e006:
          (**(code **)(iVar11 + 0x21c))(uVar24);
          piVar4 = piVar25;
        }
        else {
          if (iStack_188 == 0) {
            iVar11 = *piVar13;
            uVar24 = 4;
            goto LAB_1005e006;
          }
          (**(code **)(*piVar13 + 0x21c))(5);
          piVar4 = piVar25;
        }
        uVar8 = 0xffffffff;
        pcVar14 = s_;
        do {
          pcVar15 = pcVar14;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar14 = pcVar15 + -uVar8;
        pcVar15 = &stack0xfffffea4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        iVar11 = piStack_190[0x4a];
        if (iVar11 != 0) {
          switch(uStack_18c) {
          case 1:
            if (iVar11 == 2) {
              pbVar20 = FUN_100349a0(s__Spectators_1009684c);
              FUN_1006ac7a(acStack_dc,pbVar20);
            }
            else {
              FUN_1006ac7a(acStack_dc,(byte_conflict *)(puVar12[9] * 0x40 + 0x8bc + DAT_100d5cb0));
            }
            uVar8 = 0xffffffff;
            pcVar14 = acStack_dc;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            if (piStack_190[0x4a] == 1) {
              if (*(short *)((int)puVar12 + 0x1a) == 1) {
                FUN_100349a0(s__Player_10096844);
              }
              else {
                FUN_100349a0(s__Player_plural_1009682c);
              }
              FUN_1006ac7a(acStack_dc,(byte_conflict *)s___d__s__1009683c);
              (**(code **)(**(int **)(piVar13[0x34] + 0x28) + 0x70))(acStack_dc);
              (**(code **)(**(int **)(piVar13[0x34] + 0x28) + 0x78))(uVar6);
            }
            break;
          case 3:
            if (iVar11 == 1) {
              pbVar20 = &DAT_10093a90;
              goto LAB_1005e475;
            }
            break;
          case 4:
            if (iVar11 == 1) {
              pbVar20 = &DAT_10093a90;
              goto LAB_1005e475;
            }
            break;
          case 5:
            if (iVar11 == 1) goto LAB_1005e46a;
          }
          goto switchD_1005e05c_caseD_2;
        }
        switch(uStack_18c) {
        case 1:
          pbVar20 = &DAT_10096824;
          break;
        case 2:
          switch(*(undefined1 *)(&DAT_101901f4 + *piStack_190 * 8)) {
          case 1:
            uVar8 = 0xffffffff;
            pcVar14 = &DAT_10096814;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            break;
          case 2:
            uVar8 = 0xffffffff;
            pcVar14 = &DAT_1009680c;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar11 = *piVar13;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            (**(code **)(iVar11 + 0x120))(0x7d,0xff,0x7d,5);
            break;
          case 3:
            uVar8 = 0xffffffff;
            pcVar14 = &DAT_10096804;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar11 = *piVar13;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            (**(code **)(iVar11 + 0x120))(0x87,0xff,0x87,5);
            break;
          case 4:
            uVar8 = 0xffffffff;
            pcVar14 = s_SPECIALIST_100967f8;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar11 = *piVar13;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            (**(code **)(iVar11 + 0x120))(0x91,0xff,0x91,5);
            break;
          case 5:
            uVar8 = 0xffffffff;
            pcVar14 = s_UNSTOPPABLE_100967ec;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar11 = *piVar13;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            (**(code **)(iVar11 + 0x120))(0x9b,0xff,0x9b,5);
            break;
          default:
            pcVar14 = s_WAITING_1009681c;
            if (*(char *)((int)&DAT_101901f4 + *piStack_190 * 0x20 + 1) == '\0') {
              pcVar14 = s_;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            break;
          case 10:
            uVar8 = 0xffffffff;
            pcVar14 = s_THE_ONE_100967e4;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar11 = *piVar13;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            (**(code **)(iVar11 + 0x120))(0xaf,0xff,0xaf,5);
            break;
          case 0xb:
            uVar8 = 0xffffffff;
            pcVar14 = s_WAITING_1009681c;
            do {
              pcVar15 = pcVar14;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar14 = pcVar15 + -uVar8;
            pcVar15 = &stack0xfffffea4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
          }
          goto switchD_1005e05c_caseD_2;
        case 3:
          pbVar20 = &DAT_10093a90;
          break;
        case 4:
          pbVar20 = &DAT_10093a90;
          break;
        case 5:
LAB_1005e46a:
          pbVar20 = &DAT_10093a90;
          break;
        case 6:
          if ((*(char *)((int)piVar19 + 6) == '\0') ||
             (iVar11 = (*gEngfuncs.IsSpectateOnly)(), iVar11 != 0)) {
            iVar11 = *piStack_190;
            piVar19 = piVar13;
            puVar5 = FUN_10017570();
            FUN_100185d0(puVar5,piVar19,iVar11);
          }
        default:
          goto switchD_1005e05c_caseD_2;
        }
LAB_1005e475:
        FUN_1006ac7a(&stack0xfffffea4,pbVar20);
switchD_1005e05c_caseD_2:
        (**(code **)(*piVar13 + 0x22c))(&stack0xfffffea4);
LAB_1005e491:
        iVar3 = iVar3 + 1;
        param_1 = local_128;
      } while (iVar3 < 8);
    }
    else {
      iVar3 = 8;
      piVar13 = piVar26;
      do {
        (**(code **)(*piVar13 + 0x24))();
        piVar13 = piVar13 + 0x10c4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar2 = iVar2 + 1;
    this = this + 0x39;
    piVar26 = piVar26 + 0x3a;
    piVar4 = piVar4 + 1;
    if (0x49 < iVar2) {
      piVar4 = param_1 + 0x349;
      iStack_134 = 0x4a;
      do {
        FUN_1005af30(piVar4);
        (**(code **)(*piVar4 + 0x14))(&stack0xfffffec4,auStack_11c,auStack_124);
        iVar2 = *piVar4;
        iVar3 = FUN_1005b0c0((int)piVar4);
        (**(code **)(iVar2 + 8))(iStack_134,iVar3);
        FUN_1005b030(piVar4);
        piVar4 = piVar4 + 0x39;
        iStack_134 = iStack_134 + -1;
      } while (iStack_134 != 0);
      (**(code **)(param_1[0x26f] + 0xc))(auStack_12c);
      (**(code **)(param_1[0x26f] + 8))(0,this);
      return;
    }
  } while( true );
}

/* 1005e5d0  FUN_1005e5d0  (82 bytes)
 * undefined FUN_1005e5d0(int param_1, int param_2)
 * called by: FUN_10065230
 */
void __thiscall FUN_1005e5d0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((int)this + 0x2684c);
  if (param_2 == iVar1) {
    iVar2 = param_1;
    if (param_1 != 0) goto LAB_1005e5f5;
  }
  else if (param_1 != 0) {
    return;
  }
  iVar2 = iVar1;
LAB_1005e5f5:
  *(int *)((int)this + 0x26ae8) = iVar2;
  lVar3 = __ftol();
  *(int *)((int)this + 0x26aec) = (int)lVar3;
  if (param_1 == iVar1) {
    *(int *)((int)this + 0x26ae8) = iVar1;
  }
  return;
}

/* 1005e630  FUN_1005e630  (36 bytes)
 * undefined FUN_1005e630(int * param_1)
 * called by: FUN_10063710
 */
void __fastcall FUN_1005e630(int *param_1)

{
  FUN_1005da20(param_1);
  (**(code **)(*param_1 + 0x24))(1);
  (**(code **)(param_1[0x99e3] + 0x24))(1);
  return;
}

/* 1005e870  FUN_1005e870  (178 bytes)
 * undefined FUN_1005e870(int param_1, int param_2)
 */
void __thiscall FUN_1005e870(void *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined *this_00;
  
  iVar1 = (int)this + (param_1 + param_2 * 0x4a) * 0xe8 + 0x4f0c;
  if (*(int *)((int)this + 0x9b4) != iVar1) {
    *(undefined4 *)((int)this + 0x9b4) = 0;
    *(undefined4 *)((int)this + 0x9b8) = 0xffffffff;
  }
  if ((iVar1 != 0) && (*(int *)((int)this + param_1 * 4 + 0x26980) == 0)) {
    iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858);
    if ((*(char **)(&DAT_1018fbd8 + iVar3 * 0x14) != (char *)0x0) &&
       (**(char **)(&DAT_1018fbd8 + iVar3 * 0x14) != '\0')) {
      if (((&DAT_1018fbde)[iVar3 * 0x14] != '\0') &&
         (iVar3 = (*gEngfuncs.IsSpectateOnly)(), iVar3 == 0)) {
        return;
      }
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858);
      this_00 = FUN_10017570();
      bVar2 = FUN_10018cc0(this_00,iVar3);
      if (bVar2) {
        *(int *)((int)this + 0x9b4) = iVar1;
        *(int *)((int)this + 0x9b8) = param_1;
      }
    }
  }
  return;
}

/* 1005eb30  FUN_1005eb30  (205 bytes)
 * undefined FUN_1005eb30(int * param_1, int * param_2)
 */
void __thiscall FUN_1005eb30(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  undefined1 local_8 [4];
  int local_4;
  
  (**(code **)(*(int *)this + 0xc))(local_8,&local_4);
  *param_1 = 0;
  *param_2 = 0;
  switch(*(undefined4 *)((int)this + 0xc4)) {
  case 0:
  case 3:
  case 6:
    *param_1 = 0;
    break;
  case 1:
  case 4:
  case 7:
    local_4 = (unaff_EDI - local_4) / 2;
    goto LAB_1005eb91;
  case 2:
  case 5:
  case 8:
    local_4 = unaff_EDI - local_4;
LAB_1005eb91:
    *param_1 = local_4;
  }
  switch(*(undefined4 *)((int)this + 0xc4)) {
  case 0:
  case 1:
  case 2:
    *param_2 = 0;
    goto switchD_1005eba6_default;
  case 3:
  case 4:
  case 5:
    iVar1 = (unaff_ESI - unaff_retaddr) / 2;
    break;
  case 6:
  case 7:
  case 8:
    iVar1 = unaff_ESI - unaff_retaddr;
    break;
  default:
    goto switchD_1005eba6_default;
  }
  *param_2 = iVar1;
switchD_1005eba6_default:
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  *param_1 = *param_1 + *(int *)((int)this + 0xdc);
  *param_2 = *param_2 + *(int *)((int)this + 0xe0);
  return;
}

/* 1005ec40  FUN_1005ec40  (301 bytes)
 * Label * FUN_1005ec40(Label * param_1)
 */
Label * __fastcall FUN_1005ec40(Label *param_1)

{
  Image *this;
  TextImage *pTVar1;
  undefined4 uVar2;
  int iVar3;
  Color local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077d61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  vgui::Label::Label(param_1,s_);
  *(undefined ***)param_1 = &PTR_setPos_1007fb10;
  this = operator_new(0x2c);
  local_4 = 0;
  if (this == (Image *)0x0) {
    this = (Image *)0x0;
  }
  else {
    vgui::Image::Image(this);
    *(undefined ***)this = &PTR_LAB_1007fab0;
    pTVar1 = operator_new(0x48);
    local_4._0_1_ = 1;
    if (pTVar1 == (TextImage *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = vgui::TextImage::TextImage(pTVar1,s_);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)(this + 0x24) = uVar2;
    pTVar1 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pTVar1 == (TextImage *)0x0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    else {
      uVar2 = vgui::TextImage::TextImage(pTVar1,s_);
      *(undefined4 *)(this + 0x28) = uVar2;
    }
  }
  local_4 = 0xffffffff;
  *(Image **)(param_1 + 0xd0) = this;
  iVar3 = vgui::Color::Color(local_18,0xff,0xaa,0,0);
  FUN_1005eea0(*(void **)(param_1 + 0xd0),&vgui::Color::_vftable_,*(undefined4 *)(iVar3 + 4),
               *(undefined4 *)(iVar3 + 8));
  *(undefined4 *)(param_1 + 0xd4) = 0xfffffffe;
  param_1[0xe4] = (Label)0x1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  ExceptionList = local_c;
  return param_1;
}

/* 1005ede0  FUN_1005ede0  (31 bytes)
 * undefined FUN_1005ede0(undefined4 param_1)
 */
void __thiscall FUN_1005ede0(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x24) + 0x5c))(param_1);
  (**(code **)(**(int **)((int)this + 0x28) + 0x5c))(param_1);
  return;
}

/* 1005eea0  FUN_1005eea0  (36 bytes)
 * undefined FUN_1005eea0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1005ec40
 */
void __thiscall FUN_1005eea0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0xc))(&vgui::Color::_vftable_,param_2,param_3);
  return;
}

/* 1005f1c0  FUN_1005f1c0  (49 bytes)
 * undefined FUN_1005f1c0(SchemeColor param_1)
 */
void __thiscall FUN_1005f1c0(void *this,SchemeColor param_1)

{
  int iVar1;
  Color aCStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x1005f1cf;
  vgui::Label::setFgColor(this,param_1);
  iVar1 = **(int **)((int)this + 0xd0);
  vgui::Color::Color(aCStack_18,param_1);
  (**(code **)(iVar1 + 0xc))();
  return;
}

/* 1005f220  FUN_1005f220  (2274 bytes)
 * Panel * FUN_1005f220(int param_1, int param_2, int param_3, int param_4)
 * called by: FUN_10063b40
 */
Panel * __thiscall FUN_1005f220(void *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  HeaderPanel *this_00;
  int *piVar2;
  Label *pLVar3;
  Label *pLVar4;
  TablePanel *this_01;
  undefined4 uVar5;
  undefined4 *puVar6;
  Button *pBVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  Label *pLVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  Label *pLVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  void *pvVar21;
  int aiStack_98 [2];
  int iStack_70;
  int *piStack_6c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077df4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xbc) = 100;
  *(undefined ***)this = &PTR_setPos_10080234;
  this_00 = operator_new(0xf8);
  local_4 = 0;
  if (this_00 == (HeaderPanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    piVar2 = (int *)vgui::HeaderPanel::HeaderPanel(this_00,0,0,param_3,(int)lVar19);
  }
  *(int **)((int)this + 0xc0) = piVar2;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x120))();
  (**(code **)(**(int **)((int)this + 0xc0) + 300))();
  pLVar3 = operator_new(0x114);
  if (pLVar3 != (Label *)0x0) {
    vgui::Label::Label(pLVar3,s_Address_100968f8);
    *(undefined4 *)(pLVar3 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar3 = &PTR_setPos_10080008;
    pcVar13 = s_address_10093aa8;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar4 = (Label *)(pcVar14 + -uVar8);
    pLVar11 = pLVar3 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar11 = *(undefined4 *)pLVar4;
      pLVar4 = pLVar4 + 4;
      pLVar11 = pLVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar11 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar11 = pLVar11 + 1;
    }
    vgui::Label::setContentAlignment(pLVar3,3);
    vgui::Label::setFgColor(pLVar3,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar3,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar3,2);
  }
  pLVar3 = operator_new(0x114);
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    vgui::Label::Label(pLVar3,s_Server_100968f0);
    *(undefined4 *)(pLVar3 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar3 = &PTR_setPos_10080008;
    pcVar13 = s_hostname_10093ab0;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar4 = (Label *)(pcVar14 + -uVar8);
    pLVar11 = pLVar3 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar11 = *(undefined4 *)pLVar4;
      pLVar4 = pLVar4 + 4;
      pLVar11 = pLVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar11 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar11 = pLVar11 + 1;
    }
    vgui::Label::setContentAlignment(pLVar3,3);
    vgui::Label::setFgColor(pLVar3,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar3,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar3,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,&DAT_100968ec);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10080008;
    pcVar13 = &DAT_100968e8;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,s_Current_100968e0);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10080008;
    pcVar13 = s_current_100968d8;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,s_Latency_100968d0);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10080008;
    pcVar13 = &DAT_10093aa0;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  iVar10 = 5;
  do {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x1fc))();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  this_01 = operator_new(0x10c);
  if (this_01 == (TablePanel *)0x0) {
    this_01 = (TablePanel *)0x0;
  }
  else {
    lVar19 = __ftol();
    lVar20 = __ftol();
    aiStack_98[1] = 0x1005f76d;
    vgui::TablePanel::TablePanel(this_01,0,(int)lVar20,(int)pLVar3,(int)lVar19,5);
    *(undefined ***)this_01 = &PTR_setPos_1007fda8;
    pLVar3 = operator_new(0xd0);
    if (pLVar3 == (Label *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Label::Label(pLVar3,s_,0,0);
    }
    *(undefined4 *)(this_01 + 0x104) = uVar5;
    *(undefined4 *)(this_01 + 0x108) = 0;
  }
  *(TablePanel **)((int)this + 0xc4) = this_01;
  (**(code **)(*(int *)this_01 + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0x21c))();
  aiStack_98[1] = 100;
  aiStack_98[0] = 0x1005f7f2;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x120))();
  aiStack_98[0] = 100;
  pvVar21 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0xc4) + 300))(0,0,0);
  puVar6 = operator_new(8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = *(undefined4 *)((int)this + 0xc4);
    *puVar6 = &PTR_LAB_1007fd7c;
    puVar6[1] = uVar5;
  }
  (**(code **)(**(int **)((int)this + 0xc4) + 0x70))(puVar6);
  piStack_6c = aiStack_98;
  iStack_70 = 5;
  do {
    uVar8 = 0xffffffff;
    piVar2 = (int *)*piStack_6c;
    piVar2[0x44] = *(int *)((int)this + 0xc4);
    puVar6 = operator_new(0x48);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = piVar2[0x44];
      *puVar6 = &PTR_LAB_1007fd50;
      piVar16 = piVar2 + 0x34;
      do {
        piVar17 = piVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar17 = (int *)((int)piVar16 + 1);
        iVar10 = *piVar16;
        piVar16 = piVar17;
      } while ((char)iVar10 != '\0');
      uVar8 = ~uVar8;
      puVar12 = (undefined4 *)((int)piVar17 - uVar8);
      puVar18 = puVar6 + 2;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar18 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
    (**(code **)(*piVar2 + 0x70))(puVar6);
    piStack_6c = piStack_6c + 1;
    iStack_70 = iStack_70 + -1;
    if (iStack_70 == 0) {
      lVar19 = __ftol();
      iVar10 = (int)lVar19;
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_1005a0b0(pBVar7,s_Connect_100968c8,10,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 200) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_1007fd4c;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 200) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_1005a0b0(pBVar7,s_Refresh_100968c0,0x5a,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xcc) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_1007fd48;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xcc) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_1005a0b0(pBVar7,&DAT_100968b8,0xaa,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xd4) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_1007fd44;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xd4) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      aiStack_98[1] = 0xb;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_1005a0b0(pBVar7,s_Close_100968b0,0xfa,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xdc) = pBVar7;
      aiStack_98[1] = 0xffffffff;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_1007fd40;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xdc) + 0x240))(puVar6);
      vgui::Panel::setPaintBorderEnabled(this,false);
      vgui::Panel::setPaintBackgroundEnabled(this,false);
      vgui::Panel::setPaintEnabled(this,false);
      ExceptionList = pvVar21;
      return this;
    }
  } while( true );
}

/* 1005fb90  FUN_1005fb90  (668 bytes)
 * undefined4 FUN_1005fb90(undefined4 param_1, int param_2)
 */
undefined4 __thiscall FUN_1005fb90(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_38 = 0x1005fba3;
  pcVar2 = (char *)FUN_10022b10(param_2);
  if (param_2 == *(int *)((int)this + 0x108)) {
    uStack_38 = 0x3f;
    uStack_3c = 0xf0;
    uStack_40 = 200;
    uStack_44 = 0x1005fbd0;
    (**(code **)(**(int **)((int)this + 0x104) + 0x120))();
  }
  else {
    uStack_38 = 0xff;
    uStack_3c = 0xff;
    uStack_40 = 0xff;
    uStack_44 = 0x1005fbea;
    (**(code **)(**(int **)((int)this + 0x104) + 0x120))();
  }
  uStack_44 = 200;
  uStack_48 = 0;
  (**(code **)(**(int **)((int)this + 0x104) + 300))(0,0);
  (**(code **)(**(int **)((int)this + 0x104) + 0x21c))(3);
  (**(code **)(**(int **)((int)this + 0x104) + 0x20c))(2);
  if (pcVar2 == (char *)0x0) {
    if ((param_2 == 0) && (unaff_EBX == 0)) {
      bVar1 = FUN_10022af0();
      piVar4 = *(int **)((int)this + 0x104);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        (**(code **)(*piVar4 + 0x200))(piVar4,s_Press__Refresh__to_search_for_se_10096900);
        return *(undefined4 *)((int)this + 0x104);
      }
      iVar5 = *piVar4;
      pcVar2 = s_Waiting_for_servers_to_respond___1009692c;
    }
    else {
      piVar4 = *(int **)((int)this + 0x104);
      pcVar2 = s_;
      iVar5 = *piVar4;
    }
    (**(code **)(iVar5 + 0x200))(piVar4,pcVar2);
    goto switchD_1005fc35_default;
  }
  switch(unaff_EBX) {
  case 0:
    pcVar2 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,s_address_10093aa8);
    goto joined_r0x1005fcc5;
  case 1:
    pcVar2 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,s_hostname_10093ab0);
    if (pcVar2 != (char *)0x0) {
      _strncpy((char *)&uStack_48,pcVar2,0x1f);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),&uStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 2:
    pcVar2 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,&DAT_100968e8);
joined_r0x1005fcc5:
    if (pcVar2 != (char *)0x0) {
      _strncpy((char *)&uStack_48,pcVar2,0x1f);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),&uStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 3:
    pcVar3 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,s_current_100968d8);
    pcVar2 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,&DAT_10096950);
    if ((pcVar3 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
      puVar6 = &uStack_48;
      pcVar7 = s__s__s_10092b2c;
      FUN_1006ac7a((undefined1 *)puVar6,(byte_conflict *)s__s__s_10092b2c);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))
                (*(int **)((int)this + 0x104),&uStack_48,puVar6,pcVar7,pcVar3,pcVar2);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 4:
    pcVar2 = (*(gEngfuncs.pNetAPI)->ValueForKey)(pcVar2,&DAT_10093aa0);
    if (pcVar2 != (char *)0x0) {
      _strncpy((char *)&uStack_48,pcVar2,0x1f);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),&uStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
  }
switchD_1005fc35_default:
  return *(undefined4 *)((int)this + 0x104);
}

/* 10060180  FUN_10060180  (101 bytes)
 * undefined FUN_10060180(int * param_1)
 * called by: FUN_10060c70, FUN_100615a0, FUN_10061720
 */
void __thiscall FUN_10060180(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 600) < 100) {
    *(int **)((int)this + *(int *)((int)this + 600) * 4 + 200) = param_1;
    *(int *)((int)this + 600) = *(int *)((int)this + 600) + 1;
    (**(code **)(*param_1 + 0x40))(this);
    (**(code **)(*param_1 + 0x20c))(3);
    iVar1 = *(int *)((int)this + 600);
    if (iVar1 < 10) {
      FUN_1005a280(param_1,(char)iVar1 + '0');
      return;
    }
    if (iVar1 == 10) {
      FUN_1005a280(param_1,'0');
    }
  }
  return;
}

/* 100601f0  FUN_100601f0  (134 bytes)
 * undefined4 FUN_100601f0(int param_1)
 * called by: FUN_100635e0, FUN_100637a0, FUN_10064b90
 */
uint __thiscall FUN_100601f0(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = *(uint *)((int)this + 600);
  iVar6 = 0;
  if (0 < (int)uVar4) {
    piVar7 = (int *)((int)this + 200);
    do {
      iVar3 = (**(code **)(*(int *)*piVar7 + 0x260))();
      if (iVar3 == 0) {
        cVar2 = FUN_1005a2a0(*piVar7);
        if (cVar2 == param_1) {
          piVar7 = *(int **)((int)this + iVar6 * 4 + 200);
          piVar1 = (int *)piVar7[0x3d];
          if (piVar1 != (int *)0x0) {
            uVar4 = FUN_100637f0(DAT_100d5cb0,piVar1);
            return uVar4 & 0xffffff00;
          }
          uVar5 = (**(code **)(*piVar7 + 600))();
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
      }
      uVar4 = *(uint *)((int)this + 600);
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < (int)uVar4);
  }
  return uVar4 & 0xffffff00;
}

/* 10060280  FUN_10060280  (70 bytes)
 * undefined FUN_10060280(int param_1)
 * called by: FUN_1005a3d0, FUN_10060280, FUN_100636d0
 */
void __fastcall FUN_10060280(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 600)) {
    piVar1 = (int *)(param_1 + 200);
    do {
      (**(code **)(*(int *)*piVar1 + 0x234))(0);
      if (*(int *)(*piVar1 + 0xf4) != 0) {
        FUN_10060280(*(int *)(*piVar1 + 0xf4));
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 600));
  }
  return;
}

/* 100602d0  FUN_100602d0  (64 bytes)
 * undefined4 FUN_100602d0(int param_1)
 * called by: FUN_1005a3d0
 */
undefined4 __thiscall FUN_100602d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    piVar2 = (int *)((int)this + 200);
    do {
      if (*(int *)(*piVar2 + 0xf4) == param_1) {
        return *(undefined4 *)((int)this + iVar1 * 4 + 200);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 600));
  }
  return 0;
}

/* 10060310  FUN_10060310  (314 bytes)
 * undefined1 FUN_10060310(int param_1, char param_2)
 * called by: FUN_10060310, FUN_10063840
 */
undefined1 __thiscall FUN_10060310(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 unaff_EBP;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int local_c;
  undefined1 auStack_8 [8];
  
  iVar5 = 0;
  uVar3 = 0;
  local_c = 0;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),param_1);
  }
  param_1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    piVar4 = (int *)((int)this + 200);
    do {
      iVar2 = ((int *)*piVar4)[0x3c];
      if ((((iVar2 == 0) || (iVar2 == DAT_10190a10)) &&
          (iVar2 = (**(code **)(*(int *)*piVar4 + 0x260))(), iVar2 == 0)) && (param_2 == '\0')) {
        if ((*(void **)(*piVar4 + 0xf4) == (void *)0x0) ||
           (cVar1 = FUN_10060310(*(void **)(*piVar4 + 0xf4),*(int *)((int)this + 8) + iVar5,'\0'),
           cVar1 != '\0')) {
          (**(code **)(*(int *)*piVar4 + 0x24))(1);
          (**(code **)(*(int *)*piVar4 + 4))(&local_c,auStack_8);
          (*(code *)**(undefined4 **)*piVar4)(unaff_EBP,iVar5);
          lVar6 = __ftol();
          iVar5 = (int)lVar6;
          uVar3 = 1;
          local_c = iVar5;
        }
        else {
          (**(code **)(*(int *)*piVar4 + 0x24))(0);
        }
      }
      else {
        (**(code **)(*(int *)*piVar4 + 0x24))(0);
        if (*(void **)(*piVar4 + 0xf4) != (void *)0x0) {
          FUN_10060310(*(void **)(*piVar4 + 0xf4),*(int *)((int)this + 8) + iVar5,'\x01');
        }
      }
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    } while (param_1 < *(int *)((int)this + 600));
  }
  (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 0xc),iVar5 + 1);
  return uVar3;
}

/* 10060450  FUN_10060450  (173 bytes)
 * undefined FUN_10060450(undefined4 * param_1)
 * called by: FUN_1005a2d0, FUN_10063840
 */
void __thiscall FUN_10060450(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)((int)this + 8) + (int)param_1;
  iVar1 = *(int *)((int)this + 0x10) + iVar2;
  if (DAT_100d590c < iVar1) {
    iVar1 = iVar1 - DAT_100d590c;
    if (0 < iVar1) {
      do {
        lVar4 = __ftol();
        iVar3 = (int)lVar4;
      } while (iVar3 < iVar1);
    }
    iVar2 = iVar2 - iVar3;
    if (iVar2 < 0) {
      iVar3 = iVar3 + iVar2;
      iVar2 = 0;
    }
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    param_1 = (undefined4 *)((int)this + 200);
    do {
      FUN_1005a2d0((void *)*param_1,iVar3);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < *(int *)((int)this + 600));
  }
  (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),iVar2);
  return;
}

/* 10060500  FUN_10060500  (43 bytes)
 * undefined FUN_10060500(int * param_1)
 * called by: FUN_100637f0
 */
void __fastcall FUN_10060500(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x24))(1);
  for (piVar1 = (int *)param_1[0x2f]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x2f]) {
    (**(code **)(*piVar1 + 0x24))(1);
  }
  return;
}

/* 10060530  FUN_10060530  (693 bytes)
 * Panel * FUN_10060530(undefined4 param_1, int param_2)
 * called by: FUN_10060c70, FUN_100615a0, FUN_10061720
 */
Panel * FUN_10060530(undefined4 param_1,int param_2)

{
  Panel *this;
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  Label *pLVar3;
  Panel *pPVar4;
  void *unaff_EDI;
  longlong lVar5;
  longlong lVar6;
  int *unaff_retaddr;
  int local_20;
  int local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_10077e16;
  pvStack_c = ExceptionList;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  lVar5 = __ftol();
  if (param_2 != 0) {
    lVar6 = __ftol();
    local_1c = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (int)lVar6;
  }
  this = operator_new(0x25c);
  local_4 = (void *)0x0;
  pPVar4 = (Panel *)0x0;
  if (this != (Panel *)0x0) {
    vgui::Panel::Panel(this,local_1c,local_20,(int)lVar5,0);
    *(int *)(this + 0xc0) = local_1c;
    *(int *)(this + 0xc4) = local_20;
    *(undefined ***)this = &PTR_setPos_1008046c;
    *(int *)(this + 0xbc) = param_2;
    *(undefined4 *)(this + 600) = 0;
    pPVar4 = this;
  }
  local_4 = (void *)0xffffffff;
  (**(code **)(*(int *)pPVar4 + 0x40))();
  FUN_1005a2b0(unaff_retaddr,(int)pPVar4);
  (**(code **)(*unaff_retaddr + 0x20c))(3);
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_10080440;
    puVar1[1] = pPVar4;
    puVar1[2] = unaff_retaddr;
  }
  (**(code **)(*unaff_retaddr + 0x70))(puVar1);
  this_00 = operator_new(0xd4);
  local_4 = this_00;
  if (this_00 == (void *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    lVar5 = __ftol();
    iVar2 = (int)lVar5;
    lVar5 = __ftol();
    pLVar3 = FUN_1005a500(this_00,s_arrow_10096b8c,(int)lVar5,iVar2);
  }
  (**(code **)(*(int *)pLVar3 + 0x40))(unaff_retaddr);
  (**(code **)(*(int *)pLVar3 + 0x70))(puVar1);
  (**(code **)(*(int *)pLVar3 + 4))(&stack0xffffffd0,&stack0xffffffcc);
  puVar1 = *(undefined4 **)pLVar3;
  (*(code *)puVar1[0x8b])();
  lVar5 = __ftol();
  (*(code *)puVar1[0x8c])((int)lVar5);
  lVar5 = __ftol();
  (*(code *)*puVar1)((int)lVar5);
  if ((char)unaff_retaddr[0x4a] == '\0') {
    puVar1 = operator_new(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = unaff_retaddr;
      *puVar1 = &PTR_LAB_1007e70c;
      puVar1[2] = unaff_retaddr;
    }
    (**(code **)(*(int *)pLVar3 + 0x70))(puVar1);
  }
  ExceptionList = unaff_EDI;
  return pPVar4;
}

/* 100607f0  FUN_100607f0  (649 bytes)
 * Panel * FUN_100607f0(uint param_1, uint param_2, int param_3, int param_4)
 * called by: FUN_1005b3e0
 */
Panel * __thiscall FUN_100607f0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  void *this_00;
  int iVar1;
  InputSignal *pIVar2;
  App *pAVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077e2e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  this_00 = (void *)((int)this + 0x22c);
  FUN_1005c300(this_00,iVar1);
  *(undefined ***)this = &PTR_setPos_10080694;
  local_4 = 0;
  DAT_100d5cb0 = this;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0;
  *(undefined4 *)((int)this + 0x884) = 0;
  *(undefined4 *)((int)this + 0xa9c) = 0;
  *(undefined4 *)((int)this + 0xad4) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  FUN_10060aa0(this);
  pIVar2 = operator_new(8);
  if (pIVar2 == (InputSignal *)0x0) {
    pIVar2 = (InputSignal *)0x0;
  }
  else {
    *(undefined ***)pIVar2 = &PTR_LAB_10080668;
  }
  vgui::Panel::addInputSignal(this,pIVar2);
  pAVar3 = vgui::App::getInstance();
  piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))();
  uStack_14 = FUN_1005cc60(this_00,(byte_conflict *)s_Primary_Button_Text_10096ba8);
  iVar1 = *piVar4;
  uVar5 = FUN_1005cce0(this_00,uStack_14);
  uVar12 = 1;
  (**(code **)(iVar1 + 8))();
  FUN_1005ccf0(this_00,unaff_EBP,&local_4,(uint *)&stack0x00000000,&param_1,&param_2);
  uVar9 = 3;
  uVar10 = local_4;
  uVar11 = param_1;
  (**(code **)*piVar4)();
  FUN_1005cd30(this_00,unaff_EBP,(uint *)&stack0xffffffe8,&uStack_14,(uint *)&local_10,
               (uint *)&pvStack_c);
  (**(code **)*piVar4)();
  FUN_1005cd70(this_00,unaff_EBP,(uint *)&stack0xffffffd4,(uint *)&stack0xffffffd8,
               (uint *)&stack0xffffffdc,(uint *)&stack0xffffffe0);
  (**(code **)*piVar4)(7,uVar12,uVar5,unaff_EDI,unaff_ESI);
  FUN_1005cdb0(this_00,unaff_EBP,(uint *)&stack0xffffffc0,(uint *)&stack0xffffffc4,
               (uint *)&stack0xffffffc8,(uint *)&stack0xffffffcc);
  (**(code **)*piVar4)(4,uVar9,uVar10,unaff_retaddr,uVar11);
  FUN_1005cdf0(this_00,unaff_EBP,(uint *)&stack0xffffffac,(uint *)&stack0xffffffb0,
               (uint *)&stack0xffffffb4,(uint *)&stack0xffffffb8);
  pvVar8 = (void *)0xb2;
  (**(code **)*piVar4)(6,0xb2,0x76,0,0);
  iVar6 = FUN_1005cc60(this_00,(byte_conflict *)s_Scoreboard_Text_10096858);
  iVar1 = *piVar4;
  uVar7 = FUN_1005cce0(this_00,iVar6);
  (**(code **)(iVar1 + 8))(2,uVar7);
  iVar6 = FUN_1005cc60(this_00,(byte_conflict *)s_CommandMenu_Text_10096b94);
  iVar1 = *piVar4;
  uVar7 = FUN_1005cce0(this_00,iVar6);
  (**(code **)(iVar1 + 8))(3,uVar7);
  pAVar3 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar3 + 0x50))(piVar4);
  FUN_10060c00((int)this);
  FUN_100642c0((int)this);
  FUN_10064380((int)this);
  FUN_10063a50((int)this);
  FUN_10060c70(this);
  FUN_10063b40((int)this);
  FUN_10064410((int)this);
  ExceptionList = pvVar8;
  return this;
}

/* 10060aa0  FUN_10060aa0  (337 bytes)
 * undefined FUN_10060aa0(void * param_1)
 * called by: FUN_1005b3e0, FUN_100607f0
 */
void __fastcall FUN_10060aa0(void *param_1)

{
  char cVar1;
  App *pAVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (*(int **)((int)param_1 + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa0) + 0x214))();
  }
  if (*(int **)((int)param_1 + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa4) + 0x214))();
  }
  if (*(int *)((int)param_1 + 0xaa8) != 0) {
    FUN_1005d5a0(*(int *)((int)param_1 + 0xaa8));
    FUN_10063760((int)param_1);
  }
  if (*(int **)((int)param_1 + 0x884) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x884) + 0x24))(0);
  }
  if (*(undefined4 **)((int)param_1 + 0xaac) != (undefined4 *)0x0) {
    FUN_10066750(*(undefined4 **)((int)param_1 + 0xaac));
  }
  FUN_100641e0((int)param_1);
  FUN_100636d0(param_1);
  uVar5 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x23c) = 1;
  *(undefined4 *)((int)param_1 + 0x8b8) = 0;
  *(undefined4 *)((int)param_1 + 0x20c) = 0;
  pcVar10 = s_;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  DAT_10190a10 = 0;
  DAT_10190b24 = 0;
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = (char *)((int)param_1 + 0xa5c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = s_;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  puVar7 = (undefined4 *)((int)param_1 + 0x894);
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = (char *)((int)param_1 + 0xab0);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  iVar8 = 5;
  for (uVar5 = uVar5 & 3; pcVar9 = (char *)((int)param_1 + 0x8bc), uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  do {
    uVar5 = 0xffffffff;
    *puVar7 = 0;
    pcVar10 = s_;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar7 = puVar7 + 1;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = pcVar9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    iVar8 = iVar8 + -1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcVar9 = pcVar9 + 0x40;
    if (iVar8 == 0) {
      pAVar2 = vgui::App::getInstance();
      piVar3 = (int *)(**(code **)(*(int *)pAVar2 + 0x54))();
      pAVar2 = vgui::App::getInstance();
      iVar8 = *(int *)pAVar2;
      uVar4 = (**(code **)(*piVar3 + 0x14))(1);
      (**(code **)(iVar8 + 0x8c))(uVar4);
      return;
    }
  } while( true );
}

/* 10060c00  FUN_10060c00  (105 bytes)
 * undefined FUN_10060c00(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10060c00(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_10066790(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10066750(puVar1);
    *(undefined4 **)(param_1 + 0xaac) = puVar1;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0xaac) = 0;
  ExceptionList = local_c;
  return;
}

/* 10060c70  FUN_10060c70  (2333 bytes)
 * undefined FUN_10060c70(void * param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10060c70(void *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  void *pvVar4;
  Panel *pPVar5;
  byte_conflict *pbVar6;
  byte *pbVar7;
  int iVar8;
  Button *pBVar9;
  undefined4 *puVar10;
  int iVar11;
  void *this;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  Button *pBVar17;
  char *pcVar18;
  Button *pBVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  Button *in_stack_fffff9d0;
  char local_230;
  undefined4 local_22f;
  undefined1 local_131;
  Button local_130;
  Button local_12f [2];
  Button aBStack_12d [124];
  undefined1 local_b1;
  char local_b0 [1];
  undefined4 uStack_af;
  byte local_90;
  undefined4 local_8f;
  undefined1 local_71;
  char local_70;
  undefined4 local_6f;
  undefined1 local_51;
  char local_50 [4];
  char local_4c [4];
  char local_48 [2];
  char local_46;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined1 local_31;
  Button *local_30;
  Panel *local_2c;
  Button *local_28;
  int local_24;
  void *local_20;
  char local_19;
  byte_conflict *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10077e8c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9c0;
  ExceptionList = &local_10;
  local_20 = param_1;
  pPVar5 = operator_new(0x25c);
  local_8 = 0;
  local_2c = pPVar5;
  if (pPVar5 == (Panel *)0x0) {
    pPVar5 = (Panel *)0x0;
  }
  else {
    lVar21 = __ftol();
    local_24 = (int)lVar21;
    lVar21 = __ftol();
    vgui::Panel::Panel(pPVar5,0,(int)lVar21,local_24,300);
    *(int *)(pPVar5 + 0xc4) = (int)lVar21;
    *(undefined ***)pPVar5 = &PTR_setPos_1008046c;
    *(undefined4 *)(pPVar5 + 0xbc) = 0;
    *(undefined4 *)(pPVar5 + 0xc0) = 0;
    *(undefined4 *)(pPVar5 + 600) = 0;
  }
  *(Panel **)((int)param_1 + 200) = pPVar5;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pPVar5 + 0x40))(param_1);
  (**(code **)(**(int **)((int)param_1 + 200) + 0x24))(0);
  *(undefined4 *)((int)param_1 + 0x210) = 1;
  *(undefined4 *)((int)param_1 + 0x224) = 0;
  *(undefined4 *)((int)param_1 + 0x220) = 0;
  *(undefined4 *)((int)param_1 + 0x21c) = 0;
  *(undefined4 *)((int)param_1 + 0x214) = 0;
  pbVar6 = (*gEngfuncs.COM_LoadFile)(s_commandmenu_txt_10096cec,5,(int *)0x0);
  if (pbVar6 == (byte_conflict *)0x0) {
    (*gEngfuncs.Con_DPrintf)(s_Unable_to_open_commandmenu_txt_10096ccc);
    FUN_100637f0(param_1,(int *)0x0);
    ExceptionList = local_10;
    return;
  }
  local_8 = 1;
  FUN_100348d0(s__DetpackSet_For5Seconds_10096cb4,(char *)((int)param_1 + 0x9fc),0x20);
  FUN_100348d0(s__DetpackSet_For20Seconds_10096c98,(char *)((int)param_1 + 0xa1c),0x20);
  FUN_100348d0(s__DetpackSet_For50Seconds_10096c7c,(char *)((int)param_1 + 0xa3c),0x20);
  *(undefined4 *)((int)param_1 + 0xad4) = *(undefined4 *)((int)param_1 + 200);
  local_4c[0] = s_file_start_10096c70[4];
  local_4c[1] = s_file_start_10096c70[5];
  local_4c[2] = s_file_start_10096c70[6];
  local_4c[3] = s_file_start_10096c70[7];
  local_45 = 0;
  local_48[0] = s_file_start_10096c70[8];
  local_48[1] = s_file_start_10096c70[9];
  local_41 = 0;
  local_50[0] = s_file_start_10096c70[0];
  local_50[1] = s_file_start_10096c70[1];
  local_50[2] = s_file_start_10096c70[2];
  local_50[3] = s_file_start_10096c70[3];
  local_3d = 0;
  local_39 = 0;
  pcVar14 = &stack0xfffff9d0;
  local_35 = 0;
  local_46 = s_file_start_10096c70[10];
  local_31 = 0;
  do {
    pbVar6 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)pbVar6,pcVar14);
    iVar11 = -1;
    local_18 = pbVar6;
    pcVar16 = &stack0xfffff9d0;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar1 != '\0');
    if ((iVar11 == -2) || (0x4f < *(int *)((int)param_1 + 0x210))) {
      local_8 = 0xffffffff;
      FUN_10063bd0(param_1,0);
      FUN_100637f0(param_1,(int *)0x0);
      (*gEngfuncs.COM_FreeFile)(pbVar6);
      *(undefined4 *)((int)param_1 + 0xc4) = 1;
      ExceptionList = local_10;
      return;
    }
    while ((byte)in_stack_fffff9d0 != 0x7d) {
      iVar11 = -1;
      pcVar16 = &stack0xfffff9d0;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar1 != '\0');
      if (iVar11 == -2) break;
      local_70 = s_[0];
      puVar10 = &local_6f;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)((int)puVar10 + 2) = 0;
      _local_b0 = CONCAT31((undefined3)uStack_af,s_[0]);
      puVar10 = &uStack_af;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)((int)puVar10 + 2) = 0;
      local_90 = s_[0];
      puVar10 = &local_8f;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)((int)puVar10 + 2) = 0;
      local_130 = (Button)s_[0];
      pBVar9 = local_12f;
      for (iVar11 = 0x1f; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)pBVar9 = 0;
        pBVar9 = pBVar9 + 4;
      }
      *(undefined2 *)pBVar9 = 0;
      pBVar9[2] = (Button)0x0;
      local_230 = s_[0];
      puVar10 = &local_22f;
      for (iVar11 = 0x3f; pvVar4 = local_20, iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)((int)puVar10 + 2) = 0;
      local_24 = 0;
      local_2c = (Panel *)0x0;
      local_28 = (Button *)0x0;
      local_19 = '\x01';
      if (*(int *)((int)pvVar4 + 0xad4) == 0) {
        (*gEngfuncs.Con_Printf)(s_Error_in_Commandmenu_txt_file_af_10096c44);
        *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
        ExceptionList = local_10;
        return;
      }
      _strncpy((char *)&local_90,&stack0xfffff9d0,0x20);
      local_71 = 0;
      pcVar14 = s_CUSTOM_10096c3c;
      pbVar7 = &local_90;
      do {
        bVar2 = *pbVar7;
        bVar20 = bVar2 < (byte)*pcVar14;
        if (bVar2 != *pcVar14) {
LAB_10060f97:
          iVar11 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_10060f9c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar20 = bVar2 < (byte)pcVar14[1];
        if (bVar2 != pcVar14[1]) goto LAB_10060f97;
        pbVar7 = pbVar7 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar2 != 0);
      iVar11 = 0;
LAB_10060f9c:
      if (iVar11 == 0) {
        local_2c = (Panel *)0x1;
        iVar11 = local_24;
LAB_10060fa7:
        local_24 = iVar11;
        pbVar6 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_18,&stack0xfffff9d0);
      }
      else {
        pbVar15 = &DAT_10096c38;
        pbVar7 = &local_90;
        do {
          bVar2 = *pbVar7;
          bVar20 = bVar2 < *pbVar15;
          if (bVar2 != *pbVar15) {
LAB_10060ff1:
            iVar11 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_10060ff6;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar20 = bVar2 < pbVar15[1];
          if (bVar2 != pbVar15[1]) goto LAB_10060ff1;
          pbVar7 = pbVar7 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar2 != 0);
        iVar11 = 0;
LAB_10060ff6:
        if (iVar11 == 0) {
          pcVar14 = (*gEngfuncs.COM_ParseFile)((char *)local_18,&stack0xfffff9d0);
          _strncpy(&local_230,&stack0xfffff9d0,0x100);
          local_131 = 0;
          pbVar6 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar14,&stack0xfffff9d0);
        }
        else {
          iVar11 = _strncmp((char *)&local_90,&DAT_10096c30,4);
          if (iVar11 == 0) {
            local_28 = (Button *)FUN_1006c042(this,(byte_conflict *)((int)&local_8f + 3));
            pbVar6 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_18,&stack0xfffff9d0);
          }
          else {
            for (iVar11 = 1; pbVar6 = local_18, iVar11 < 10; iVar11 = iVar11 + 1) {
              pbVar15 = *(byte **)(iVar11 * 4 + 0x100969b0);
              pbVar7 = &stack0xfffff9d0;
              do {
                bVar2 = *pbVar7;
                bVar20 = bVar2 < *pbVar15;
                if (bVar2 != *pbVar15) {
LAB_100610c3:
                  iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  goto LAB_100610c8;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar20 = bVar2 < pbVar15[1];
                if (bVar2 != pbVar15[1]) goto LAB_100610c3;
                pbVar7 = pbVar7 + 2;
                pbVar15 = pbVar15 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_100610c8:
              if (iVar8 == 0) goto LAB_10060fa7;
            }
          }
        }
      }
      _strncpy(local_b0,&stack0xfffff9d0,0x20);
      local_51 = 0;
      pcVar14 = (*gEngfuncs.COM_ParseFile)((char *)pbVar6,&stack0xfffff9d0);
      _strncpy(&local_70,&stack0xfffff9d0,0x20);
      uVar12 = 0xffffffff;
      local_51 = 0;
      pcVar16 = &local_70;
      do {
        pcVar18 = pcVar16;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar18 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar18;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar16 = pcVar18 + -uVar12;
      pcVar18 = local_50;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar18 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar18 = pcVar18 + 1;
      }
      local_18 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar14,&stack0xfffff9d0);
      in_stack_fffff9d0 = &local_130;
      _strncpy((char *)in_stack_fffff9d0,&stack0xfffff9d0,0x80);
      local_b1 = 0;
      if (local_2c == (Panel *)0x0) {
        if (local_230 == '\0') {
          if (local_28 == (Button *)0x0) {
            pBVar9 = operator_new(300);
            local_30 = pBVar9;
            local_8._0_1_ = 4;
            if (pBVar9 == (Button *)0x0) {
              pBVar9 = (Button *)0x0;
            }
            else {
              local_28 = *(Button **)(*(int *)((int)local_20 + 0xad4) + 600);
              lVar21 = __ftol();
              iVar11 = (int)lVar21;
              lVar21 = __ftol();
              iVar8 = (int)lVar21;
              lVar21 = __ftol();
              in_stack_fffff9d0 = (Button *)lVar21;
              pcVar14 = (char *)0x100613d1;
              pBVar9 = FUN_1005a110(pBVar9,local_24,&local_70,0,(int)in_stack_fffff9d0,iVar8,iVar11)
              ;
            }
            local_8 = CONCAT31(local_8._1_3_,1);
          }
          else {
            pBVar9 = operator_new(0x130);
            local_30 = pBVar9;
            local_8._0_1_ = 3;
            if (pBVar9 == (Button *)0x0) goto LAB_100612a5;
            local_24 = *(int *)(*(int *)((int)local_20 + 0xad4) + 600);
            lVar21 = __ftol();
            lVar22 = __ftol();
            in_stack_fffff9d0 = (Button *)lVar22;
            lVar22 = __ftol();
            pcVar14 = (char *)0x1006133b;
            FUN_1005a0b0(pBVar9,&local_70,0,(int)lVar22,(int)in_stack_fffff9d0,(int)lVar21,
                         (Button)0x0);
            *(undefined ***)pBVar9 = &PTR_setPos_10080890;
            *(Button **)(pBVar9 + 300) = local_28;
            local_8 = CONCAT31(local_8._1_3_,1);
          }
        }
        else {
          pBVar9 = operator_new(0x22c);
          local_28 = pBVar9;
          local_8._0_1_ = 2;
          if (pBVar9 == (Button *)0x0) {
LAB_100612a5:
            local_8 = CONCAT31(local_8._1_3_,1);
            pBVar9 = (Button *)0x0;
          }
          else {
            local_24 = *(int *)(*(int *)((int)local_20 + 0xad4) + 600);
            lVar21 = __ftol();
            lVar22 = __ftol();
            lVar23 = __ftol();
            pcVar14 = (char *)0x10061279;
            FUN_1005a0b0(pBVar9,&local_70,0,(int)lVar23,(int)lVar22,(int)lVar21,(Button)0x0);
            in_stack_fffff9d0 = pBVar9 + 300;
            *(undefined ***)pBVar9 = &PTR_setPos_10080af8;
            FUN_1006ac7a(in_stack_fffff9d0,(byte_conflict *)s_maps__s_bsp_10096c24);
            local_8 = CONCAT31(local_8._1_3_,1);
          }
        }
      }
      else {
        pBVar9 = FUN_10061720(local_20,&local_70,(byte_conflict *)&local_130);
        in_stack_fffff9d0 = (Button *)0x100611a2;
        local_18 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_18,&stack0xfffff9d0);
        if ((byte)in_stack_fffff9d0 == 0x7b) {
          uVar12 = 0xffffffff;
          pcVar16 = &stack0xfffff9d0;
          do {
            pcVar18 = pcVar16;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar18 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar18;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pBVar17 = (Button *)(pcVar18 + -uVar12);
          pBVar19 = &local_130;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pBVar19 = *(undefined4 *)pBVar17;
            pBVar17 = pBVar17 + 4;
            pBVar19 = pBVar19 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pBVar19 = *pBVar17;
            pBVar17 = pBVar17 + 1;
            pBVar19 = pBVar19 + 1;
          }
        }
        else {
          local_19 = '\0';
        }
      }
      pvVar4 = local_20;
      if (pBVar9 != (Button *)0x0) {
        FUN_10060180(*(void **)((int)local_20 + 0xad4),(int *)pBVar9);
        FUN_1005a280(pBVar9,(char)_local_b0);
        vgui::Slider2::setButtonOffset((Slider2 *)pBVar9,*(int *)((int)pvVar4 + 0xad4));
        (**(code **)(*(int *)pBVar9 + 0x20c))();
      }
      if (local_130 == (Button)0x7b) {
        if (*(int *)((int)pvVar4 + 0x210) < 0x50) {
          in_stack_fffff9d0 = (Button *)0x10061453;
          pPVar5 = FUN_10060530(pBVar9,*(int *)((int)pvVar4 + 0xad4));
          *(Panel **)((int)pvVar4 + *(int *)((int)pvVar4 + 0x210) * 4 + 200) = pPVar5;
          *(undefined4 *)((int)pvVar4 + 0xad4) =
               *(undefined4 *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x210) * 4 + 200);
          *(int *)((int)pvVar4 + 0x210) = *(int *)((int)pvVar4 + 0x210) + 1;
        }
        else {
          in_stack_fffff9d0 = (Button *)0x1006143c;
          (*gEngfuncs.Con_Printf)(s_Too_many_menus_in_commandmenu_tx_10096bf4);
        }
      }
      else if (local_2c == (Panel *)0x0) {
        puVar10 = operator_new(0x108);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = &PTR_FUN_1007df38;
          _strncpy((char *)(puVar10 + 1),(char *)&local_130,0x100);
          *(undefined1 *)((int)puVar10 + 0x103) = 0;
          puVar10[0x41] = 0;
        }
        (**(code **)(*(int *)pBVar9 + 0x240))();
        puVar10 = operator_new(0xc);
        if (puVar10 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)((int)pvVar4 + 0xad4);
          *puVar10 = &PTR_LAB_10080440;
          puVar10[1] = uVar3;
          puVar10[2] = pBVar9;
        }
        in_stack_fffff9d0 = (Button *)0x10061503;
        (**(code **)(*(int *)pBVar9 + 0x70))();
      }
      if (local_19 != '\0') {
        pcVar14 = (char *)0x1006151f;
        local_18 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_18,&stack0xfffff9d0);
      }
    }
    *(undefined4 *)((int)local_20 + 0xad4) = *(undefined4 *)(*(int *)((int)local_20 + 0xad4) + 0xbc)
    ;
    param_1 = local_20;
    pbVar6 = local_18;
  } while( true );
}

/* 100615a0  FUN_100615a0  (382 bytes)
 * Panel * FUN_100615a0(undefined4 param_1, int param_2)
 * called by: FUN_10061720
 */
Panel * __thiscall FUN_100615a0(void *this,undefined4 param_1,int param_2)

{
  Panel *this_00;
  Button *pBVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  Button BVar10;
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077eae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = FUN_10060530(param_1,param_2);
  ppuVar6 = &PTR_s__Scout_100969e0;
  *(Panel **)((int)this + *(int *)((int)this + 0x210) * 4 + 200) = this_00;
  *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 1;
  do {
    pBVar1 = operator_new(300);
    local_4 = 0;
    if (pBVar1 == (Button *)0x0) {
      pBVar1 = (Button *)0x0;
    }
    else {
      lVar7 = __ftol();
      iVar2 = (int)lVar7;
      BVar10 = (Button)0x0;
      iVar9 = iVar2;
      lVar7 = __ftol();
      iVar3 = (int)lVar7;
      iVar8 = 0;
      pcVar4 = FUN_100349a0(*ppuVar6);
      pBVar1 = FUN_1005a0b0(pBVar1,pcVar4,iVar8,iVar2,iVar3,iVar9,BVar10);
    }
    local_4 = 0xffffffff;
    FUN_1006ac7a(local_10c,(byte_conflict *)s__s__d_10096cfc);
    puVar5 = operator_new(0x108);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1007df38;
      _strncpy((char *)(puVar5 + 1),local_10c,0x100);
      *(undefined1 *)((int)puVar5 + 0x103) = 0;
      puVar5[0x41] = 0;
    }
    (**(code **)(*(int *)pBVar1 + 0x240))(puVar5);
    FUN_10060180(this_00,(int *)pBVar1);
    ppuVar6 = ppuVar6 + 1;
  } while ((int)ppuVar6 < 0x10096a01);
  ExceptionList = pvStack_c;
  return this_00;
}

/* 10061720  FUN_10061720  (7791 bytes)
 * Button * FUN_10061720(char * param_1, byte.conflict * param_2)
 * called by: FUN_10060c70
 */
Button * __thiscall FUN_10061720(void *this,char *param_1,byte_conflict *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  Button *pBVar5;
  Panel *pPVar6;
  Button *pBVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  Button BVar17;
  Button *local_218;
  char local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10078072;
  local_c = ExceptionList;
  pcVar11 = s__CHANGETEAM_10096f70;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_10061782:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_10061787;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_10061782;
    pbVar3 = pbVar3 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10061787:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(300);
    local_4 = 0;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      BVar17 = (Button)0x0;
      lVar14 = __ftol();
      iVar4 = (int)lVar14;
      lVar14 = __ftol();
      iVar10 = (int)lVar14;
      lVar14 = __ftol();
      pBVar5 = FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,iVar10,iVar4,BVar17);
    }
    local_4 = 0xffffffff;
    pPVar6 = FUN_10060530(pBVar5,*(int *)((int)this + 0xad4));
    *(Panel **)((int)this + *(int *)((int)this + 0x210) * 4 + 200) = pPVar6;
    *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 1;
    puVar9 = (undefined4 *)((int)this + 0x840);
    iVar4 = 1;
    do {
      FUN_1006ac7a(local_20c,(byte_conflict *)s_jointeam__d_10096f64);
      pBVar7 = operator_new(0x130);
      local_4 = 1;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        lVar14 = __ftol();
        lVar15 = __ftol();
        FUN_1005a0b0(pBVar7,s_teamname_10096f58,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
        *(undefined ***)pBVar7 = &PTR_setPos_10081704;
        *(int *)(pBVar7 + 300) = iVar4;
      }
      local_4 = 0xffffffff;
      *puVar9 = pBVar7;
      puVar8 = operator_new(0x108);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = &PTR_FUN_1007df38;
        _strncpy((char *)(puVar8 + 1),local_20c,0x100);
        *(undefined1 *)((int)puVar8 + 0x103) = 0;
        puVar8[0x41] = 0;
        *puVar8 = &PTR_FUN_10081700;
      }
      (**(code **)(*(int *)*puVar9 + 0x240))(puVar8);
      FUN_10060180(pPVar6,(int *)*puVar9);
      puVar9 = puVar9 + 1;
      bVar13 = iVar4 < 4;
      iVar4 = iVar4 + 1;
    } while (bVar13);
    pBVar7 = operator_new(0x130);
    local_4 = 2;
    if (pBVar7 == (Button *)0x0) {
      pBVar7 = (Button *)0x0;
    }
    else {
      lVar14 = __ftol();
      lVar15 = __ftol();
      pcVar11 = FUN_100349a0(s_Auto_assign_10096f4c);
      FUN_1005a0b0(pBVar7,pcVar11,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
      *(undefined ***)pBVar7 = &PTR_setPos_10081704;
      *(undefined4 *)(pBVar7 + 300) = 5;
    }
    local_4 = 0xffffffff;
    *(Button **)((int)this + 0x850) = pBVar7;
    puVar9 = operator_new(0x108);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = &PTR_FUN_1007df38;
      _strncpy((char *)(puVar9 + 1),s_jointeam_5_10096f40,0x100);
      *(undefined1 *)((int)puVar9 + 0x103) = 0;
      puVar9[0x41] = 0;
    }
    (**(code **)(**(int **)((int)this + 0x850) + 0x240))(puVar9);
    FUN_10060180(pPVar6,*(int **)((int)this + 0x850));
    ExceptionList = local_c;
    return pBVar5;
  }
  pcVar11 = s__CHANGECLASS_10096f30;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_10061a7c:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_10061a81;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_10061a7c;
    pbVar3 = pbVar3 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10061a81:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(0x130);
    local_4 = 3;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      lVar14 = __ftol();
      lVar15 = __ftol();
      FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
      *(undefined ***)pBVar5 = &PTR_setPos_1007dcc8;
      *(undefined4 *)(pBVar5 + 300) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    pPVar6 = FUN_10060530(pBVar5,*(int *)((int)this + 0xad4));
    iVar4 = 1;
    *(Panel **)((int)this + *(int *)((int)this + 0x210) * 4 + 200) = pPVar6;
    iVar10 = 0;
    *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 1;
    do {
      FUN_100348d0(*(char **)((int)&PTR_s__Scout_100969e0 + iVar10),local_20c,0x100);
      pBVar7 = operator_new(0x130);
      local_4 = 4;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        lVar14 = __ftol();
        lVar15 = __ftol();
        FUN_1005a0b0(pBVar7,local_20c,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
        *(undefined ***)pBVar7 = &PTR_setPos_1007dcc8;
        *(int *)(pBVar7 + 300) = iVar4;
      }
      local_4 = 0xffffffff;
      FUN_1006ac7a(local_20c,&DAT_10093568);
      puVar9 = operator_new(0x108);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = &PTR_FUN_1007df38;
        _strncpy((char *)(puVar9 + 1),local_20c,0x100);
        *(undefined1 *)((int)puVar9 + 0x103) = 0;
        puVar9[0x41] = 0;
        *puVar9 = &PTR_FUN_1007df34;
      }
      (**(code **)(*(int *)pBVar7 + 0x240))(puVar9);
      FUN_10060180(pPVar6,(int *)pBVar7);
      iVar10 = iVar10 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar10 < 0x25);
    ExceptionList = local_c;
    return pBVar5;
  }
  pcVar11 = s__MAPBRIEFING_10096f20;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_10061c94:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_10061c99;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_10061c94;
    pbVar3 = pbVar3 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10061c99:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(300);
    local_4 = 5;
    if (pBVar5 == (Button *)0x0) {
      local_218 = (Button *)0x0;
    }
    else {
      BVar17 = (Button)0x0;
      lVar14 = __ftol();
      iVar4 = (int)lVar14;
      lVar14 = __ftol();
      iVar10 = (int)lVar14;
      lVar14 = __ftol();
      local_218 = FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,iVar10,iVar4,BVar17);
    }
    local_4 = 0xffffffff;
    puVar9 = operator_new(8);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = &PTR_FUN_1007da94;
      puVar9[1] = 4;
    }
    (**(code **)(*(int *)local_218 + 0x240))(puVar9);
    puVar9 = operator_new(0xc);
    if (puVar9 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)((int)this + 0xad4);
      *puVar9 = &PTR_LAB_10080440;
      puVar9[1] = uVar2;
      puVar9[2] = local_218;
      goto LAB_10063568;
    }
  }
  else {
    pcVar11 = s__CLASSDESC_10096f14;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar13 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_10061dbb:
        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_10061dc0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar13 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_10061dbb;
      pbVar3 = pbVar3 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10061dc0:
    if (iVar4 == 0) {
      ExceptionList = &local_c;
      local_218 = operator_new(0x130);
      local_4 = 6;
      if (local_218 == (Button *)0x0) {
        local_218 = (Button *)0x0;
      }
      else {
        lVar14 = __ftol();
        lVar15 = __ftol();
        lVar16 = __ftol();
        FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0);
        *(undefined ***)local_218 = &PTR_setPos_1007dcc8;
        *(undefined4 *)(local_218 + 300) = 0;
      }
      local_4 = 0xffffffff;
      puVar9 = operator_new(8);
      if (puVar9 == (undefined4 *)0x0) {
LAB_10061e92:
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = &PTR_FUN_1007da94;
        puVar9[1] = 6;
      }
    }
    else {
      pcVar11 = s__SERVERINFO_10096f08;
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar13 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_10061ef9:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_10061efe;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar13 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_10061ef9;
        pbVar3 = pbVar3 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10061efe:
      if (iVar4 != 0) {
        pbVar12 = &DAT_10096f00;
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar13 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_10062007:
            iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_1006200c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar13 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_10062007;
          pbVar3 = pbVar3 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_1006200c:
        if (iVar4 == 0) {
          ExceptionList = &local_c;
          pBVar5 = operator_new(0x134);
          local_4 = 8;
          if (pBVar5 == (Button *)0x0) {
            ExceptionList = local_c;
            return (Button *)0x0;
          }
          lVar14 = __ftol();
          BVar17 = (Button)0x0;
          iVar4 = (int)lVar14;
          lVar15 = __ftol();
          FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,(int)lVar15,iVar4,BVar17);
          *(undefined ***)pBVar5 = &PTR_setPos_10081498;
          *(undefined4 *)(pBVar5 + 300) = 0;
          ExceptionList = local_c;
          return pBVar5;
        }
        pbVar12 = &DAT_10096ef8;
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar13 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_100620cd:
            iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_100620d2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar13 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_100620cd;
          pbVar3 = pbVar3 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_100620d2:
        if (iVar4 == 0) {
          ExceptionList = &local_c;
          local_218 = operator_new(0x130);
          local_4 = 9;
          if (local_218 == (Button *)0x0) {
LAB_10062154:
            local_218 = (Button *)0x0;
          }
          else {
            lVar14 = __ftol();
            lVar15 = __ftol();
            FUN_1005a0b0(local_218,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
            *(undefined ***)local_218 = &PTR_setPos_10081230;
            *(undefined4 *)(local_218 + 300) = 0;
          }
LAB_10062156:
          local_4 = 0xffffffff;
          puVar9 = operator_new(0x108);
          if (puVar9 == (undefined4 *)0x0) goto LAB_10063533;
          *puVar9 = &PTR_FUN_1007df38;
          pcVar11 = s_feign_10096ef0;
LAB_10063413:
          _strncpy((char *)(puVar9 + 1),pcVar11,0x100);
          *(undefined1 *)((int)puVar9 + 0x103) = 0;
          puVar9[0x41] = 0;
        }
        else {
          pcVar11 = s__FEIGNSILENT_10096ee0;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_100621be:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_100621c3;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_100621be;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_100621c3:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_218 = operator_new(0x130);
            local_4 = 10;
            if (local_218 == (Button *)0x0) {
              local_218 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              FUN_1005a0b0(local_218,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)local_218 = &PTR_setPos_10081230;
              *(undefined4 *)(local_218 + 300) = 0;
            }
            local_4 = 0xffffffff;
            puVar9 = operator_new(0x108);
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = &PTR_FUN_1007df38;
              pcVar11 = s_sfeign_10096ed8;
              goto LAB_10063413;
            }
            goto LAB_10063533;
          }
          pcVar11 = s__FEIGNSTOP_10096ecc;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_100622af:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_100622b4;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_100622af;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_100622b4:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_218 = operator_new(0x130);
            local_4 = 0xb;
            if (local_218 == (Button *)0x0) goto LAB_10062154;
            lVar14 = __ftol();
            lVar15 = __ftol();
            FUN_1005a0b0(local_218,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
            *(undefined ***)local_218 = &PTR_setPos_10081230;
            *(undefined4 *)(local_218 + 300) = 1;
            goto LAB_10062156;
          }
          pcVar11 = s__DISGUISEENEMY_10096ebc;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_1006236a:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_1006236f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_1006236a;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1006236f:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xc;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10081498;
              *(undefined4 *)(pBVar5 + 300) = 2;
            }
LAB_10062403:
            local_4 = 0xffffffff;
            FUN_100615a0(this,pBVar5,*(int *)((int)this + 0xad4));
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar11 = s__DISGUISEFRIENDLY_10096e98;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_10062446:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_1006244b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_10062446;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1006244b:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xd;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10081498;
              *(undefined4 *)(pBVar5 + 300) = 3;
            }
            goto LAB_10062403;
          }
          pcVar11 = s__DISGUISE_10096e78;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_10062515:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_1006251a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_10062515;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1006251a:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xe;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10081498;
              *(undefined4 *)(pBVar5 + 300) = 0xc;
            }
            local_4 = 0xffffffff;
            pPVar6 = FUN_10060530(pBVar5,*(int *)((int)this + 0xad4));
            iVar4 = 1;
            puVar9 = (undefined4 *)((int)this + 0x85c);
            *(Panel **)((int)this + *(int *)((int)this + 0x210) * 4 + 200) = pPVar6;
            *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 1;
            do {
              pBVar7 = operator_new(0x134);
              local_4 = 0xf;
              if (pBVar7 == (Button *)0x0) {
                pBVar7 = (Button *)0x0;
              }
              else {
                lVar14 = __ftol();
                lVar15 = __ftol();
                FUN_1005a0b0(pBVar7,s_Disguise_10096e6c,0,(int)lVar14,(int)lVar15,(int)lVar14,
                             (Button)0x0);
                *(undefined ***)pBVar7 = &PTR_setPos_10081498;
                *(uint *)(pBVar7 + 300) = (uint)((3 < iVar4) - 1U & 4 | 8);
              }
              local_4 = 0xffffffff;
              *puVar9 = pBVar7;
              FUN_10060180(pPVar6,(int *)pBVar7);
              FUN_1006ac7a(local_10c,(byte_conflict *)s_disguise__d_10096e60);
              FUN_100615a0(this,*puVar9,(int)pPVar6);
              iVar4 = iVar4 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar4 < 5);
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar11 = s__DETPACKSTART_10096e50;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_100626f3:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_100626f8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_100626f3;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_100626f8:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x130);
            local_4 = 0x10;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_1005a0b0(pBVar5,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10080fc8;
              *(undefined4 *)(pBVar5 + 300) = 2;
            }
            local_4 = 0xffffffff;
            pPVar6 = FUN_10060530(pBVar5,*(int *)((int)this + 0xad4));
            *(Panel **)((int)this + *(int *)((int)this + 0x210) * 4 + 200) = pPVar6;
            *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + 1;
            pBVar7 = operator_new(300);
            local_4 = 0x11;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              BVar17 = (Button)0x0;
              iVar4 = (int)lVar14;
              lVar15 = __ftol();
              pBVar7 = FUN_1005a0b0(pBVar7,(char *)((int)this + 0x9fc),0,(int)lVar14,(int)lVar15,
                                    iVar4,BVar17);
            }
            local_4 = 0xffffffff;
            puVar9 = operator_new(0x108);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = &PTR_FUN_1007df38;
              _strncpy((char *)(puVar9 + 1),s_detstart_5_10096e44,0x100);
              *(undefined1 *)((int)puVar9 + 0x103) = 0;
              puVar9[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar9);
            FUN_10060180(pPVar6,(int *)pBVar7);
            pBVar7 = operator_new(300);
            puStack_8 = (undefined1 *)0x12;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              BVar17 = (Button)0x0;
              iVar4 = (int)lVar14;
              lVar15 = __ftol();
              pBVar7 = FUN_1005a0b0(pBVar7,(char *)((int)this + 0xa1c),0,(int)lVar14,(int)lVar15,
                                    iVar4,BVar17);
            }
            puStack_8 = (undefined1 *)0xffffffff;
            puVar9 = operator_new(0x108);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = &PTR_FUN_1007df38;
              _strncpy((char *)(puVar9 + 1),s_detstart_20_10096e38,0x100);
              *(undefined1 *)((int)puVar9 + 0x103) = 0;
              puVar9[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar9);
            FUN_10060180(pPVar6,(int *)pBVar7);
            pBVar7 = operator_new(300);
            local_c = (void *)0x13;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              BVar17 = (Button)0x0;
              iVar4 = (int)lVar14;
              lVar15 = __ftol();
              pBVar7 = FUN_1005a0b0(pBVar7,(char *)((int)this + 0xa3c),0,(int)lVar14,(int)lVar15,
                                    iVar4,BVar17);
            }
            local_c = (void *)0xffffffff;
            puVar9 = operator_new(0x108);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = &PTR_FUN_1007df38;
              _strncpy((char *)(puVar9 + 1),s_detstart_50_10096e2c,0x100);
              *(undefined1 *)((int)puVar9 + 0x103) = 0;
              puVar9[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar9);
            FUN_10060180(pPVar6,(int *)pBVar7);
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar11 = s__DETPACKSTOP_10096e1c;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar11;
            if (bVar1 != *pcVar11) {
LAB_10062a60:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_10062a65;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar11[1];
            if (bVar1 != pcVar11[1]) goto LAB_10062a60;
            pbVar3 = pbVar3 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_10062a65:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_218 = operator_new(0x130);
            local_4 = 0x14;
            if (local_218 == (Button *)0x0) {
              local_218 = (Button *)0x0;
            }
            else {
              lVar14 = __ftol();
              lVar15 = __ftol();
              FUN_1005a0b0(local_218,param_1,0,(int)lVar14,(int)lVar15,(int)lVar14,(Button)0x0);
              *(undefined ***)local_218 = &PTR_setPos_10080fc8;
              *(undefined4 *)(local_218 + 300) = 1;
            }
            local_4 = 0xffffffff;
            puVar9 = operator_new(0x108);
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = &PTR_FUN_1007df38;
              pcVar11 = s_detstop_10096e14;
              goto LAB_10063413;
            }
          }
          else {
            pcVar11 = s__BUILD_10096e0c;
            pbVar3 = param_2;
            do {
              bVar1 = *pbVar3;
              bVar13 = bVar1 < (byte)*pcVar11;
              if (bVar1 != *pcVar11) {
LAB_10062b51:
                iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_10062b56;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar13 = bVar1 < (byte)pcVar11[1];
              if (bVar1 != pcVar11[1]) goto LAB_10062b51;
              pbVar3 = pbVar3 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_10062b56:
            if (iVar4 == 0) {
              ExceptionList = &local_c;
              pBVar5 = operator_new(0x134);
              local_4 = 0x15;
              if (pBVar5 == (Button *)0x0) {
                ExceptionList = local_c;
                return (Button *)0x0;
              }
              BVar17 = (Button)0x0;
              lVar14 = __ftol();
              iVar4 = (int)lVar14;
              lVar14 = __ftol();
              iVar10 = (int)lVar14;
              lVar14 = __ftol();
              FUN_1005a0b0(pBVar5,param_1,0,(int)lVar14,iVar10,iVar4,BVar17);
              *(undefined ***)pBVar5 = &PTR_setPos_10080d60;
              *(undefined4 *)(pBVar5 + 300) = 4;
              *(undefined4 *)(pBVar5 + 0x130) = 0;
              ExceptionList = local_c;
              return pBVar5;
            }
            pcVar11 = s__BUILDSENTRY_10096dfc;
            pbVar3 = param_2;
            do {
              bVar1 = *pbVar3;
              bVar13 = bVar1 < (byte)*pcVar11;
              if (bVar1 != *pcVar11) {
LAB_10062c21:
                iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_10062c26;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar13 = bVar1 < (byte)pcVar11[1];
              if (bVar1 != pcVar11[1]) goto LAB_10062c21;
              pbVar3 = pbVar3 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_10062c26:
            if (iVar4 == 0) {
              ExceptionList = &local_c;
              local_218 = operator_new(0x134);
              local_4 = 0x16;
              if (local_218 == (Button *)0x0) {
                local_218 = (Button *)0x0;
              }
              else {
                lVar14 = __ftol();
                lVar15 = __ftol();
                lVar16 = __ftol();
                FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0);
                *(undefined ***)local_218 = &PTR_setPos_10080d60;
                *(undefined4 *)(local_218 + 300) = 8;
                *(undefined4 *)(local_218 + 0x130) = 1;
              }
              local_4 = 0xffffffff;
              puVar9 = operator_new(0x108);
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = &PTR_FUN_1007df38;
                pcVar11 = s_build_2_10096df4;
                goto LAB_10063413;
              }
            }
            else {
              pcVar11 = s__BUILDDISPENSER_10096de4;
              pbVar3 = param_2;
              do {
                bVar1 = *pbVar3;
                bVar13 = bVar1 < (byte)*pcVar11;
                if (bVar1 != *pcVar11) {
LAB_10062d27:
                  iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_10062d2c;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar13 = bVar1 < (byte)pcVar11[1];
                if (bVar1 != pcVar11[1]) goto LAB_10062d27;
                pbVar3 = pbVar3 + 2;
                pcVar11 = pcVar11 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_10062d2c:
              if (iVar4 == 0) {
                ExceptionList = &local_c;
                local_218 = operator_new(0x134);
                local_4 = 0x17;
                if (local_218 == (Button *)0x0) {
                  local_218 = (Button *)0x0;
                }
                else {
                  lVar14 = __ftol();
                  lVar15 = __ftol();
                  lVar16 = __ftol();
                  FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0);
                  *(undefined ***)local_218 = &PTR_setPos_10080d60;
                  *(undefined4 *)(local_218 + 300) = 8;
                  *(undefined4 *)(local_218 + 0x130) = 0;
                }
                local_4 = 0xffffffff;
                puVar9 = operator_new(0x108);
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = &PTR_FUN_1007df38;
                  pcVar11 = s_build_1_10096ddc;
                  goto LAB_10063413;
                }
              }
              else {
                pcVar11 = s__ROTATESENTRY180_10096dc8;
                pbVar3 = param_2;
                do {
                  bVar1 = *pbVar3;
                  bVar13 = bVar1 < (byte)*pcVar11;
                  if (bVar1 != *pcVar11) {
LAB_10062e2d:
                    iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_10062e32;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar13 = bVar1 < (byte)pcVar11[1];
                  if (bVar1 != pcVar11[1]) goto LAB_10062e2d;
                  pbVar3 = pbVar3 + 2;
                  pcVar11 = pcVar11 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_10062e32:
                if (iVar4 == 0) {
                  ExceptionList = &local_c;
                  local_218 = operator_new(0x134);
                  local_4 = 0x18;
                  if (local_218 == (Button *)0x0) {
                    local_218 = (Button *)0x0;
                  }
                  else {
                    lVar14 = __ftol();
                    lVar15 = __ftol();
                    lVar16 = __ftol();
                    FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0
                                );
                    *(undefined ***)local_218 = &PTR_setPos_10080d60;
                    *(undefined4 *)(local_218 + 300) = 1;
                    *(undefined4 *)(local_218 + 0x130) = 1;
                  }
                  local_4 = 0xffffffff;
                  puVar9 = operator_new(0x108);
                  if (puVar9 != (undefined4 *)0x0) {
                    *puVar9 = &PTR_FUN_1007df38;
                    pcVar11 = s_rotatesentry180_10096db8;
                    goto LAB_10063413;
                  }
                }
                else {
                  pcVar11 = s__ROTATESENTRY_10096da8;
                  pbVar3 = param_2;
                  do {
                    bVar1 = *pbVar3;
                    bVar13 = bVar1 < (byte)*pcVar11;
                    if (bVar1 != *pcVar11) {
LAB_10062f30:
                      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_10062f35;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar13 = bVar1 < (byte)pcVar11[1];
                    if (bVar1 != pcVar11[1]) goto LAB_10062f30;
                    pbVar3 = pbVar3 + 2;
                    pcVar11 = pcVar11 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_10062f35:
                  if (iVar4 == 0) {
                    ExceptionList = &local_c;
                    local_218 = operator_new(0x134);
                    local_4 = 0x19;
                    if (local_218 == (Button *)0x0) {
                      local_218 = (Button *)0x0;
                    }
                    else {
                      lVar14 = __ftol();
                      lVar15 = __ftol();
                      lVar16 = __ftol();
                      FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                   (Button)0x0);
                      *(undefined ***)local_218 = &PTR_setPos_10080d60;
                      *(undefined4 *)(local_218 + 300) = 1;
                      *(undefined4 *)(local_218 + 0x130) = 1;
                    }
                    local_4 = 0xffffffff;
                    puVar9 = operator_new(0x108);
                    if (puVar9 != (undefined4 *)0x0) {
                      *puVar9 = &PTR_FUN_1007df38;
                      pcVar11 = s_rotatesentry_10096d98;
                      goto LAB_10063413;
                    }
                  }
                  else {
                    pcVar11 = s__DISMANTLEDISPENSER_10096d84;
                    pbVar3 = param_2;
                    do {
                      bVar1 = *pbVar3;
                      bVar13 = bVar1 < (byte)*pcVar11;
                      if (bVar1 != *pcVar11) {
LAB_10063033:
                        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                        goto LAB_10063038;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar3[1];
                      bVar13 = bVar1 < (byte)pcVar11[1];
                      if (bVar1 != pcVar11[1]) goto LAB_10063033;
                      pbVar3 = pbVar3 + 2;
                      pcVar11 = pcVar11 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_10063038:
                    if (iVar4 == 0) {
                      ExceptionList = &local_c;
                      local_218 = operator_new(0x134);
                      local_4 = 0x1a;
                      if (local_218 == (Button *)0x0) {
                        local_218 = (Button *)0x0;
                      }
                      else {
                        lVar14 = __ftol();
                        lVar15 = __ftol();
                        lVar16 = __ftol();
                        FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                     (Button)0x0);
                        *(undefined ***)local_218 = &PTR_setPos_10080d60;
                        *(undefined4 *)(local_218 + 300) = 1;
                        *(undefined4 *)(local_218 + 0x130) = 0;
                      }
                      local_4 = 0xffffffff;
                      puVar9 = operator_new(0x108);
                      if (puVar9 != (undefined4 *)0x0) {
                        *puVar9 = &PTR_FUN_1007df38;
                        pcVar11 = s_dismantle_1_10096d78;
                        goto LAB_10063413;
                      }
                    }
                    else {
                      pcVar11 = s__DISMANTLESENTRY_10096d64;
                      pbVar3 = param_2;
                      do {
                        bVar1 = *pbVar3;
                        bVar13 = bVar1 < (byte)*pcVar11;
                        if (bVar1 != *pcVar11) {
LAB_10063139:
                          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                          goto LAB_1006313e;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar3[1];
                        bVar13 = bVar1 < (byte)pcVar11[1];
                        if (bVar1 != pcVar11[1]) goto LAB_10063139;
                        pbVar3 = pbVar3 + 2;
                        pcVar11 = pcVar11 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_1006313e:
                      if (iVar4 == 0) {
                        ExceptionList = &local_c;
                        local_218 = operator_new(0x134);
                        local_4 = 0x1b;
                        if (local_218 == (Button *)0x0) {
                          local_218 = (Button *)0x0;
                        }
                        else {
                          lVar14 = __ftol();
                          lVar15 = __ftol();
                          lVar16 = __ftol();
                          FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                       (Button)0x0);
                          *(undefined ***)local_218 = &PTR_setPos_10080d60;
                          *(undefined4 *)(local_218 + 300) = 1;
                          *(undefined4 *)(local_218 + 0x130) = 1;
                        }
                        local_4 = 0xffffffff;
                        puVar9 = operator_new(0x108);
                        if (puVar9 != (undefined4 *)0x0) {
                          *puVar9 = &PTR_FUN_1007df38;
                          pcVar11 = s_dismantle_2_10096d58;
                          goto LAB_10063413;
                        }
                      }
                      else {
                        pcVar11 = s__DETONATEDISPENSER_10096d44;
                        pbVar3 = param_2;
                        do {
                          bVar1 = *pbVar3;
                          bVar13 = bVar1 < (byte)*pcVar11;
                          if (bVar1 != *pcVar11) {
LAB_1006323c:
                            iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                            goto LAB_10063241;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar3[1];
                          bVar13 = bVar1 < (byte)pcVar11[1];
                          if (bVar1 != pcVar11[1]) goto LAB_1006323c;
                          pbVar3 = pbVar3 + 2;
                          pcVar11 = pcVar11 + 2;
                        } while (bVar1 != 0);
                        iVar4 = 0;
LAB_10063241:
                        if (iVar4 == 0) {
                          ExceptionList = &local_c;
                          local_218 = operator_new(0x134);
                          local_4 = 0x1c;
                          if (local_218 == (Button *)0x0) {
                            local_218 = (Button *)0x0;
                          }
                          else {
                            lVar14 = __ftol();
                            lVar15 = __ftol();
                            lVar16 = __ftol();
                            FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                         (Button)0x0);
                            *(undefined ***)local_218 = &PTR_setPos_10080d60;
                            *(undefined4 *)(local_218 + 300) = 1;
                            *(undefined4 *)(local_218 + 0x130) = 0;
                          }
                          local_4 = 0xffffffff;
                          puVar9 = operator_new(0x108);
                          if (puVar9 != (undefined4 *)0x0) {
                            *puVar9 = &PTR_FUN_1007df38;
                            pcVar11 = s_detdispenser_10096d34;
                            goto LAB_10063413;
                          }
                        }
                        else {
                          pcVar11 = s__DETONATESENTRY_10096d24;
                          pbVar3 = param_2;
                          do {
                            bVar1 = *pbVar3;
                            bVar13 = bVar1 < (byte)*pcVar11;
                            if (bVar1 != *pcVar11) {
LAB_10063342:
                              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                              goto LAB_10063347;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar3[1];
                            bVar13 = bVar1 < (byte)pcVar11[1];
                            if (bVar1 != pcVar11[1]) goto LAB_10063342;
                            pbVar3 = pbVar3 + 2;
                            pcVar11 = pcVar11 + 2;
                          } while (bVar1 != 0);
                          iVar4 = 0;
LAB_10063347:
                          if (iVar4 == 0) {
                            ExceptionList = &local_c;
                            local_218 = operator_new(0x134);
                            local_4 = 0x1d;
                            if (local_218 == (Button *)0x0) {
                              local_218 = (Button *)0x0;
                            }
                            else {
                              lVar14 = __ftol();
                              lVar15 = __ftol();
                              lVar16 = __ftol();
                              FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                           (Button)0x0);
                              *(undefined ***)local_218 = &PTR_setPos_10080d60;
                              *(undefined4 *)(local_218 + 300) = 1;
                              *(undefined4 *)(local_218 + 0x130) = 1;
                            }
                            local_4 = 0xffffffff;
                            puVar9 = operator_new(0x108);
                            if (puVar9 != (undefined4 *)0x0) {
                              *puVar9 = &PTR_FUN_1007df38;
                              pcVar11 = s_detsentry_10096d18;
                              goto LAB_10063413;
                            }
                          }
                          else {
                            pcVar11 = s__BUILDSTOP_10096d0c;
                            do {
                              bVar1 = *param_2;
                              bVar13 = bVar1 < (byte)*pcVar11;
                              if (bVar1 != *pcVar11) {
LAB_10063462:
                                iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                goto LAB_10063467;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = param_2[1];
                              bVar13 = bVar1 < (byte)pcVar11[1];
                              if (bVar1 != pcVar11[1]) goto LAB_10063462;
                              param_2 = param_2 + 2;
                              pcVar11 = pcVar11 + 2;
                            } while (bVar1 != 0);
                            iVar4 = 0;
LAB_10063467:
                            if (iVar4 != 0) {
                              return (Button *)0x0;
                            }
                            ExceptionList = &local_c;
                            local_218 = operator_new(0x134);
                            local_4 = 0x1e;
                            if (local_218 == (Button *)0x0) {
                              local_218 = (Button *)0x0;
                            }
                            else {
                              lVar14 = __ftol();
                              lVar15 = __ftol();
                              lVar16 = __ftol();
                              FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,
                                           (Button)0x0);
                              *(undefined ***)local_218 = &PTR_setPos_10080d60;
                              *(undefined4 *)(local_218 + 300) = 2;
                              *(undefined4 *)(local_218 + 0x130) = 0;
                            }
                            local_4 = 0xffffffff;
                            puVar9 = operator_new(0x108);
                            if (puVar9 != (undefined4 *)0x0) {
                              *puVar9 = &PTR_FUN_1007df38;
                              pcVar11 = s_build_10096d04;
                              goto LAB_10063413;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_10063533:
          puVar9 = (undefined4 *)0x0;
        }
        (**(code **)(*(int *)local_218 + 0x240))(puVar9);
        puVar9 = operator_new(0xc);
        if (puVar9 != (undefined4 *)0x0) {
          iVar4 = *(int *)(local_218 + 0xad4);
          *puVar9 = &PTR_LAB_10080440;
          puVar9[1] = iVar4;
          puVar9[2] = local_218;
          goto LAB_10063568;
        }
        goto LAB_10063566;
      }
      ExceptionList = &local_c;
      local_218 = operator_new(0x130);
      local_4 = 7;
      if (local_218 == (Button *)0x0) {
        local_218 = (Button *)0x0;
      }
      else {
        lVar14 = __ftol();
        lVar15 = __ftol();
        lVar16 = __ftol();
        FUN_1005a0b0(local_218,param_1,0,(int)lVar16,(int)lVar15,(int)lVar14,(Button)0x0);
        *(undefined ***)local_218 = &PTR_setPos_1007dcc8;
        *(undefined4 *)(local_218 + 300) = 0;
      }
      local_4 = 0xffffffff;
      puVar9 = operator_new(8);
      if (puVar9 == (undefined4 *)0x0) goto LAB_10061e92;
      *puVar9 = &PTR_FUN_1007da94;
      puVar9[1] = 5;
    }
    (**(code **)(*(int *)local_218 + 0x240))(puVar9);
    puVar9 = operator_new(0xc);
    if (puVar9 != (undefined4 *)0x0) {
      iVar4 = *(int *)(local_218 + 0xad4);
      *puVar9 = &PTR_LAB_10080440;
      puVar9[1] = iVar4;
      puVar9[2] = local_218;
      goto LAB_10063568;
    }
  }
LAB_10063566:
  puVar9 = (undefined4 *)0x0;
LAB_10063568:
  (**(code **)(*(int *)local_218 + 0x70))(puVar9);
  ExceptionList = local_c;
  return local_218;
}

/* 10063590  FUN_10063590  (70 bytes)
 * undefined FUN_10063590(int param_1)
 */
void __fastcall FUN_10063590(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int **)(param_1 + 0xad0) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xad0) + 0x28))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(0);
      FUN_10064790(param_1);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(1);
    FUN_10064790(param_1);
  }
  return;
}

/* 100635e0  FUN_100635e0  (177 bytes)
 * undefined FUN_100635e0(void * param_1)
 * called by: FUN_100637a0
 */
void __fastcall FUN_100635e0(void *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)((int)param_1 + 0xc4) != 0) && (DAT_10190a10 != 0)) {
    if (*(int *)((int)param_1 + 0xad4) != 0) {
      FUN_100636d0(param_1);
      return;
    }
    if (DAT_100d5b20 == 0) {
      FUN_10063840((int)param_1);
      FUN_100641e0((int)param_1);
      FUN_100637f0(param_1,*(int **)((int)param_1 + 200));
      *(undefined4 *)((int)param_1 + 0x208) = DAT_100cf944;
      FUN_10064790((int)param_1);
      iVar4 = 2;
      iVar1 = (*gEngfuncs.Cmd_Argc)();
      if (2 < iVar1) {
        do {
          pcVar2 = (*gEngfuncs.Cmd_Argv)(iVar4 + -1);
          if (pcVar2 != (char *)0x0) {
            uVar3 = FUN_100601f0(*(void **)((int)param_1 + 0xad4),(int)*pcVar2);
            if ((char)uVar3 != '\0') {
              FUN_100636d0(param_1);
            }
          }
          iVar4 = iVar4 + 1;
          iVar1 = (*gEngfuncs.Cmd_Argc)();
        } while (iVar4 < iVar1);
      }
    }
  }
  return;
}

/* 100636a0  FUN_100636a0  (43 bytes)
 * undefined FUN_100636a0(void * param_1)
 */
void __fastcall FUN_100636a0(void *param_1)

{
  if ((*(int *)((int)param_1 + 0xc4) != 0) &&
     (*(float *)((int)param_1 + 0x208) + 0.3 <= DAT_100cf944)) {
    FUN_100636d0(param_1);
    return;
  }
  return;
}

/* 100636d0  FUN_100636d0  (56 bytes)
 * undefined FUN_100636d0(void * param_1)
 * called by: FUN_10021aa0, FUN_10059910, FUN_10059950, FUN_1005ab10, FUN_10060aa0, FUN_100635e0, FUN_100636a0, FUN_10064050, FUN_10064a20, FUN_10064b90
 */
void __fastcall FUN_100636d0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if (*(int *)((int)param_1 + 200) != 0) {
      FUN_10060280(*(int *)((int)param_1 + 200));
    }
    *(undefined4 *)((int)param_1 + 0x208) = 0;
    FUN_100637f0(param_1,(int *)0x0);
    FUN_10064790((int)param_1);
  }
  return;
}

/* 10063710  FUN_10063710  (44 bytes)
 * undefined FUN_10063710(int param_1)
 * called by: FUN_10021aa0
 */
void __fastcall FUN_10063710(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xaa8) != 0) {
    iVar1 = (*gEngfuncs.GetMaxClients)();
    if (1 < iVar1) {
      FUN_1005e630(*(int **)(param_1 + 0xaa8));
      FUN_10064790(param_1);
    }
  }
  return;
}

/* 10063740  FUN_10063740  (18 bytes)
 * uint FUN_10063740(int param_1)
 */
uint __fastcall FUN_10063740(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0xaa8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1006374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xaa8) + 0x28))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* 10063760  FUN_10063760  (50 bytes)
 * undefined FUN_10063760(int param_1)
 * called by: FUN_10021aa0, FUN_10060aa0
 */
void __fastcall FUN_10063760(int param_1)

{
  undefined *puVar1;
  
  if ((DAT_100d5b20 == 0) && (*(int **)(param_1 + 0xaa8) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xaa8) + 0x24))(0);
    puVar1 = FUN_10017570();
    FUN_10018890((int)puVar1);
    FUN_10064790(param_1);
  }
  return;
}

/* 100637a0  FUN_100637a0  (70 bytes)
 * undefined FUN_100637a0(void * param_1)
 * called by: FUN_1001fe90
 */
void __fastcall FUN_100637a0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if ((DAT_10190a10 != 9) && (DAT_10190a10 != 8)) {
      (*gEngfuncs.pfnClientCmd)(s__special_10096f7c);
      return;
    }
    FUN_100635e0(param_1);
    if (*(void **)((int)param_1 + 0xad4) != (void *)0x0) {
      FUN_100601f0(*(void **)((int)param_1 + 0xad4),0x37);
    }
  }
  return;
}

/* 100637f0  FUN_100637f0  (73 bytes)
 * undefined FUN_100637f0(int * param_1)
 * called by: FUN_100601f0, FUN_10060c70, FUN_100635e0, FUN_100636d0, FUN_10064d70
 */
void __thiscall FUN_100637f0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x210)) {
    puVar2 = (undefined4 *)((int)this + 200);
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x210));
  }
  *(int **)((int)this + 0xad4) = param_1;
  if (param_1 != (int *)0x0) {
    FUN_10060500(param_1);
  }
  return;
}

/* 10063840  FUN_10063840  (33 bytes)
 * undefined FUN_10063840(int param_1)
 * called by: FUN_100635e0, FUN_10064da0, FUN_10064ea0, FUN_10064ed0, FUN_10064ff0, FUN_100653a0
 */
void __fastcall FUN_10063840(int param_1)

{
  FUN_10060310(*(void **)(param_1 + 200),0,'\0');
  FUN_10060450(*(void **)(param_1 + 200),(undefined4 *)0x0);
  return;
}

/* 10063870  FUN_10063870  (468 bytes)
 * undefined FUN_10063870(int param_1)
 * called by: FUN_100234d0
 */
void __fastcall FUN_10063870(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  char acStack_104 [4];
  undefined1 auStack_100 [124];
  char acStack_84 [132];
  
  *(undefined4 *)(param_1 + 0x21c) = DAT_10190b18;
  *(undefined4 *)(param_1 + 0x220) = DAT_10190b20;
  *(undefined4 *)(param_1 + 0x224) = DAT_10190b1c;
  lVar9 = __ftol();
  *(int *)(param_1 + 0x228) = (int)lVar9;
  if (*(int *)(param_1 + 0x884) != 0) {
    iVar2 = (*gEngfuncs.IsSpectateOnly)();
    iVar3 = *(int *)(param_1 + 0x21c);
    if (iVar2 == 0) {
      FUN_1006ac7a(auStack_100,(byte_conflict *)s__Spec_TSHelp_d_10096fbc);
    }
    else {
      FUN_1006ac7a(auStack_100,(byte_conflict *)s__Spec_Only_Help_10096fcc);
    }
    if (((iVar3 != 0) && (iVar3 = (*gEngfuncs.IsSpectateOnly)(), iVar3 != 2)) &&
       (*(float *)(DAT_100df50c + 0xc) == 0.0)) {
      (**(code **)(**(int **)(param_1 + 0x884) + 0x24))(1);
      iVar3 = *(int *)(param_1 + 0x220);
      if (((iVar3 < 1) || (iVar2 = (*gEngfuncs.GetMaxClients)(), iVar2 < iVar3)) ||
         (*(int *)(&DAT_1018fbd8 + iVar3 * 0x14) == 0)) {
        FUN_1006ac7a(&stack0xfffffe7c,(byte_conflict *)s__Spec_Mode_d_10096f98);
      }
      else {
        FUN_1006ac7a(&stack0xfffffe7c,(byte_conflict *)s__Spec_Mode_d____s_10096fa8);
      }
      if (*(int *)(param_1 + 0x21c) == 4) {
        FUN_1006ac7a(acStack_84,(byte_conflict *)s__Directed__s_10096f88);
        uVar5 = 0xffffffff;
        pcVar7 = acStack_84;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = &stack0xfffffe7c;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      iVar3 = **(int **)(param_1 + 0x888);
      puVar4 = FUN_100349a0(&stack0xfffffe7c);
      (**(code **)(iVar3 + 0x200))(*(undefined4 *)(param_1 + 0x888),puVar4);
      iVar3 = **(int **)(param_1 + 0x88c);
      puVar4 = FUN_100349a0(acStack_104);
      (**(code **)(iVar3 + 0x200))(*(undefined4 *)(param_1 + 0x88c),puVar4);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x884) + 0x24))(0);
  }
  return;
}

/* 10063a50  FUN_10063a50  (231 bytes)
 * undefined FUN_10063a50(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10063a50(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_EBX;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1007808b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  lVar4 = __ftol();
  iVar2 = (int)lVar4;
  lVar4 = __ftol();
  iVar3 = (int)lVar4;
  if (DAT_100d5908 == 0x200) {
    iVar2 = 0x1e;
    iVar3 = 0x1e;
  }
  else if (DAT_100d5908 == 400) {
    iVar2 = 0;
    iVar3 = 0x14;
  }
  this = operator_new(0x26af0);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_1005ce70(this,iVar2,iVar3,DAT_100d5908 + iVar2 * -2,DAT_100d590c + iVar3 * -2);
  }
  *(Panel **)(param_1 + 0xaa8) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa8) + 0x24))(0);
  ExceptionList = unaff_EBX;
  return;
}

/* 10063b40  FUN_10063b40  (134 bytes)
 * undefined FUN_10063b40(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10063b40(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100780ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xe4);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_1005f220(this,0,0,DAT_100d5908,DAT_100d590c);
  }
  *(Panel **)(param_1 + 0xad0) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xad0) + 0x24))(0);
  ExceptionList = unaff_ESI;
  return;
}

/* 10063bd0  FUN_10063bd0  (47 bytes)
 * undefined FUN_10063bd0(int param_1)
 * called by: FUN_10060c70, FUN_10064200
 */
void __thiscall FUN_10063bd0(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0xa9c) = param_1;
  if (param_1 != 0) {
    iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
    if (iVar1 == 0) {
      (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
    }
  }
  return;
}

/* 10063c00  FUN_10063c00  (1052 bytes)
 * Panel * FUN_10063c00(int param_1)
 * called by: FUN_10064050
 */
Panel * __thiscall FUN_10063c00(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  byte_conflict *pbVar4;
  Panel *pPVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte_conflict *buffer;
  uint *_Source;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  char local_120 [8];
  uint uStack_118;
  char acStack_114 [4];
  char acStack_110 [15];
  undefined1 local_101;
  char local_100 [11];
  undefined1 uStack_f5;
  
  buffer = (byte_conflict *)0x0;
  if (param_1 == 3) {
    pcVar2 = (char *)((int)this + 0xab0);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      uVar6 = 0xffffffff;
      pcVar2 = s_Half_Life_10097140;
      do {
        pcVar9 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar2 = pcVar9 + -uVar6;
      pcVar9 = local_120;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_101 = 0;
      this = (byte_conflict *)((int)this + 0x240);
    }
    else {
      _strncpy(local_120,pcVar2,0x20);
      local_101 = 0;
      this = (byte_conflict *)((int)this + 0x240);
    }
  }
  else if (param_1 == 1) {
    _Source = (uint *)((int)this + 0xa5c);
    if ((_Source == (uint *)0x0) || (*(char *)_Source == '\0')) {
      pcVar2 = (*gEngfuncs.pfnGetLevelName)();
      if (pcVar2 == (char *)0x0) {
        return (Panel *)0x0;
      }
      uVar6 = 0xffffffff;
      pcVar9 = pcVar2;
      do {
        pcVar10 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      puVar3 = (uint *)(pcVar10 + -uVar6);
      puVar12 = &uStack_118;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar12 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
      puVar3 = FUN_1006cc40(&uStack_118,'.');
      *(undefined1 *)puVar3 = 0;
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_10097130;
      do {
        pcVar10 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar9 = acStack_110;
      do {
        pcVar11 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      pcVar9 = pcVar10 + -uVar6;
      pcVar10 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      puVar3 = (uint *)(pcVar9 + -uVar6);
      puVar12 = _Source;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar12 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
      puVar3 = FUN_1006cc40(_Source,'.');
      if (puVar3 != (uint *)0x0) {
        *(undefined1 *)puVar3 = 0;
      }
      puVar3 = FUN_1006cc40(_Source,'/');
      if (puVar3 != (uint *)0x0) {
        uVar6 = 0xffffffff;
        puVar12 = puVar3;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          uVar7 = *puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
        } while ((char)uVar7 != '\0');
        FUN_1006ba20(_Source,(undefined4 *)((int)puVar3 + 1),~uVar6);
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar2 = &DAT_10097138;
      do {
        pcVar9 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar2 = pcVar9 + -uVar6;
      pcVar9 = local_100;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      puVar3 = _Source;
      do {
        puVar12 = puVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        puVar12 = (uint *)((int)puVar3 + 1);
        uVar7 = *puVar3;
        puVar3 = puVar12;
      } while ((char)uVar7 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar2 = local_100;
      do {
        pcVar9 = pcVar2;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      pcVar2 = (char *)((int)puVar12 - uVar6);
      pcVar9 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar2 = &DAT_10097130;
      do {
        pcVar9 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar2 = local_100;
      do {
        pcVar10 = pcVar2;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar10;
      } while (cVar1 != '\0');
      pcVar2 = pcVar9 + -uVar6;
      pcVar9 = pcVar10 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    buffer = (*gEngfuncs.COM_LoadFile)(local_100,5,(int *)0x0);
    if (buffer == (byte_conflict *)0x0) {
switchD_10063e4c_caseD_a:
      return (Panel *)0x0;
    }
    _strncpy(acStack_114,(char *)_Source,0x20);
    uStack_f5 = 0;
    this = buffer;
  }
  else if (param_1 == 2) {
    switch(DAT_10190a10) {
    case 1:
      this = FUN_100349a0(s__Help_scout_10097124);
      pcVar2 = s__Title_scout_10097114;
      break;
    case 2:
      this = FUN_100349a0(s__Help_sniper_10097104);
      pcVar2 = s__Title_sniper_100970f4;
      break;
    case 3:
      this = FUN_100349a0(s__Help_soldier_100970e4);
      pcVar2 = s__Title_soldier_100970d4;
      break;
    case 4:
      this = FUN_100349a0(s__Help_demoman_100970c4);
      pcVar2 = s__Title_demoman_100970b4;
      break;
    case 5:
      this = FUN_100349a0(s__Help_medic_100970a8);
      pcVar2 = s__Title_medic_10097098;
      break;
    case 6:
      this = FUN_100349a0(s__Help_hwguy_1009708c);
      pcVar2 = s__Title_hwguy_1009707c;
      break;
    case 7:
      this = FUN_100349a0(s__Help_pyro_10097070);
      pcVar2 = s__Title_pyro_10097064;
      break;
    case 8:
      this = FUN_100349a0(s__Help_spy_10097058);
      pcVar2 = s__Title_spy_1009704c;
      break;
    case 9:
      this = FUN_100349a0(s__Help_engineer_1009703c);
      pcVar2 = s__Title_engineer_1009702c;
      break;
    default:
      goto switchD_10063e4c_caseD_a;
    case 0xb:
      this = FUN_100349a0(s__Help_civilian_1009701c);
      pcVar2 = s__Title_civilian_1009700c;
    }
    FUN_100348d0(pcVar2,local_120,0x20);
    if (DAT_10190a10 == 0xb) {
      FUN_1006ac7a(local_100,(byte_conflict *)s_classes_long_civilian_txt_10096ff0);
    }
    else {
      FUN_1006ac7a(local_100,(byte_conflict *)s_classes_long__s_txt_10096fdc);
    }
    pbVar4 = (*gEngfuncs.COM_LoadFile)(local_100,5,(int *)0x0);
    if (pbVar4 != (byte_conflict *)0x0) {
      this = pbVar4;
    }
  }
  pPVar5 = FUN_1005bb00(this,acStack_114,(uint)(DAT_10190a10 == 0),0,0,0,DAT_100d5908,DAT_100d590c);
  (**(code **)(*(int *)pPVar5 + 0x40))(uStack_118);
  if (buffer != (byte_conflict *)0x0) {
    (*gEngfuncs.COM_FreeFile)(buffer);
  }
  return pPVar5;
}

/* 10064050  FUN_10064050  (373 bytes)
 * undefined FUN_10064050(int param_1)
 * called by: FUN_10059950, FUN_10064b90, FUN_10064f00, FUN_10064f60
 */
void __thiscall FUN_10064050(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  Panel *pPVar3;
  
  iVar2 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if ((iVar2 == 0) && ((DAT_100d5b20 == 0 || (param_1 == 5)))) {
    for (iVar2 = *(int *)((int)this + 0xa9c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc0)) {
      if (*(int *)(iVar2 + 0xc4) == param_1) {
        return;
      }
    }
    switch(param_1) {
    case 2:
      pPVar3 = (Panel *)FUN_10064280((int)this);
      break;
    case 3:
      pPVar3 = (Panel *)FUN_10064350((int)this);
      break;
    case 4:
      pPVar3 = FUN_10063c00(this,1);
      break;
    case 5:
      pPVar3 = FUN_10063c00(this,3);
      break;
    case 6:
      pPVar3 = FUN_10063c00(this,2);
      break;
    default:
      goto switchD_100640a8_default;
    }
    if (pPVar3 != (Panel *)0x0) {
      FUN_100636d0(this);
      *(int *)(pPVar3 + 0xc4) = param_1;
      *(int *)(pPVar3 + 0xcc) = 1;
      (**(code **)(*(int *)pPVar3 + 0x40))(this);
      piVar1 = *(int **)((int)this + 0xa9c);
      if (piVar1 != (int *)0x0) {
        if ((piVar1[0x31] == 3) && (param_1 == 2)) {
          (**(code **)(*piVar1 + 0x204))();
          *(Panel **)((int)this + 0xa9c) = pPVar3;
          if (*(void **)(pPVar3 + 0xc0) == (void *)0x0) {
            *(int **)(pPVar3 + 0xc0) = piVar1;
            (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
            FUN_10064790((int)this);
            return;
          }
          FUN_100655a0(*(void **)(pPVar3 + 0xc0),piVar1);
          (**(code **)(**(int **)((int)this + 0xa9c) + 0x200))();
          FUN_10064790((int)this);
          return;
        }
        if ((void *)piVar1[0x30] == (void *)0x0) {
          piVar1[0x30] = (int)pPVar3;
          return;
        }
        FUN_100655a0((void *)piVar1[0x30],pPVar3);
        return;
      }
      *(Panel **)((int)this + 0xa9c) = pPVar3;
      (**(code **)(*(int *)pPVar3 + 0x200))();
      FUN_10064790((int)this);
    }
  }
switchD_100640a8_default:
  return;
}

/* 100641e0  FUN_100641e0  (32 bytes)
 * undefined FUN_100641e0(int param_1)
 * called by: FUN_10021aa0, FUN_10060aa0, FUN_100635e0
 */
void __fastcall FUN_100641e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa9c);
  while (iVar1 != 0) {
    FUN_10064200(param_1);
    iVar1 = *(int *)(param_1 + 0xa9c);
  }
  return;
}

/* 10064200  FUN_10064200  (54 bytes)
 * undefined FUN_10064200(int param_1)
 * called by: FUN_10059910, FUN_10059950, FUN_1005ab10, FUN_100641e0, FUN_10064a20, FUN_10064b90
 */
void __fastcall FUN_10064200(int param_1)

{
  if (*(int **)(param_1 + 0xa9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa9c) + 0x204))();
    FUN_10063bd0(DAT_100d5cb0,*(int *)(*(int *)(param_1 + 0xa9c) + 0xc0));
  }
  FUN_10064790(param_1);
  return;
}

/* 10064240  FUN_10064240  (52 bytes)
 * uint FUN_10064240(int param_1)
 * called by: FUN_1001b047, FUN_1002eb40, FUN_1002ed00, FUN_10034a60
 */
uint __fastcall FUN_10064240(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa9c);
  if (((uVar1 != 0) && (DAT_10190a10 == 0)) &&
     ((uVar1 = *(uint *)(uVar1 + 0xc4), uVar1 == 2 ||
      (((uVar1 == 3 || (uVar1 == 5)) || (uVar1 == 6)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* 10064280  FUN_10064280  (55 bytes)
 * undefined4 FUN_10064280(int param_1)
 * called by: FUN_10064050
 */
undefined4 __fastcall FUN_10064280(int param_1)

{
  int iVar1;
  
  if (DAT_100cf97c < 1) {
    return 0;
  }
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar1 != 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0xaa0) + 0x1fc))();
  return *(undefined4 *)(param_1 + 0xaa0);
}

/* 100642c0  FUN_100642c0  (138 bytes)
 * undefined FUN_100642c0(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_100642c0(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100780cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x124);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_100655d0(this,100,0,0,0,DAT_100d5908,DAT_100d590c);
  }
  *(Panel **)(param_1 + 0xaa0) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa0) + 0x24))(0);
  ExceptionList = unaff_ESI;
  return;
}

/* 10064350  FUN_10064350  (41 bytes)
 * undefined4 FUN_10064350(int param_1)
 * called by: FUN_10064050
 */
undefined4 __fastcall FUN_10064350(int param_1)

{
  int iVar1;
  
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar1 != 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0xaa4) + 0x1fc))();
  return *(undefined4 *)(param_1 + 0xaa4);
}

/* 10064380  FUN_10064380  (138 bytes)
 * undefined FUN_10064380(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10064380(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100780eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xdf0);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_10058880(this,100,0,0,0,DAT_100d5908,DAT_100d590c);
  }
  *(Panel **)(param_1 + 0xaa4) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa4) + 0x24))(0);
  ExceptionList = unaff_ESI;
  return;
}

/* 10064410  FUN_10064410  (819 bytes)
 * undefined FUN_10064410(int param_1)
 * called by: FUN_100607f0
 */
void __fastcall FUN_10064410(int param_1)

{
  void *this;
  Panel *this_00;
  int iVar1;
  Label *pLVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint unaff_EBP;
  int unaff_EDI;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10078121;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0xc0);
  local_4 = 0;
  if (this_00 == (Panel *)0x0) {
    this_00 = (Panel *)0x0;
  }
  else {
    lVar8 = __ftol();
    lVar9 = __ftol();
    vgui::Panel::Panel(this_00,0,(int)lVar9,DAT_100d5908,(int)lVar8);
    *(undefined ***)this_00 = &PTR_setPos_1007daa0;
    *(undefined4 *)(this_00 + 0xbc) = 100;
  }
  *(Panel **)(param_1 + 0x884) = this_00;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x884) + 0x24))();
  this = (void *)(DAT_100d5cb0 + 0x22c);
  iVar1 = FUN_1005cc60(this,(byte_conflict *)s_Primary_Button_Text_10096ba8);
  FUN_1005cc60(this,(byte_conflict *)s_Briefing_Text_1009648c);
  pLVar2 = operator_new(0xd0);
  pvStack_c = (void *)0x1;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar8 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_Spectator_10093860,0,0,DAT_100d5908,(int)lVar8);
  }
  uVar13 = *(uint *)(param_1 + 0x884);
  *(int **)(param_1 + 0x888) = piVar3;
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  iVar10 = **(int **)(param_1 + 0x888);
  uVar4 = FUN_1005cce0(this,iVar1);
  (**(code **)(iVar10 + 0x208))();
  FUN_1005ccf0(this,iVar1,(uint *)&stack0xffffffd4,(uint *)&stack0xffffffd0,(uint *)&stack0xffffffcc
               ,(uint *)&stack0xffffffd8);
  (**(code **)(**(int **)(param_1 + 0x888) + 0x120))();
  FUN_1005cd30(this,iVar1,(uint *)&stack0xffffffc4,(uint *)&stack0xffffffc0,(uint *)&stack0xffffffbc
               ,(uint *)&stack0xffffffc8);
  uVar14 = 0xff;
  (**(code **)(**(int **)(param_1 + 0x888) + 300))();
  uVar12 = 1;
  (**(code **)(**(int **)(param_1 + 0x888) + 0x21c))();
  pLVar2 = operator_new(0xd0);
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar8 = __ftol();
    uVar5 = (uint)lVar8;
    uVar7 = DAT_100d5908;
    lVar8 = __ftol();
    iVar1 = (int)lVar8;
    iVar10 = 0;
    pcVar6 = FUN_100349a0(s__Spec_Help_TSTitle_1009714c);
    piVar3 = (int *)vgui::Label::Label(pLVar2,pcVar6,iVar10,iVar1,uVar7,uVar5);
  }
  pvVar11 = *(void **)(param_1 + 0x884);
  *(int **)(param_1 + 0x88c) = piVar3;
  (**(code **)(*piVar3 + 0x40))();
  iVar1 = **(int **)(param_1 + 0x88c);
  uVar7 = FUN_1005cce0(this,unaff_EDI);
  (**(code **)(iVar1 + 0x208))();
  FUN_1005ccf0(this,unaff_EDI,(uint *)&stack0xffffffa8,(uint *)&stack0xffffffa4,
               (uint *)&stack0xffffffa0,(uint *)&stack0xffffffac);
  (**(code **)(**(int **)(param_1 + 0x88c) + 0x120))(uVar14,uVar4,uVar13,unaff_EBP);
  FUN_1005cd30(this,unaff_EDI,(uint *)&stack0xffffff98,(uint *)&stack0xffffff94,
               (uint *)&stack0xffffff90,(uint *)&stack0xffffff9c);
  (**(code **)(**(int **)(param_1 + 0x88c) + 300))(uVar12,pvVar11,uVar7,0xff);
  (**(code **)(**(int **)(param_1 + 0x88c) + 0x21c))(1);
  ExceptionList = pvVar11;
  return;
}

/* 10064750  FUN_10064750  (56 bytes)
 * undefined FUN_10064750(int param_1)
 * called by: FUN_10065090
 */
void __fastcall FUN_10064750(int param_1)

{
  if (*(int **)(param_1 + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa0) + 0x210))();
  }
  if (*(int **)(param_1 + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa4) + 0x210))();
  }
  if (*(int **)(param_1 + 0xaa8) != (int *)0x0) {
    FUN_1005d5f0(*(int **)(param_1 + 0xaa8));
    return;
  }
  return;
}

/* 10064790  FUN_10064790  (234 bytes)
 * undefined FUN_10064790(int param_1)
 * called by: FUN_10036670, FUN_10036720, FUN_10063590, FUN_100635e0, FUN_100636d0, FUN_10063710, FUN_10063760, FUN_10064050, FUN_10064200, FUN_10066770
 */
void __fastcall FUN_10064790(int param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  App *pAVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0xa9c) == 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xaa0) + 0x28))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xad0) + 0x28))();
      if (cVar2 == '\0') {
        puVar3 = FUN_10017570();
        cVar2 = FUN_100188b0((int)puVar3);
        if (cVar2 == '\0') {
          if (*(int *)(param_1 + 0xad4) == 0) {
            if (*(int *)(*(int *)(param_1 + 0xaac) + 4) == 0) {
              cVar2 = FUN_100361f0(&DAT_100d1460);
              if (cVar2 == '\0') goto LAB_1006483e;
            }
          }
          else if (*(float *)(DAT_100cf984 + 0xc) == 0.0) {
LAB_1006483e:
            FUN_100273b0();
            DAT_100df714 = 0;
            pAVar4 = vgui::App::getInstance();
            piVar5 = (int *)(**(code **)(*(int *)pAVar4 + 0x54))();
            pAVar4 = vgui::App::getInstance();
            iVar1 = *(int *)pAVar4;
            uVar6 = (**(code **)(*piVar5 + 0x14))(1);
            (**(code **)(iVar1 + 0x8c))(uVar6);
            return;
          }
        }
      }
    }
  }
  DAT_100df714 = 1;
  pAVar4 = vgui::App::getInstance();
  piVar5 = (int *)(**(code **)(*(int *)pAVar4 + 0x54))();
  pAVar4 = vgui::App::getInstance();
  iVar1 = *(int *)pAVar4;
  uVar6 = (**(code **)(*piVar5 + 0x14))(2);
  (**(code **)(iVar1 + 0x8c))(uVar6);
  return;
}

/* 10064880  FUN_10064880  (63 bytes)
 * undefined FUN_10064880(int param_1)
 * called by: FUN_1001b360, FUN_1005d5f0, FUN_1005da20
 */
void __fastcall FUN_10064880(int param_1)

{
  char *pcVar1;
  int ent_num;
  
  ent_num = 1;
  pcVar1 = &DAT_1018fbf2;
  do {
    (*gEngfuncs.pfnGetPlayerInfo)(ent_num,(hud_player_info_t *)(pcVar1 + -6));
    if (*pcVar1 != '\0') {
      *(int *)(*(int *)(param_1 + 0xaa8) + 0x2684c) = ent_num;
    }
    pcVar1 = pcVar1 + 0x14;
    ent_num = ent_num + 1;
  } while ((int)pcVar1 < 0x101900de);
  return;
}

/* 10064a20  FUN_10064a20  (334 bytes)
 * undefined FUN_10064a20(int param_1)
 */
void __fastcall FUN_10064a20(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *szCmdString;
  char *pcVar4;
  bool bVar5;
  
  szCmdString = (byte *)(param_1 + 4);
  (*gEngfuncs.pfnClientCmd)((char *)szCmdString);
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_100636d0(DAT_100d5cb0);
  }
  else {
    FUN_10064200((int)DAT_100d5cb0);
  }
  pcVar4 = s_jointeam_1_10097184;
  pbVar2 = szCmdString;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10064a7d:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10064a82;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10064a7d;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10064a82:
  if (iVar3 == 0) {
    DAT_10190b24 = 1;
    return;
  }
  pcVar4 = s_jointeam_2_10097178;
  pbVar2 = szCmdString;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10064ac5:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10064aca;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10064ac5;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10064aca:
  if (iVar3 == 0) {
    DAT_10190b24 = 2;
    return;
  }
  pcVar4 = s_jointeam_3_1009716c;
  pbVar2 = szCmdString;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10064b0d:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10064b12;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10064b0d;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10064b12:
  if (iVar3 == 0) {
    DAT_10190b24 = 3;
    return;
  }
  pcVar4 = s_jointeam_4_10097160;
  do {
    bVar1 = *szCmdString;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10064b55:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10064b5a;
    }
    if (bVar1 == 0) break;
    bVar1 = szCmdString[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10064b55;
    szCmdString = szCmdString + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10064b5a:
  if (iVar3 == 0) {
    DAT_10190b24 = 4;
  }
  return;
}

/* 10064b70  FUN_10064b70  (31 bytes)
 * uint FUN_10064b70(undefined4 param_1)
 * called by: FUN_10064b90
 */
uint __thiscall FUN_10064b70(void *this,undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0xa9c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0xa9c) + 0x208))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* 10064b90  FUN_10064b90  (473 bytes)
 * undefined4 FUN_10064b90(int param_1, int param_2, byte.conflict * param_3)
 * called by: HUD_Key_Event
 */
undefined4 __thiscall FUN_10064b90(void *this,int param_1,int param_2,byte_conflict *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  if ((((*(int *)((int)this + 0x21c) != 0) && (iVar2 = (*gEngfuncs.Con_IsVisible)(), iVar2 == 0)) &&
      (param_1 != 0)) && ((param_2 == 0xd || (param_2 == 0xa9)))) {
    FUN_10064050(this,2);
  }
  if ((*(int *)((int)this + 0xa9c) != 0) && (iVar2 = (*gEngfuncs.Con_IsVisible)(), iVar2 == 0)) {
    iVar2 = *(int *)(*(int *)((int)this + 0xa9c) + 0xc4);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      if ((param_2 == 0x1b) &&
         (((iVar3 = DAT_10190b24, iVar2 == 2 || (iVar3 = DAT_10190a10, iVar2 == 3)) && (iVar3 != 0))
         )) {
        FUN_10064200((int)this);
        return 0;
      }
      iVar3 = 0x30;
      do {
        if ((param_1 != 0) && (param_2 == iVar3)) {
          FUN_10064b70(this,iVar3 + -0x30);
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x3a);
    }
    if ((param_1 != 0) &&
       ((((param_2 == 0xd || (param_2 == 0xa9)) || ((param_2 == 0x20 || (param_2 == 0x1b)))) &&
        (((iVar2 == 4 || (iVar2 == 5)) || (iVar2 == 6)))))) {
      FUN_10064200((int)this);
      return 0;
    }
    if (param_3 != (byte_conflict *)0x0) {
      if (param_1 == 0) goto LAB_10064d43;
      pbVar5 = &DAT_1009403c;
      do {
        bVar1 = *param_3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_10064cd1:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10064cd6;
        }
        if (bVar1 == 0) break;
        bVar1 = param_3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_10064cd1;
        param_3 = param_3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10064cd6:
      if ((iVar3 == 0) && (iVar2 == 2)) {
        (**(code **)(**(int **)((int)this + 0xaa0) + 0x208))(5);
        return 0;
      }
    }
  }
  if ((param_1 != 0) && (*(void **)((int)this + 0xad4) != (void *)0x0)) {
    if (param_2 == 0x1b) {
      FUN_100636d0(this);
      return 0;
    }
    if ((0x2f < param_2) && (param_2 < 0x3a)) {
      uVar4 = FUN_100601f0(*(void **)((int)this + 0xad4),param_2);
      if ((char)uVar4 != '\0') {
        FUN_100636d0(this);
      }
      return 0;
    }
  }
LAB_10064d43:
  if ((*(byte *)(*(int **)((int)this + 0xaac) + 1) & 1) != 0) {
    (**(code **)(*(int *)(**(int **)((int)this + 0xaac) + 8) + 0x1c))(param_2,0);
  }
  return 1;
}

/* 10064d70  FUN_10064d70  (39 bytes)
 * undefined FUN_10064d70(int param_1)
 */
void __fastcall FUN_10064d70(int param_1)

{
  FUN_100637f0(DAT_100d5cb0,*(int **)(param_1 + 4));
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x234))(1);
  }
  return;
}

