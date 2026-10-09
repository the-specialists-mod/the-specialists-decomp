/* client.dll - unnamed_10064da0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10064da0  FUN_10064da0  (65 bytes)
 * undefined4 FUN_10064da0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064da0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_100299b0(param_3,param_2);
  piVar2 = (int *)((int)this + 0x894);
  iVar3 = 5;
  do {
    iVar1 = FUN_10029a50();
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10063840((int)this);
  return 1;
}

/* 10064df0  FUN_10064df0  (162 bytes)
 * undefined4 FUN_10064df0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064df0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x8b0) = uVar2;
  if (0 < (int)uVar2) {
    piVar6 = (int *)((int)this + 0x840);
    pcVar5 = (char *)((int)this + 0x8fc);
    iVar4 = 1;
    do {
      if (iVar4 < 5) {
        iVar8 = 0x40;
        pcVar7 = pcVar5;
        pcVar3 = FUN_10029b00();
        FUN_100348d0(pcVar3,pcVar7,iVar8);
        if ((int *)*piVar6 != (int *)0x0) {
          (**(code **)(*(int *)*piVar6 + 0x264))(pcVar5);
        }
        if ((int *)piVar6[7] != (int *)0x0) {
          (**(code **)(*(int *)piVar6[7] + 0x264))(pcVar5);
        }
      }
      piVar6 = piVar6 + 1;
      pcVar5 = pcVar5 + 0x40;
      bVar1 = iVar4 < *(int *)((int)this + 0x8b0);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  if (*(int **)((int)this + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xaa0) + 0x210))();
  }
  return 1;
}

/* 10064ea0  FUN_10064ea0  (48 bytes)
 * undefined4 FUN_10064ea0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064ea0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x8a8) = uVar1;
  FUN_10063840((int)this);
  return 1;
}

/* 10064ed0  FUN_10064ed0  (48 bytes)
 * undefined4 FUN_10064ed0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064ed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x8ac) = uVar1;
  FUN_10063840((int)this);
  return 1;
}

/* 10064f00  FUN_10064f00  (82 bytes)
 * undefined4 FUN_10064f00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064f00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  size_t _Count;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if (uVar1 == 4) {
    _Count = 0x40;
    _Source = FUN_10029b00();
    _strncpy((char *)((int)this + 0xa5c),_Source,_Count);
    *(undefined1 *)((int)this + 0xa9b) = 0;
  }
  FUN_10064050(this,uVar1);
  return 1;
}

/* 10064f60  FUN_10064f60  (140 bytes)
 * undefined4 FUN_10064f60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064f60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x23c) != 0) {
    *(undefined1 *)((int)this + 0x240) = 0;
  }
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x23c) = uVar2;
  uVar2 = 0xffffffff;
  pcVar3 = (char *)((int)this + 0x240);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = 0x5ff - (~uVar2 - 1);
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  pcVar3 = FUN_10029b00();
  _strncat((char *)((int)this + 0x240),pcVar3,uVar2);
  *(undefined1 *)((int)this + 0x83f) = 0;
  if (*(int *)((int)this + 0x23c) != 0) {
    FUN_10064050(this,5);
  }
  return 1;
}

/* 10064ff0  FUN_10064ff0  (48 bytes)
 * undefined4 FUN_10064ff0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10064ff0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x8b4) = uVar1;
  FUN_10063840((int)this);
  return 1;
}

/* 10065020  FUN_10065020  (41 bytes)
 * undefined4 FUN_10065020(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10065020(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x8b8) = uVar1;
  return 1;
}

/* 10065050  FUN_10065050  (53 bytes)
 * undefined4 FUN_10065050(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10065050(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Source;
  size_t _Count;
  
  FUN_100299b0(param_3,param_2);
  _Count = 0x20;
  _Source = FUN_10029b00();
  _strncpy((char *)((int)this + 0xab0),_Source,_Count);
  return 1;
}

/* 10065090  FUN_10065090  (141 bytes)
 * undefined4 FUN_10065090(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10065090(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  iVar2 = FUN_10029a50();
  iVar3 = FUN_10029a50();
  iVar4 = FUN_10029a50();
  iVar5 = FUN_10029a50();
  sVar8 = (short)uVar1;
  if ((0 < sVar8) && (sVar8 < 0x41)) {
    iVar6 = (int)sVar8;
    iVar7 = iVar6 * 0x20;
    *(short *)((int)&DAT_101901f4 + iVar7 + 2) = (short)iVar2;
    *(short *)(&DAT_101901f8 + iVar7) = (short)iVar3;
    *(short *)(&DAT_101901fa + iVar7) = (short)iVar4;
    (&DAT_101901fc)[iVar6 * 0x10] = (short)iVar5;
    if ((short)iVar5 < 0) {
      (&DAT_101901fc)[iVar6 * 0x10] = 0;
    }
    FUN_10064750((int)this);
  }
  return 1;
}

/* 10065120  FUN_10065120  (153 bytes)
 * undefined4 FUN_10065120(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10065120(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  byte_conflict *pbVar4;
  int iVar5;
  
  FUN_100299b0(param_3,param_2);
  pbVar1 = FUN_10029b00();
  iVar5 = 1;
  if (0 < *(int *)(*(int *)((int)this + 0xaa8) + 0x26848)) {
    pbVar4 = &DAT_1018f1d8;
    this_00 = extraout_ECX;
    do {
      uVar2 = FUN_10076d90(this_00,pbVar1,pbVar4);
      if (uVar2 == 0) break;
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0x28;
      this_00 = extraout_ECX_00;
    } while (iVar5 <= *(int *)(*(int *)((int)this + 0xaa8) + 0x26848));
  }
  if (iVar5 <= *(int *)(*(int *)((int)this + 0xaa8) + 0x26848)) {
    iVar5 = iVar5 * 0x28;
    *(undefined4 *)(iVar5 + 0x1018f1d0) = 1;
    iVar3 = FUN_10029a50();
    *(short *)(&DAT_1018f1c0 + iVar5) = (short)iVar3;
    iVar3 = FUN_10029a50();
    *(short *)(&DAT_1018f1c2 + iVar5) = (short)iVar3;
  }
  return 1;
}

/* 100651c0  FUN_100651c0  (109 bytes)
 * undefined4 FUN_100651c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100651c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  short sVar2;
  size_t _Count;
  
  if (*(int *)((int)this + 0xaa8) == 0) {
    return 1;
  }
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  sVar2 = (short)uVar1;
  if ((0 < sVar2) && (sVar2 < 0x41)) {
    _Count = 0x10;
    _Source = FUN_10029b00();
    _strncpy(&DAT_101901fe + sVar2 * 0x20,_Source,_Count);
  }
  FUN_1005da20(*(int **)((int)this + 0xaa8));
  return 1;
}

/* 10065230  FUN_10065230  (24 bytes)
 * undefined FUN_10065230(int param_1, int param_2)
 * called by: FUN_1001b360
 */
void __thiscall FUN_10065230(void *this,int param_1,int param_2)

{
  FUN_1005e5d0(*(void **)((int)this + 0xaa8),param_1,param_2);
  return;
}

/* 10065250  FUN_10065250  (221 bytes)
 * undefined4 FUN_10065250(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_10065250(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  cl_entity_s *pcVar4;
  int iVar5;
  int iVar6;
  
  FUN_100299b0(param_3,param_2);
  uVar3 = FUN_10029a10();
  sVar2 = (short)uVar3;
  if ((sVar2 < 1) || (0x40 < sVar2)) {
    return 1;
  }
  iVar6 = (int)sVar2;
  uVar3 = FUN_10029a10();
  (&DAT_101900ec)[iVar6] = uVar3;
  pcVar4 = (*gEngfuncs.GetLocalPlayer)();
  if (pcVar4->index != iVar6) goto LAB_10065302;
  DAT_100d4401 = (&DAT_101900ec)[iVar6] == 1;
  if ((bool)DAT_100d4401) {
    iVar5 = CL_IsThirdPerson();
    if (iVar5 != 0) {
      FUN_1004fe00();
    }
    FUN_10036670(&DAT_100d1460);
  }
  else if (*(int *)(DAT_100df544 + 0xc) == 0x3f800000) {
    iVar5 = CL_IsThirdPerson();
    if (iVar5 != 0) goto LAB_100652da;
LAB_100652f8:
    FUN_1004fe00();
  }
  else {
LAB_100652da:
    if (*(float *)(DAT_100df544 + 0xc) == 0.0) {
      iVar5 = CL_IsThirdPerson();
      if (iVar5 != 0) goto LAB_100652f8;
    }
  }
  FUN_10004600();
LAB_10065302:
  uVar1 = *(undefined1 *)(&DAT_101900ec + iVar6);
  *(undefined1 *)((int)&DAT_1018d128 + iVar6 * 2) = 0;
  *(undefined1 *)((int)&DAT_101901f4 + iVar6 * 0x20 + 1) = uVar1;
  return 1;
}

/* 100653a0  FUN_100653a0  (66 bytes)
 * undefined4 FUN_100653a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100653a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x890) = uVar1;
  FUN_10063840((int)this);
  if (*(int **)((int)this + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xaa0) + 0x210))();
  }
  return 1;
}

/* 10065524  FUN_10065524  (79 bytes)
 * bool FUN_10065524(void)
 */
bool FUN_10065524(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  int unaff_EDI;
  bool bVar3;
  
  pbVar2 = (byte *)(unaff_EDI + 300);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < *in_EAX;
    if (bVar1 != *in_EAX) break;
    if (bVar1 == 0) {
      return false;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < in_EAX[1];
    if (bVar1 != in_EAX[1]) break;
    pbVar2 = pbVar2 + 2;
    in_EAX = in_EAX + 2;
    if (bVar1 == 0) {
      return false;
    }
  }
  return 1 - bVar3 != (uint)(bVar3 != 0);
}

/* 100655a0  FUN_100655a0  (48 bytes)
 * undefined FUN_100655a0(undefined4 param_1)
 * called by: FUN_10064050
 */
void __thiscall FUN_100655a0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc0);
  if (*(int *)((int)this + 0xc0) != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc0);
    } while (iVar1 != 0);
    *(undefined4 *)(iVar2 + 0xc0) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}

/* 100655d0  FUN_100655d0  (2581 bytes)
 * Panel * FUN_100655d0(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_100642c0
 */
Panel * __thiscall
FUN_100655d0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  void *this_00;
  int iVar1;
  Label *pLVar2;
  int *piVar3;
  Panel *this_01;
  LineBorder *pLVar4;
  uint uVar5;
  void *this_02;
  uint uVar6;
  ScrollPanel *pSVar7;
  TextPanel *pTVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  Button *pBVar12;
  int iVar13;
  Button *pBVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  char *pcVar17;
  int iVar18;
  uint unaff_EBX;
  uint unaff_EBP;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  Button BVar24;
  Button *pBVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  Color aCStack_148 [8];
  uint uStack_140;
  undefined4 local_13c;
  Label *local_12c;
  int local_128;
  int local_120;
  int local_11c;
  undefined4 uStack_b0;
  void *pvStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_70;
  undefined4 uStack_64;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100781ae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_3,param_4,param_5,param_6);
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined ***)this = &PTR_setPos_10081978;
  this_00 = (void *)(DAT_100d5cb0 + 0x22c);
  iVar1 = FUN_1005cc60(this_00,(byte_conflict *)s_Title_Font_1009649c);
  local_120 = iVar1;
  local_128 = FUN_1005cc60(this_00,(byte_conflict *)s_Briefing_Text_1009648c);
  local_11c = FUN_1005cc60(this_00,(byte_conflict *)s_Team_Info_Text_100971bc);
  local_13c = FUN_1005cce0(this_00,iVar1);
  pLVar2 = operator_new(0xd0);
  local_4 = 0;
  local_12c = pLVar2;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar5 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_,(int)lVar19,uVar5);
  }
  local_4 = 0xffffffff;
  puVar28 = this;
  (**(code **)(*piVar3 + 0x40))();
  (**(code **)(*piVar3 + 0x208))();
  FUN_1005ccf0(this_00,iVar1,(uint *)&stack0xfffffeb4,(uint *)&stack0xfffffeb0,(uint *)aCStack_148,
               &uStack_140);
  (**(code **)(*piVar3 + 0x120))();
  FUN_1005cd30(this_00,iVar1,(uint *)&stack0xfffffea4,(uint *)&stack0xfffffea0,
               (uint *)&stack0xfffffea8,(uint *)&stack0xfffffeb0);
  (**(code **)(*piVar3 + 300))();
  (**(code **)(*piVar3 + 0x21c))();
  iVar1 = *piVar3;
  FUN_100349a0(s_Select_Team_100971b0);
  (**(code **)(iVar1 + 0x200))();
  this_01 = operator_new(0xc0);
  uStack_30 = 1;
  if (this_01 == (Panel *)0x0) {
    this_01 = (Panel *)0x0;
  }
  else {
    lVar19 = __ftol();
    puVar28 = (undefined1 *)((float)DAT_100d5908 * 0.0015625);
    lVar20 = __ftol();
    lVar21 = __ftol();
    lVar22 = __ftol();
    vgui::Panel::Panel(this_01,(int)lVar22,(int)lVar21,(int)lVar20,(int)lVar19);
    *(undefined ***)this_01 = &PTR_setPos_1007daa0;
    *(undefined4 *)(this_01 + 0xbc) = 0xff;
  }
  *(Panel **)((int)this + 0xd8) = this_01;
  uStack_30 = 0xffffffff;
  (**(code **)(*(int *)this_01 + 0x40))();
  pLVar4 = operator_new(0x44);
  uStack_34 = 2;
  if (pLVar4 == (LineBorder *)0x0) {
    uVar5 = 0;
  }
  else {
    vgui::Color::Color(aCStack_148,0xb2,0x76,0,0);
    puVar28 = &stack0xfffffe6c;
    uVar5 = vgui::LineBorder::LineBorder(pLVar4);
  }
  uStack_34 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xd8) + 0xd4))();
  pLVar2 = operator_new(0xd0);
  uStack_38 = 3;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar27 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_,(int)lVar19,uVar27);
  }
  *(int **)((int)this + 0xdc) = piVar3;
  uStack_38 = 0xffffffff;
  (**(code **)(*piVar3 + 0x208))();
  (**(code **)(**(int **)((int)this + 0xdc) + 0x40))();
  FUN_1005ccf0(this_00,(int)puVar28,(uint *)&stack0xfffffe80,(uint *)&stack0xfffffe7c,
               (uint *)&stack0xfffffe84,(uint *)&stack0xfffffe8c);
  (**(code **)(**(int **)((int)this + 0xdc) + 0x120))();
  FUN_1005cd30(this_00,(int)puVar28,(uint *)&stack0xfffffe70,(uint *)&stack0xfffffe6c,
               (uint *)&stack0xfffffe74,(uint *)&stack0xfffffe7c);
  (**(code **)(**(int **)((int)this + 0xdc) + 300))();
  uVar27 = 3;
  (**(code **)(**(int **)((int)this + 0xdc) + 0x21c))();
  this_02 = operator_new(0xd0);
  uStack_64 = 4;
  if (this_02 == (void *)0x0) {
    pSVar7 = (ScrollPanel *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar6 = (uint)lVar19;
    lVar19 = __ftol();
    iVar1 = (int)lVar19;
    lVar19 = __ftol();
    uVar26 = (uint)lVar19;
    lVar19 = __ftol();
    pSVar7 = FUN_1005a860(this_02,(int)lVar19,uVar26,iVar1,uVar6);
  }
  uVar6 = *(uint *)((int)this + 0xd8);
  *(ScrollPanel **)((int)this + 0xd4) = pSVar7;
  uStack_64 = 0xffffffff;
  (**(code **)(*(int *)pSVar7 + 0x40))();
  uVar26 = 0;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x1fc))();
  pTVar8 = operator_new(0xc0);
  uStack_70 = 5;
  if (pTVar8 == (TextPanel *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar9 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::TextPanel::TextPanel(pTVar8,s_,0,0,(int)lVar19,uVar9);
  }
  *(int **)((int)this + 0xe0) = piVar3;
  iVar1 = *piVar3;
  uStack_70 = 0xffffffff;
  uVar9 = (**(code **)(**(int **)((int)this + 0xd4) + 0x204))();
  (**(code **)(iVar1 + 0x40))();
  iVar1 = **(int **)((int)this + 0xe0);
  uVar10 = FUN_1005cce0(this_00,unaff_EBP);
  (**(code **)(iVar1 + 0x200))();
  FUN_1005ccf0(this_00,unaff_EBP,(uint *)&stack0xfffffe48,(uint *)&stack0xfffffe44,
               (uint *)&stack0xfffffe4c,(uint *)&stack0xfffffe54);
  (**(code **)(**(int **)((int)this + 0xe0) + 0x120))(uVar27,uVar6,unaff_EBX,uVar5);
  FUN_1005cd30(this_00,unaff_EBP,(uint *)&stack0xfffffe38,(uint *)&stack0xfffffe34,
               (uint *)&stack0xfffffe3c,(uint *)&stack0xfffffe44);
  (**(code **)(**(int **)((int)this + 0xe0) + 300))(uVar9,uVar10,uVar26,uVar6);
  iVar1 = **(int **)((int)this + 0xe0);
  puVar11 = FUN_100349a0(s__Map_Description_not_available_10097190);
  (**(code **)(iVar1 + 0x1fc))(puVar11);
  iVar1 = 1;
  do {
    lVar19 = __ftol();
    iVar18 = (int)lVar19;
    pBVar12 = operator_new(300);
    uStack_9c = 6;
    if (pBVar12 == (Button *)0x0) {
      pBVar14 = (Button *)0x0;
    }
    else {
      BVar24 = (Button)0x1;
      pBVar25 = pBVar12;
      lVar19 = __ftol();
      iVar13 = (int)lVar19;
      lVar19 = __ftol();
      iVar23 = (int)lVar19;
      lVar19 = __ftol();
      pBVar14 = FUN_1005a0b0(pBVar12,s_,(int)lVar19,iVar18,iVar23,iVar13,BVar24);
      pBVar12 = pBVar25;
    }
    *(Button **)((int)this + iVar1 * 4 + 0xfc) = pBVar14;
    uStack_9c = 0xffffffff;
    (**(code **)(*(int *)pBVar14 + 0x40))(this);
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x21c))(3);
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x24))(0);
    if (iVar1 == 5) {
      FUN_1005a280(*(void **)((int)this + 0x110),'5');
      iVar18 = **(int **)((int)this + 0x110);
      puVar11 = FUN_100349a0(s_Auto_assign_10096f4c);
      (**(code **)(iVar18 + 0x264))(puVar11);
      (**(code **)(**(int **)((int)this + 0x110) + 0x24))(1);
    }
    FUN_1006ac7a(&stack0xfffffe50,(byte_conflict *)s_jointeam__d_10096f64);
    puVar15 = operator_new(0x108);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      *puVar15 = &PTR_FUN_1007df38;
      _strncpy((char *)(puVar15 + 1),&stack0xfffffe50,0x100);
      *(undefined1 *)((int)puVar15 + 0x103) = 0;
      puVar15[0x41] = 1;
      *puVar15 = &PTR_FUN_10081700;
    }
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x240))(puVar15);
    puVar15 = operator_new(0xc);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      *puVar15 = &PTR_LAB_1007dc9c;
      puVar15[1] = iVar1;
      puVar15[2] = this;
    }
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x70))(puVar15);
    pTVar8 = operator_new(0xc0);
    uStack_b0 = 7;
    if (pTVar8 == (TextPanel *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      lVar19 = __ftol();
      iVar18 = (int)lVar19;
      lVar19 = __ftol();
      iVar13 = (int)lVar19;
      lVar19 = __ftol();
      iVar23 = (int)lVar19;
      lVar19 = __ftol();
      piVar3 = (int *)vgui::TextPanel::TextPanel(pTVar8,s_,(int)lVar19,iVar23,iVar13,iVar18);
    }
    *(int **)((int)this + iVar1 * 4 + 0xe4) = piVar3;
    uStack_b0 = 0xffffffff;
    (**(code **)(*piVar3 + 0x40))(*(undefined4 *)((int)this + 0xd8));
    iVar18 = **(int **)((int)this + iVar1 * 4 + 0xe4);
    uVar16 = FUN_1005cce0(this_00,(int)pBVar12);
    (**(code **)(iVar18 + 0x200))(uVar16);
    iVar18 = iVar1 % DAT_10096970;
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xe4) + 0x120))
              ((&DAT_10096974)[iVar18 * 3],(&DAT_10096978)[iVar18 * 3],(&DAT_1009697c)[iVar18 * 3],0
              );
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xe4) + 300))(0,0,0,0xff);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  pBVar12 = operator_new(300);
  uStack_9c = 8;
  if (pBVar12 == (Button *)0x0) {
    pBVar12 = (Button *)0x0;
  }
  else {
    BVar24 = (Button)0x0;
    lVar19 = __ftol();
    iVar1 = (int)lVar19;
    lVar19 = __ftol();
    iVar18 = (int)lVar19;
    iVar23 = 0;
    lVar19 = __ftol();
    iVar13 = (int)lVar19;
    pcVar17 = FUN_100349a0(s_HD_Menu_Cancel_100963ee + 2);
    pBVar12 = FUN_1005a0b0(pBVar12,pcVar17,iVar13,iVar23,iVar18,iVar1,BVar24);
  }
  *(Button **)((int)this + 0x118) = pBVar12;
  uStack_9c = 0xffffffff;
  (**(code **)(*(int *)pBVar12 + 0x40))(this);
  puVar15 = operator_new(8);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    *puVar15 = &PTR_FUN_1007da94;
    puVar15[1] = 0;
  }
  (**(code **)(**(int **)((int)this + 0x118) + 0x240))(puVar15);
  *(undefined4 *)((int)this + 0x11c) = 0;
  FUN_10065ff0((int)this);
  ExceptionList = pvStack_ac;
  return this;
}

/* 10065ff0  FUN_10065ff0  (45 bytes)
 * undefined FUN_10065ff0(int param_1)
 * called by: FUN_100655d0
 */
void __fastcall FUN_10065ff0(int param_1)

{
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x20c))(0,0);
  DAT_1018d16a = 0;
  DAT_1009ff08 = 0;
  return;
}

/* 100665a0  FUN_100665a0  (102 bytes)
 * undefined4 FUN_100665a0(int param_1)
 */
undefined4 __thiscall FUN_100665a0(void *this,int param_1)

{
  int *piVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  if (param_1 == 5) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x110) + 600))();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  if (((0 < param_1) && (param_1 <= *(int *)(DAT_100d5cb0 + 0x8b0))) &&
     (piVar1 = *(int **)((int)this + param_1 * 4 + 0xfc), piVar1 != (int *)0x0)) {
    in_EAX = (**(code **)(*piVar1 + 0x28))();
    if ((char)in_EAX != '\0') {
      uVar2 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 600))();
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* 10066610  FUN_10066610  (33 bytes)
 * undefined FUN_10066610(int * param_1)
 */
void __fastcall FUN_10066610(int *param_1)

{
  (**(code **)(*param_1 + 0x210))();
  (**(code **)(*param_1 + 0x24))(1);
  param_1[0x34] = DAT_100cf944;
  return;
}

/* 10066640  FUN_10066640  (72 bytes)
 * undefined FUN_10066640(int * param_1)
 */
void __fastcall FUN_10066640(int *param_1)

{
  if ((char)param_1[0x45] == '\0') {
    (**(code **)(*param_1 + 0x210))();
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  return;
}

/* 10066690  FUN_10066690  (152 bytes)
 * undefined FUN_10066690(int param_1)
 */
void __thiscall FUN_10066690(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int **)((int)this + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x234))(0);
  }
  puVar2 = (undefined4 *)((int)this + 0xe8);
  iVar1 = 5;
  do {
    (**(code **)(*(int *)puVar2[6] + 0x234))(0);
    (**(code **)(*(int *)*puVar2 + 0x24))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1 == 6) {
    if (*(int **)((int)this + 0x11c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x11c) + 0x234))(1);
    }
  }
  else {
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 0x234))(1);
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0xe4) + 0x24))(1);
  }
  *(int *)((int)this + 0x120) = param_1;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x220))();
  return;
}

/* 10066750  FUN_10066750  (32 bytes)
 * undefined FUN_10066750(undefined4 * param_1)
 * called by: FUN_10060aa0, FUN_10060c00
 */
void __fastcall FUN_10066750(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  param_1[1] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100103b0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  return;
}

/* 10066770  FUN_10066770  (20 bytes)
 * undefined FUN_10066770(undefined4 * param_1)
 */
void __fastcall FUN_10066770(undefined4 *param_1)

{
  FUN_10011230((void *)*param_1,0);
  FUN_10064790(DAT_100d5cb0);
  return;
}

/* 10066790  FUN_10066790  (40 bytes)
 * undefined4 * FUN_10066790(uint param_1)
 * called by: FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_1005b3e0, FUN_10060c00
 */
undefined4 * __cdecl FUN_10066790(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = operator_new(param_1);
  puVar3 = puVar1;
  for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return puVar1;
}

/* 100667c0  FUN_100667c0  (24 bytes)
 * undefined FUN_100667c0(undefined4 * param_1)
 * called by: FUN_100103b0, FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0
 */
void __fastcall FUN_100667c0(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1007aa38;
  if ((LPVOID)param_1[0x37] != (LPVOID)0x0) {
    FUN_1006c158((LPVOID)param_1[0x37]);
  }
  return;
}

/* 100667e0  FUN_100667e0  (145 bytes)
 * undefined FUN_100667e0(uint param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7)
 * called by: FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0
 */
void __thiscall
FUN_100667e0(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  *(int *)((int)this + 200) = param_3;
  *(int *)((int)this + 0xc4) = param_2;
  *(int *)((int)this + 0xd8) = param_5;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(int *)((int)this + 0xd4) = param_4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(uint *)((int)this + 0xbc) = param_1;
  *(int *)((int)this + 0xe0) = param_6;
  (**(code **)(*(int *)this + 0x70))(param_7);
  puVar1 = _malloc(param_1 * 4);
  uVar2 = param_1 & 0x3fffffff;
  *(undefined4 **)((int)this + 0xdc) = puVar1;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return;
}

/* 10066880  FUN_10066880  (109 bytes)
 * undefined FUN_10066880(int * param_1)
 * called by: FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0
 */
void __fastcall FUN_10066880(int *param_1)

{
  (**(code **)(*param_1 + 0x40))(DAT_100d5cb0);
  (**(code **)(*param_1 + 300))(0,0,0,200);
  (**(code **)*param_1)(param_1[0x31],param_1[0x32]);
  (**(code **)(*param_1 + 8))(param_1[0x35],param_1[0x36] * param_1[0x2f]);
  (**(code **)(*param_1 + 0xd4))(0);
  (**(code **)(*param_1 + 0x24))(0);
  return;
}

/* 100668f0  FUN_100668f0  (407 bytes)
 * undefined FUN_100668f0(int param_1, char * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, int param_8)
 * called by: FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0
 */
void __thiscall
FUN_100668f0(void *this,int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  LPVOID pvVar2;
  int *this_00;
  void *this_01;
  Button *pBVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100781cb;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0xdc) != 0) && (param_1 < *(int *)((int)this + 0xbc))) {
    pvVar2 = *(LPVOID *)(*(int *)((int)this + 0xdc) + param_1 * 4);
    ExceptionList = &local_c;
    if (pvVar2 != (LPVOID)0x0) {
      ExceptionList = &local_c;
      FUN_1006ad4c(pvVar2);
    }
    this_01 = operator_new(0x14c);
    local_4 = 0;
    if (this_01 == (void *)0x0) {
      pBVar3 = (Button *)0x0;
    }
    else {
      pBVar3 = FUN_10066b40(this_01,param_2,*(int *)((int)this + 0xcc),*(int *)((int)this + 0xd0),
                            *(int *)((int)this + 0xd4),*(int *)((int)this + 0xd8));
    }
    local_4 = 0xffffffff;
    *(Button **)(*(int *)((int)this + 0xdc) + param_1 * 4) = pBVar3;
    this_00 = *(int **)(*(int *)((int)this + 0xdc) + param_1 * 4);
    (**(code **)(*this_00 + 0x24))(1);
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    piVar4 = (int *)(pcVar8 + -uVar5);
    piVar9 = this_00 + 0x41;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar9 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar9 = piVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar9 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    FUN_10066bb0(this_00,param_2,param_3,param_4,param_6);
    this_00[0x51] = param_7;
    this_00[0x52] = param_8;
    (**(code **)*this_00)(*(undefined4 *)((int)this + 0xcc),*(undefined4 *)((int)this + 0xd0));
    (**(code **)(*this_00 + 8))(*(undefined4 *)((int)this + 0xd4),*(undefined4 *)((int)this + 0xd8))
    ;
    (**(code **)(*this_00 + 0x21c))(4);
    (**(code **)(*this_00 + 0x240))(*(undefined4 *)((int)this + 0xe0));
    if (this_00 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = this_00 + 0x3c;
    }
    (**(code **)(*this_00 + 0x70))(piVar4);
    (**(code **)(*(int *)this + 0x44))(this_00);
    *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + *(int *)((int)this + 0xd8);
  }
  ExceptionList = local_c;
  return;
}

/* 10066a90  FUN_10066a90  (126 bytes)
 * undefined FUN_10066a90(int param_1, char * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * called by: FUN_10011160
 */
void __thiscall
FUN_10066a90(void *this,int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  char cVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (((*(int *)((int)this + 0xdc) != 0) && (param_1 < *(int *)((int)this + 0xbc))) &&
     (this_00 = *(void **)(*(int *)((int)this + 0xdc) + param_1 * 4), this_00 != (void *)0x0)) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = param_2;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = (char *)((int)this_00 + 0x104);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_10066bb0(this_00,param_3,param_4,param_5,param_7);
    *(undefined4 *)((int)this_00 + 0x144) = param_8;
    *(undefined4 *)((int)this_00 + 0x148) = param_9;
  }
  return;
}

/* 10066b10  FUN_10066b10  (43 bytes)
 * undefined FUN_10066b10(int param_1)
 */
void __thiscall FUN_10066b10(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0xdc) != 0) {
    if ((param_1 < *(int *)((int)this + 0xbc)) &&
       (piVar1 = *(int **)(*(int *)((int)this + 0xdc) + param_1 * 4), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x24))(0);
    }
  }
  return;
}

/* 10066b40  FUN_10066b40  (106 bytes)
 * Button * FUN_10066b40(char * param_1, int param_2, int param_3, int param_4, int param_5)
 * called by: FUN_100668f0
 */
Button * __thiscall
FUN_10066b40(void *this,char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  vgui::Button::Button(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)((int)this + 0xf0) = &vgui::InputSignal::_vftable_;
  uVar2 = 0xffffffff;
  *(undefined ***)this = &PTR_setPos_10081bbc;
  *(undefined ***)((int)this + 0xf0) = &PTR_LAB_10081b90;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x104);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return this;
}

/* 10066bb0  FUN_10066bb0  (43 bytes)
 * undefined FUN_10066bb0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_100668f0, FUN_10066a90
 */
void __thiscall
FUN_10066bb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0xf4) = param_1;
  *(undefined4 *)((int)this + 0xf8) = param_2;
  *(undefined4 *)((int)this + 0xfc) = param_3;
  *(undefined4 *)((int)this + 0x100) = param_4;
  return;
}

/* 10066be0  FUN_10066be0  (149 bytes)
 * undefined FUN_10066be0(int param_1)
 */
void __fastcall FUN_10066be0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = __ftol();
  (*gEngfuncs.pfnFillRGBA)
            (0,0,*(int *)(param_1 + 0xc) + -1,*(int *)(param_1 + 0x10) + -1,*(int *)(param_1 + 0xf4)
             ,*(int *)(param_1 + 0xf8),*(int *)(param_1 + 0xfc),(int)lVar3);
  lVar3 = __ftol();
  uVar1 = (undefined4)lVar3;
  lVar3 = __ftol();
  uVar2 = (undefined4)lVar3;
  lVar3 = __ftol();
  FUN_10021ce0(0,0,DAT_100d5908,(char *)(param_1 + 0x104),(int)lVar3,uVar2,uVar1);
  return;
}

/* 10066de0  FUN_10066de0  (142 bytes)
 * undefined FUN_10066de0(int param_1, int param_2)
 * called by: FUN_10066e70
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10066de0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  DAT_10190b90 = _DAT_1019144c - *(float *)(param_1 + 8);
  _DAT_10190b34 = (_DAT_1019144c - *(float *)(param_1 + 8)) * *(float *)(param_2 + 0x3c) * 20.0;
  fVar1 = _DAT_10190b34;
  if (_DAT_10190b34 <= 0.0) {
    fVar1 = -_DAT_10190b34;
  }
  fVar2 = DAT_10190b90;
  if (DAT_10190b90 <= 0.0) {
    fVar2 = -DAT_10190b90;
  }
  if (fVar2 < fVar1) {
    _DAT_10190b34 = DAT_10190b90;
  }
  _DAT_1019144c = _DAT_1019144c - _DAT_10190b34;
  *(float *)(param_1 + 8) = _DAT_1019144c;
  return;
}

/* 10066e70  FUN_10066e70  (879 bytes)
 * float10 FUN_10066e70(float param_1)
 * called by: FUN_10067890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10066e70(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  
  fVar4 = param_1;
  iVar5 = CL_IsThirdPerson();
  if (((iVar5 != 0) || (*(int *)((int)param_1 + 0x4c) != 0)) ||
     ((DAT_101914ec != 0 && ((DAT_101914ec & 8) == 0)))) {
    return (float10)0.0;
  }
  lVar9 = __ftol();
  switch((int)lVar9) {
  case 0:
    fVar2 = 0.1;
    param_1 = 0.0;
    break;
  case 1:
    fVar2 = 0.3;
    param_1 = 0.0;
    break;
  case 2:
    fVar2 = 0.5;
    param_1 = 0.15;
    break;
  case 3:
    fVar2 = 0.7;
    param_1 = 0.5;
    break;
  default:
    fVar2 = 1.0;
    param_1 = 1.0;
  }
  if (((*(int *)((int)fVar4 + 0x50) != 0) && (*(float *)((int)fVar4 + 0x40) != _DAT_10191d70)) &&
     (*(float *)((int)fVar4 + 0x78) != 0.0)) {
    _DAT_10191d7c = DAT_100963e8;
    _DAT_10191d70 = *(float *)((int)fVar4 + 0x40);
    fVar3 = SQRT(*(float *)((int)fVar4 + 0x5c) * *(float *)((int)fVar4 + 0x5c) +
                 *(float *)((int)fVar4 + 0x58) * *(float *)((int)fVar4 + 0x58)) * 0.0033333334;
    if (1.1 < fVar3) {
      fVar3 = 1.1;
    }
    _DAT_10191d74 =
         fVar3 * *(float *)((int)fVar4 + 0x3c) * 5.5 * DAT_100963e8 * 100.0 + _DAT_10191d74;
    if (360.0 < _DAT_10191d74) {
      _DAT_10191d74 = 0.0;
    }
    if (_DAT_10191d78 <= DAT_10191d6c) {
      DAT_10191d6c = SQRT(*(float *)((int)fVar4 + 0x5c) * *(float *)((int)fVar4 + 0x5c) +
                          *(float *)((int)fVar4 + 0x58) * *(float *)((int)fVar4 + 0x58)) * 0.01;
      _DAT_10191d78 = DAT_10191d6c;
    }
    else {
      DAT_10191d6c = (DAT_10191d6c + 2.5) * fVar3 * 0.5;
    }
    fVar8 = (float10)fsin((float10)_DAT_10191d74 * (float10)0.03490658503988659);
    _DAT_10191d60 = (float)(fVar8 * (float10)DAT_10191d6c);
    fVar8 = (float10)fcos((float10)_DAT_10191d74 * (float10)0.017453292519943295);
    _DAT_10191d68 = (float)(fVar8 * (float10)DAT_10191d6c);
    fVar8 = (float10)fsin((float10)_DAT_10191d74 * (float10)0.017453292519943295);
    _DAT_10191d64 = (float)(fVar8 * (float10)DAT_10191d6c);
    fVar3 = DAT_10191d6c * 0.5;
    pfVar6 = (float *)((int)fVar4 + 0x30);
    iVar5 = 0;
    do {
      iVar7 = iVar5 + 4;
      *(float *)((int)&DAT_10191428 + iVar5) =
           _DAT_10191d60 * *pfVar6 * 0.11 +
           pfVar6[-6] * (0.75 - fVar3) + _DAT_10191d64 * pfVar6[-3] * 0.3;
      pfVar6 = pfVar6 + 1;
      iVar5 = iVar7;
    } while (iVar7 < 0xc);
    DAT_10191428 = DAT_10191428 * fVar2;
    DAT_1019142c = DAT_1019142c * fVar2;
    _DAT_10191430 = ((0.5 - DAT_10191d6c * 0.65) + _DAT_10191430) * fVar2;
    _DAT_10190b78 = _DAT_10191d60 * param_1 * 0.25;
    FUN_10066de0(0x10191428,(int)fVar4);
    return (float10)DAT_10191d6c;
  }
  if (0.01 < DAT_10191d6c) {
    DAT_10191d6c = DAT_10191d6c * 0.5;
  }
  fVar3 = DAT_10191d6c * 0.5;
  pfVar6 = (float *)((int)fVar4 + 0x18);
  iVar5 = 0;
  do {
    fVar1 = *pfVar6;
    iVar7 = iVar5 + 4;
    pfVar6 = pfVar6 + 1;
    *(float *)((int)&DAT_10191428 + iVar5) = fVar1 * (0.75 - fVar3);
    iVar5 = iVar7;
  } while (iVar7 < 0xc);
  _DAT_10190b78 = 0.0;
  DAT_10191428 = DAT_10191428 * fVar2;
  DAT_1019142c = DAT_1019142c * fVar2;
  _DAT_10191430 = (0.5 - DAT_10191d6c * 0.65) * fVar2;
  FUN_10066de0(0x10191428,(int)fVar4);
  return (float10)DAT_10191d6c;
}

/* 100671f0  FUN_100671f0  (159 bytes)
 * float10 FUN_100671f0(void)
 * called by: FUN_100675b0
 */
float10 FUN_100671f0(void)

{
  float10 fVar1;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18 [3];
  float local_c [3];
  
  (*gEngfuncs.pfnAngleVectors)((float *)&stack0x00000004,local_c,&local_24,local_18);
  fVar1 = (float10)in_stack_00000010;
  in_stack_00000010 = -NAN;
  fVar1 = (float10)local_24 * fVar1 +
          (float10)fStack_1c * (float10)in_stack_00000018 +
          (float10)fStack_20 * (float10)in_stack_00000014;
  if ((float10)0.0 <= fVar1) {
    in_stack_00000010 = 1.4013e-45;
  }
  if (fVar1 <= (float10)0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 * (float10)0.01 < (float10)in_stack_00000020) {
    return ((fVar1 * (float10)0.01 * (float10)in_stack_0000001c) / (float10)in_stack_00000020) *
           (float10)(int)in_stack_00000010;
  }
  return (float10)in_stack_0000001c * (float10)(int)in_stack_00000010;
}

/* 100672f0  FUN_100672f0  (33 bytes)
 * undefined FUN_100672f0(void)
 * called by: FUN_10026330, FUN_100274d0, FUN_10027e40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100672f0(void)

{
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  _DAT_10191470 = (double)extraout_ST0;
  DAT_10191464 = 1;
  _DAT_10191460 = 0;
  return;
}

/* 10067320  FUN_10067320  (464 bytes)
 * undefined FUN_10067320(int param_1)
 * called by: FUN_10067890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10067320(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 extraout_ST0;
  
  iVar3 = (*gEngfuncs.IsNoClipping)();
  if ((((iVar3 != 0) || (*(int *)(param_1 + 0x50) == 0)) || (*(int *)(param_1 + 0xbc) != 0)) ||
     (*(int *)(param_1 + 0x4c) != 0)) {
    _DAT_10191468 = 0.0;
    _DAT_10191460 = 0.0;
    return;
  }
  if (DAT_10191464 == 0) {
    fVar1 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x80);
    if (fVar1 == 0.0) {
      _DAT_10191460 = 0.0;
      return;
    }
    fVar2 = _DAT_10191460 * *(float *)(param_1 + 0x3c);
    _DAT_10191460 = *(float *)(DAT_101914f4 + 0xc) * *(float *)(param_1 + 0x3c) + _DAT_10191460;
    if (0.0 < fVar1) {
      if (fVar1 < fVar2) {
        _DAT_10191460 = 0.0;
        fVar2 = fVar1;
      }
      *(float *)(param_1 + 0x80) = fVar2 + *(float *)(param_1 + 0x80);
      return;
    }
    if (fVar1 < 0.0) {
      if (-fVar1 < fVar2) {
        _DAT_10191460 = 0.0;
        fVar2 = -fVar1;
      }
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - fVar2;
    }
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 200) + 0x10);
    if (*(float *)(*(int *)(param_1 + 200) + 0x10) <= 0.0) {
      fVar1 = -fVar1;
    }
    if (*(float *)(DAT_100df418 + 0xc) <= fVar1) {
      _DAT_10191468 = _DAT_10191468 + *(float *)(param_1 + 0x3c);
    }
    else {
      _DAT_10191468 = 0.0;
    }
    if (*(float *)(DAT_101913f0 + 0xc) < _DAT_10191468) {
      (*gEngfuncs.GetClientTime)();
      if ((extraout_ST0 != (float10)_DAT_10191470) &&
         ((DAT_10191464 != 0 || (_DAT_10191460 == 0.0)))) {
        _DAT_10191460 = *(float *)(DAT_101914f4 + 0xc);
        DAT_10191464 = 0;
        _DAT_10191468 = 0.0;
      }
      return;
    }
  }
  return;
}

/* 100674a0  FUN_100674a0  (174 bytes)
 * undefined FUN_100674a0(int param_1, float * param_2)
 * called by: FUN_10067890, FUN_10068f70
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100674a0(int param_1,float *param_2)

{
  cl_entity_s *pcVar1;
  
  pcVar1 = (*gEngfuncs.GetViewModel)();
  if (pcVar1 != (cl_entity_s *)0x0) {
    pcVar1->angles[1] = *(vec_t *)(param_1 + 0x10);
    pcVar1->angles[0] = *param_2 - *(float *)(param_1 + 0xc);
    pcVar1->angles[2] = *(vec_t *)(param_1 + 0x14);
    pcVar1->angles[0] = pcVar1->angles[0] - _DAT_10191480 * 1.25;
    pcVar1->angles[1] = _DAT_10191484 * 1.25 + pcVar1->angles[1];
    (pcVar1->curstate).angles[0] = pcVar1->angles[0];
    (pcVar1->curstate).angles[1] = pcVar1->angles[1];
    (pcVar1->curstate).angles[2] = pcVar1->angles[2];
    (pcVar1->latched).prevangles[0] = pcVar1->angles[0];
    (pcVar1->latched).prevangles[1] = pcVar1->angles[1];
    (pcVar1->latched).prevangles[2] = pcVar1->angles[2];
  }
  return;
}

/* 10067550  FUN_10067550  (92 bytes)
 * undefined FUN_10067550(int param_1)
 * called by: FUN_100676e0, FUN_10067890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10067550(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)_DAT_10097244 * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x14) =
       (float)(fVar1 * (float10)_DAT_1009728c * (float10)DAT_10191414 +
              (float10)*(float *)(param_1 + 0x14));
  fVar1 = (float10)fsin((float10)_DAT_1009725c * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0xc) =
       (float)(fVar1 * (float10)_DAT_100972a4 * (float10)DAT_10191414 +
              (float10)*(float *)(param_1 + 0xc));
  fVar1 = (float10)fsin((float10)_DAT_1009722c * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x10) =
       (float)(fVar1 * (float10)_DAT_10097274 * (float10)DAT_10191414 +
              (float10)*(float *)(param_1 + 0x10));
  return;
}

/* 100675b0  FUN_100675b0  (289 bytes)
 * undefined FUN_100675b0(float param_1, int param_2)
 * called by: FUN_10067890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100675b0(float param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uStack0000000c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  
  iVar2 = param_2;
  uStack_10 = 0x100675c3;
  pcVar3 = (*gEngfuncs.GetEntityByIndex)(*(int *)(param_2 + 0xb0));
  if (pcVar3 != (cl_entity_s *)0x0) {
    if (0 < *(int *)(param_2 + 0x260)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      return;
    }
    piVar1 = (int *)(param_2 + 0x50);
    uStack0000000c = 0;
    param_2 = 0x41700000;
    if (*piVar1 == 0) {
      if ((*(uint *)(iVar2 + 0x26c) & 0x10) == 0) {
        if ((*(uint *)(iVar2 + 0x26c) & 0xc00) == 0) {
          uStack0000000c = 0xc0b00000;
        }
        else {
          uStack0000000c = 0xc1200000;
          param_2 = 0x40a00000;
        }
      }
      else {
        uStack0000000c = 0x420c0000;
        param_2 = 0x40f00000;
      }
    }
    uStack_20 = 0x10067652;
    FUN_10002610(auStack_18,(undefined4 *)(iVar2 + 0x58));
    FUN_10002610(auStack_24,pcVar3->angles);
    fVar4 = FUN_100671f0();
    fVar5 = (float10)(float)param_2 * (float10)*(float *)(iVar2 + 0x3c);
    if ((float10)1.0 < fVar5) {
      fVar5 = (float10)1.0;
    }
    _DAT_10191d80 = (float)((fVar4 - (float10)_DAT_10191d80) * fVar5 + (float10)_DAT_10191d80);
    *(float *)(iVar2 + 0x14) = _DAT_10191d80 + *(float *)(iVar2 + 0x14);
    if ((*(int *)(iVar2 + 0x8c) < 1) && (*(float *)(iVar2 + 0x78) != 0.0)) {
      *(undefined4 *)(iVar2 + 0x14) = 0x42a00000;
    }
  }
  return;
}

/* 100676e0  FUN_100676e0  (239 bytes)
 * undefined FUN_100676e0(undefined4 * param_1)
 * called by: V_CalcRefdef
 */
void __cdecl FUN_100676e0(undefined4 *param_1)

{
  undefined4 uVar1;
  cl_entity_s *pcVar2;
  
  (*gEngfuncs.GetLocalPlayer)();
  pcVar2 = (*gEngfuncs.GetViewModel)();
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  pcVar2->model = (model_s *)0x0;
  uVar1 = DAT_10191414;
  DAT_10191414 = 0x3f800000;
  FUN_10067550((int)param_1);
  DAT_10191414 = uVar1;
  DAT_101913f8 = param_1[0x20];
  DAT_101913fc = param_1[0x21];
  DAT_10191400 = param_1[0x22];
  DAT_10190b28 = *param_1;
  DAT_10190b2c = param_1[1];
  DAT_10190b30 = param_1[2];
  DAT_101914d0 = param_1[3];
  DAT_101914d4 = param_1[4];
  DAT_101914d8 = param_1[5];
  return;
}

/* 100677d0  FUN_100677d0  (191 bytes)
 * undefined FUN_100677d0(int param_1)
 * called by: FUN_10067890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100677d0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    if (DAT_100972ac != 0) {
      _DAT_10191d88 = *(float *)(param_1 + 8) - _DAT_10191d84;
    }
    _DAT_10191d84 = *(float *)(param_1 + 8);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x3c) * 15.0;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    _DAT_10191d88 = 0.0;
    _DAT_10191d84 = (*(float *)(param_1 + 8) - _DAT_10191d84) * fVar1 + _DAT_10191d84;
  }
  *(float *)(param_1 + 8) = _DAT_10191d84 + _DAT_10191d88;
  fVar1 = *(float *)(param_1 + 0x3c) * 15.0;
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  _DAT_10191d88 = (1.0 - fVar1) * _DAT_10191d88;
  DAT_100972ac = *(undefined4 *)(param_1 + 0x50);
  return;
}

/* 10067890  FUN_10067890  (4924 bytes)
 * undefined FUN_10067890(float * param_1)
 * called by: V_CalcRefdef
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10067890(float *param_1)

{
  float *pfVar1;
  vec_t *pvVar2;
  float fVar3;
  float *origin;
  cl_entity_s *pcVar4;
  uint uVar5;
  int iVar6;
  cl_entity_s *pcVar7;
  int iVar8;
  pmtrace_s *ppVar9;
  uint uVar10;
  qboolean *pqVar11;
  float10 fVar12;
  longlong lVar13;
  float unaff_retaddr;
  float in_stack_00000018;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  int in_stack_00000038;
  int in_stack_00000054;
  int iVar14;
  int iStack_58;
  float fVar15;
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
  
  origin = param_1;
  DAT_10191d20 = param_1[0x16];
  DAT_10191d24 = param_1[0x17];
  DAT_10191d28 = param_1[0x18];
  FUN_10067320((int)param_1);
  pcVar4 = (*gEngfuncs.GetLocalPlayer)();
  param_1 = (float *)pcVar4;
  uVar5 = FUN_1004c250();
  if ((char)uVar5 == '\0') {
    if ((DAT_1018a60c == '\0') || (lVar13 = __ftol(), (int)lVar13 == 0)) {
      DAT_10097210 = 255.0;
    }
    else {
      DAT_10097210 = 100.0;
    }
    iVar14 = 5;
    if ((double)(DAT_10097214 < DAT_10097210) * _DAT_100cf950 == 0.0) {
      iVar14 = 0x32;
    }
    fVar12 = FUN_10057e90(DAT_10097210,DAT_10097214,(float)iVar14);
    DAT_10097214 = (float)fVar12;
    (pcVar4->curstate).rendermode = 1;
    lVar13 = __ftol();
    (pcVar4->curstate).renderamt = (int)lVar13;
  }
  else {
    (pcVar4->curstate).rendermode = 0;
    (pcVar4->curstate).renderamt = 0xff;
  }
  pcVar4 = (*gEngfuncs.GetViewModel)();
  FUN_10066e70((float)origin);
  if (DAT_101914f0 != 0) {
    *origin = DAT_101913e4;
    origin[1] = DAT_101913e8;
    origin[2] = DAT_101913ec;
    origin[0x19] = DAT_101913e4;
    origin[0x1a] = DAT_101913e8;
    origin[0x1b] = DAT_101913ec;
  }
  fVar15 = origin[0xf] * 15.0;
  *origin = origin[0x19];
  origin[1] = origin[0x1a];
  origin[2] = origin[0x1b];
  if (1.0 < fVar15) {
    fVar15 = 1.0;
  }
  _DAT_10191d90 = (origin[0x1e] - _DAT_10191d90) * fVar15 + _DAT_10191d90;
  origin[2] = _DAT_10191d90 + origin[2];
  FUN_100677d0((int)origin);
  if (DAT_1019149c != 0) {
    origin[0x20] = DAT_10190b6c;
    origin[0x21] = DAT_10190b70;
    origin[0x22] = DAT_10190b74;
  }
  fVar12 = FUN_10058390((float *)&stack0xffffffb8);
  if (fVar12 != (float10)0.0) {
    *(float *)(&DAT_10191908 + (DAT_10191d0c & 0x3f) * 0xc) = origin[0x20];
    *(float *)(&DAT_1019190c + (DAT_10191d0c & 0x3f) * 0xc) = origin[0x21];
    *(float *)(&DAT_10191910 + (DAT_10191d0c & 0x3f) * 0xc) = origin[0x22];
    *(float *)(&DAT_10191c08 + (DAT_10191d0c & 0x3f) * 4) = origin[0x10];
    DAT_10191d0c = DAT_10191d0c + 1;
    _DAT_10190b84 = origin[0x20];
    _DAT_10190b88 = origin[0x21];
    _DAT_10190b8c = origin[0x22];
  }
  if (((DAT_100df430 != 0) && (*(float *)(DAT_100df430 + 0xc) != 0.0)) &&
     (((byte)DAT_101914ec & 2) != 0)) {
    if (*(float *)(DAT_100df430 + 0xc) < 0.0) {
      (*gEngfuncs.Cvar_SetValue)(s_cl_vsmoothing_1009423c,0.0);
    }
    fVar15 = origin[0x10] - *(float *)(DAT_100df430 + 0xc);
    iVar14 = 1;
    uVar5 = DAT_10191d0c - 2;
    do {
      if (*(float *)(&DAT_10191c08 + (uVar5 & 0x3f) * 4) <= fVar15) {
        if ((iVar14 < 0x3f) &&
           (uVar10 = uVar5 & 0x3f, *(float *)(&DAT_10191c08 + uVar10 * 4) != 0.0)) {
          uVar5 = uVar5 + 1 & 0x3f;
          if (0.0 < *(float *)(&DAT_10191c08 + uVar5 * 4) - *(float *)(&DAT_10191c08 + uVar10 * 4))
          {
            fVar15 = (fVar15 - *(float *)(&DAT_10191c08 + uVar10 * 4)) /
                     (*(float *)(&DAT_10191c08 + uVar5 * 4) - *(float *)(&DAT_10191c08 + uVar10 * 4)
                     );
            if (1.0 < fVar15) {
              fVar15 = 1.0;
            }
            FUN_10029cf0((float *)(&DAT_10191908 + uVar10 * 0xc),
                         (float *)(&DAT_10191908 + uVar5 * 0xc),origin + 0x20,fVar15);
            DAT_10190b6c = origin[0x20];
            DAT_10190b70 = origin[0x21];
            DAT_10190b74 = origin[0x22];
          }
        }
        break;
      }
      iVar14 = iVar14 + 1;
      uVar5 = uVar5 - 1;
    } while (iVar14 < 0x3f);
  }
  FUN_10057ed0((float *)&DAT_10191d10,(float *)&DAT_101914f8,(float *)&DAT_10190b38,origin[0xf]);
  pfVar1 = origin + 0x20;
  *pfVar1 = _DAT_10190b38 + origin[0x20];
  origin[0x21] = _DAT_10190b3c + origin[0x21];
  origin[0x22] = _DAT_10190b40 + origin[0x22];
  _DAT_10190b38 = 0.0;
  _DAT_10190b3c = 0.0;
  _DAT_10190b40 = 0.0;
  FUN_10058000(&DAT_1018cac8,pfVar1,origin[0xf]);
  *pfVar1 = _DAT_10190b78 * 0.1 + *pfVar1;
  _DAT_10190b78 = 0.0;
  origin[3] = *pfVar1;
  origin[4] = origin[0x21];
  origin[5] = origin[0x22];
  (*gEngfuncs.V_CalcShake)();
  (*gEngfuncs.V_ApplyShake)(origin,origin + 3,1.0);
  *origin = *origin + 0.03125;
  origin[1] = origin[1] + 0.03125;
  origin[2] = origin[2] + 0.03125;
  fVar15 = 0.0;
  if (1 < (int)origin[0x15]) {
    lVar13 = __ftol();
    iVar14 = (int)lVar13;
    if (((origin[0x30] != 0.0) && (iVar6 = (*gEngfuncs.PM_WaterEntity)(origin + 0x19), -1 < iVar6))
       && ((iVar6 < (int)origin[0x2e] &&
           ((pcVar7 = (*gEngfuncs.GetEntityByIndex)(iVar6), pcVar7 != (cl_entity_s *)0x0 &&
            (pcVar7->model != (model_s *)0x0)))))) {
      lVar13 = __ftol();
      iVar14 = (int)lVar13;
      iStack_58 = iVar14;
    }
    fVar3 = (float)iStack_58;
    if (origin[0x15] == 2.8026e-45) {
      fVar15 = origin[2] - fVar3;
      iVar6 = 0;
      if (0 < iVar14) {
        do {
          iVar8 = (*gEngfuncs.PM_PointContents)((float *)&stack0xffffffb4,(int *)0x0);
          if (-3 < iVar8) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar14);
      }
      fVar15 = fVar3 + fVar15;
    }
    else {
      fVar15 = fVar3 + origin[2];
      iVar6 = 0;
      if (0 < iVar14) {
        do {
          iVar8 = (*gEngfuncs.PM_PointContents)((float *)&stack0xffffffb4,(int *)0x0);
          if (iVar8 < -2) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar14);
      }
      fVar15 = fVar15 - fVar3;
    }
    fVar15 = fVar15 - origin[2];
  }
  origin[2] = fVar15 + origin[2];
  FUN_100675b0(in_stack_00000018,(int)origin);
  FUN_10067550((int)origin);
  fStack_28 = origin[0x20];
  fStack_20 = origin[0x22];
  fStack_24 = origin[0x21];
  (*gEngfuncs.pfnAngleVectors)(&fStack_28,origin + 6,origin + 9,origin + 0xc);
  iVar14 = CL_IsThirdPerson();
  if (iVar14 == 0) goto LAB_1006850e;
  if ((DAT_101913f4 & 1) == 0) {
    DAT_101913f4 = DAT_101913f4 | 1;
    FUN_1006af63(0x10068bf0);
  }
  if ((28.0 <= origin[0x1e]) || (DAT_10191da0 = '\x01', origin[0x1e] == 0.0)) {
    DAT_10191da0 = '\0';
  }
  _DAT_10191458 = 0.0;
  DAT_10191454 = 0.0;
  DAT_10191450 = 0.0;
  CL_CameraOffset(&DAT_10191450);
  fStack_28 = 0.0;
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&stack0xffffffd0,&fStack_c,&stack0x00000018,(float *)&stack0x0000000c);
  lVar13 = __ftol();
  iVar14 = (int)lVar13;
  if (iVar14 == 1) {
    DAT_10191450 = -48.0;
    DAT_10191454 = -16.0;
LAB_10068033:
    _DAT_10191458 = 12.0;
  }
  else {
    if (iVar14 == 2) {
      DAT_10191450 = -90.0;
      DAT_10191454 = 0.0;
      goto LAB_10068033;
    }
    if (iVar14 != 3) {
      DAT_10191450 = -48.0;
      DAT_10191454 = 16.0;
      goto LAB_10068033;
    }
    DAT_10191450 = -*(float *)(DAT_100df54c + 0xc);
    DAT_10191454 = *(float *)(DAT_100df484 + 0xc);
    _DAT_10191458 = *(float *)(DAT_100df5a8 + 0xc);
  }
  if ((DAT_10191450 <= -128.0) || (DAT_10191450 < 24.0)) {
    if (DAT_10191450 <= -128.0) {
      DAT_10191450 = -128.0;
    }
  }
  else {
    DAT_10191450 = 24.0;
  }
  if ((DAT_10191454 <= -24.0) || (DAT_10191454 < 24.0)) {
    if (DAT_10191454 <= -24.0) {
      DAT_10191454 = -24.0;
    }
  }
  else {
    DAT_10191454 = 24.0;
  }
  if ((_DAT_10191458 <= -24.0) || (_DAT_10191458 < 24.0)) {
    if (_DAT_10191458 <= -24.0) {
      _DAT_10191458 = -24.0;
    }
  }
  else {
    _DAT_10191458 = 24.0;
  }
  if ((DAT_10191da0 == '\0') || (32.0 <= _DAT_10191458)) {
    fVar15 = -_DAT_10191da4;
  }
  else {
    fVar15 = (32.0 - _DAT_10191458) - _DAT_10191da4;
  }
  _DAT_10191da4 = fVar15 * origin[0xf] * 5.0 + _DAT_10191da4;
  if ((int)origin[0x23] < 1) {
    fVar15 = ((-180.0 - DAT_10191450) - _DAT_10191da8) * origin[0xf];
  }
  else {
    if (((*(uint *)(in_stack_00000038 + 0x26c) & 0x130c30) == 0) || (DAT_10191450 <= -128.0)) {
      fVar15 = -_DAT_10191da8;
    }
    else {
      fVar15 = (-92.0 - DAT_10191450) - _DAT_10191da8;
    }
    fVar15 = fVar15 * origin[0xf];
  }
  _DAT_10191da8 = fVar15 * 5.0 + _DAT_10191da8;
  DAT_10191450 = DAT_10191450 + _DAT_10191da8;
  if (0 < (int)origin[0x23]) {
    _DAT_10191458 = _DAT_10191458 + _DAT_10191da4;
  }
  if (DAT_10191450 == 0.0) {
    fVar12 = (float10)fsin((float10)fStack_20 * (float10)0.017453292519943295);
    _DAT_10191d38 = (float)fVar12;
    if (fVar12 < (float10)0.0) {
      _DAT_10191d38 = 0.0;
    }
    *origin = *(float *)(in_stack_00000038 + 0xb48) + origin[0x1c];
    origin[1] = *(float *)(in_stack_00000038 + 0xb4c) + origin[0x1d];
    origin[2] = (float)(byte)((-(DAT_10191da0 != '\0') & 7U) + 1) +
                *(float *)(in_stack_00000038 + 0xb50) + origin[0x1e];
    iVar14 = 0;
    do {
      if (DAT_10191da0 != '\0') {
        *(float *)(iVar14 + (int)origin) =
             (1.0 - _DAT_10191d38) * *(float *)((int)&param_1 + iVar14) * 8.0 +
             *(float *)(iVar14 + (int)origin);
      }
      iVar6 = iVar14 + 4;
      *(float *)(iVar14 + (int)origin) =
           _DAT_10191d38 * *(float *)((int)&param_1 + iVar14) * 4.0 +
           _DAT_10191d38 * *(float *)(&stack0x0000001c + iVar14) * 18.0 +
           *(float *)(iVar14 + (int)origin);
      iVar14 = iVar6;
    } while (iVar6 < 0xc);
    FUN_100677d0((int)origin);
  }
  else {
    iVar14 = 0;
    do {
      iVar6 = iVar14 + 4;
      *(float *)(iVar14 + (int)origin) =
           DAT_10191450 * *(float *)((int)&param_1 + iVar14) +
           _DAT_10191458 * *(float *)(&stack0x0000001c + iVar14) +
           DAT_10191454 * *(float *)(&stack0x00000028 + iVar14) + *(float *)(iVar14 + (int)origin);
      iVar14 = iVar6;
    } while (iVar6 < 0xc);
    if ((DAT_101913f4 & 2) == 0) {
      DAT_101913f4 = DAT_101913f4 | 2;
      FUN_1006af63(0x10068be0);
    }
    if ((DAT_101913f4 & 4) == 0) {
      DAT_101913f4 = DAT_101913f4 | 4;
      FUN_1006af63(0x10068bd0);
    }
    _DAT_10191408 = *(undefined4 *)(in_stack_00000038 + 0xb48);
    _DAT_1019140c = *(undefined4 *)(in_stack_00000038 + 0xb4c);
    _DAT_10191410 = *(float *)(in_stack_00000038 + 0xb50) + _DAT_10191458 + 28.0;
    iVar14 = (*gEngfuncs.PM_PointContents)((float *)&DAT_10191408,(int *)0x0);
    if (iVar14 == -2) {
      _DAT_10191408 = *(undefined4 *)(in_stack_00000038 + 0xb48);
      _DAT_1019140c = *(undefined4 *)(in_stack_00000038 + 0xb4c);
      _DAT_10191410 = *(float *)(in_stack_00000038 + 0xb50);
    }
    ppVar9 = (*gEngfuncs.PM_TraceLine)((float *)&DAT_10191408,origin,0,2,-1);
    pqVar11 = &DAT_101913a0;
    for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pqVar11 = ppVar9->allsolid;
      ppVar9 = (pmtrace_s *)&ppVar9->startsolid;
      pqVar11 = pqVar11 + 1;
    }
    if (_DAT_101913b0 != 1.0) {
      iVar14 = 0;
      do {
        iVar6 = iVar14 + 4;
        *(float *)((int)origin + iVar14) =
             *(float *)((int)&DAT_101913c0 + iVar14) * 4.0 + *(float *)((int)&DAT_101913b4 + iVar14)
        ;
        iVar14 = iVar6;
      } while (iVar6 < 0xc);
      origin[2] = origin[2] + 1.0;
    }
  }
  if (in_stack_00000054 != 0) {
    DAT_10191d9c = _DAT_10191d94 - *(float *)(in_stack_00000054 + 0xb50);
    _DAT_10191d98 = (_DAT_10191d94 - *(float *)(in_stack_00000054 + 0xb50)) * origin[0xf] * 16.0;
    fVar15 = _DAT_10191d98;
    if (_DAT_10191d98 <= 0.0) {
      fVar15 = -_DAT_10191d98;
    }
    fVar3 = DAT_10191d9c;
    if (DAT_10191d9c <= 0.0) {
      fVar3 = -DAT_10191d9c;
    }
    if (fVar3 < fVar15) {
      _DAT_10191d98 = DAT_10191d9c;
    }
    _DAT_10191d94 = _DAT_10191d94 - _DAT_10191d98;
    *(float *)(in_stack_00000054 + 0xb50) = _DAT_10191d94;
  }
LAB_1006850e:
  if (pcVar4 != (cl_entity_s *)0x0) {
    pcVar4->angles[0] = origin[0x20];
    pcVar4->angles[1] = origin[0x21];
    pcVar4->angles[2] = origin[0x22];
    FUN_100674a0((int)origin,&fStack_18);
    pvVar2 = pcVar4->origin;
    *pvVar2 = *origin;
    pcVar4->origin[1] = origin[1];
    pcVar4->origin[2] = origin[2];
    (*gEngfuncs.V_ApplyShake)(pvVar2,pcVar4->angles,0.9);
    *pvVar2 = DAT_10191428 + *pvVar2;
    pcVar4->origin[1] = DAT_1019142c + pcVar4->origin[1];
    pcVar4->origin[2] = _DAT_10191430 + pcVar4->origin[2];
    fStack_10 = (float)(0x50 - DAT_100cf978);
    fVar15 = (float)(int)fStack_10 * 0.15;
    *pvVar2 = fVar15 * origin[6] + *pvVar2;
    pcVar4->origin[1] = fVar15 * origin[7] + pcVar4->origin[1];
    fVar15 = (fVar15 * origin[8] + pcVar4->origin[2]) - 1.0;
    pcVar4->origin[2] = fVar15;
    if (origin[0x27] == 110.0) {
      pcVar4->origin[2] = fVar15 + 1.0;
    }
    else if (origin[0x27] == 100.0) {
      pcVar4->origin[2] = fVar15 + 2.0;
    }
    else if (origin[0x27] == 90.0) {
      pcVar4->origin[2] = fVar15 + 1.0;
    }
    else if (origin[0x27] == 80.0) {
      pcVar4->origin[2] = fVar15 + 0.5;
    }
  }
  fVar15 = origin[3];
  origin[3] = origin[0x28] + fVar15;
  fStack_1c = origin[0x29] + origin[4];
  origin[4] = fStack_1c;
  fStack_14 = origin[0x2a] + origin[5];
  origin[5] = fStack_14;
  origin[3] = _DAT_10191480 + origin[0x28] + fVar15;
  origin[4] = _DAT_10191484 + fStack_1c;
  origin[5] = _DAT_10191488 + fStack_14;
  FUN_10069e40(origin[0xf],(float *)&DAT_10191480);
  fStack_10 = origin[0x19] - _DAT_10191434;
  fStack_c = origin[0x1a] - _DAT_10191438;
  fStack_8 = origin[0x1b] - _DAT_1019143c;
  fVar12 = FUN_10058390(&fStack_10);
  if (fVar12 != (float10)0.0) {
    *(float *)(&DAT_10191508 + (DAT_10191d08 & 0x3f) * 0xc) = origin[0x19];
    *(float *)(&DAT_1019150c + (DAT_10191d08 & 0x3f) * 0xc) = origin[0x1a];
    *(float *)(&DAT_10191510 + (DAT_10191d08 & 0x3f) * 0xc) = origin[0x1b];
    *(float *)(&DAT_10191808 + (DAT_10191d08 & 0x3f) * 4) = origin[0x10];
    DAT_10191d08 = DAT_10191d08 + 1;
    _DAT_10191434 = origin[0x19];
    _DAT_10191438 = origin[0x1a];
    _DAT_1019143c = origin[0x1b];
  }
  if (((DAT_100df430 != 0) && (*(float *)(DAT_100df430 + 0xc) != 0.0)) &&
     ((((byte)DAT_101914ec & 4) != 0 || ((origin[0x31] != 0.0 && (1 < (int)origin[0x2b])))))) {
    if (*(float *)(DAT_100df430 + 0xc) < 0.0) {
      (*gEngfuncs.Cvar_SetValue)(s_cl_vsmoothing_1009423c,0.0);
    }
    fStack_1c = origin[0x10] - *(float *)(DAT_100df430 + 0xc);
    iVar14 = 1;
    uVar5 = DAT_10191d08 - 2;
    do {
      if (*(float *)(&DAT_10191808 + (uVar5 & 0x3f) * 4) <= fStack_1c) {
        if ((iVar14 < 0x3f) &&
           (uVar10 = uVar5 & 0x3f, *(float *)(&DAT_10191808 + uVar10 * 4) != 0.0)) {
          uVar5 = uVar5 + 1 & 0x3f;
          if (0.0 < *(float *)(&DAT_10191808 + uVar5 * 4) - *(float *)(&DAT_10191808 + uVar10 * 4))
          {
            fVar15 = (fStack_1c - *(float *)(&DAT_10191808 + uVar10 * 4)) /
                     (*(float *)(&DAT_10191808 + uVar5 * 4) - *(float *)(&DAT_10191808 + uVar10 * 4)
                     );
            if (1.0 < fVar15) {
              fVar15 = 1.0;
            }
            iVar6 = uVar10 * 0xc;
            iVar14 = uVar5 * 0xc;
            fStack_10 = *(float *)(&DAT_10191508 + iVar14) - *(float *)(&DAT_10191508 + iVar6);
            fStack_c = *(float *)(&DAT_1019150c + iVar14) - *(float *)(&DAT_1019150c + iVar6);
            fStack_8 = *(float *)(&DAT_10191510 + iVar14) - *(float *)(&DAT_10191510 + iVar6);
            FUN_10058410((float *)(&DAT_10191508 + iVar6),fVar15,&fStack_10,&stack0x0000002c);
            fVar12 = FUN_10058390(&fStack_10);
            if (fVar12 < (float10)64.0) {
              in_stack_0000002c = in_stack_0000002c - origin[0x19];
              in_stack_00000030 = in_stack_00000030 - origin[0x1a];
              in_stack_00000034 = in_stack_00000034 - origin[0x1b];
              origin[0x19] = in_stack_0000002c + origin[0x19];
              origin[0x1a] = in_stack_00000030 + origin[0x1a];
              origin[0x1b] = in_stack_00000034 + origin[0x1b];
              *origin = in_stack_0000002c + *origin;
              origin[1] = in_stack_00000030 + origin[1];
              origin[2] = in_stack_00000034 + origin[2];
              pcVar4->origin[0] = in_stack_0000002c + pcVar4->origin[0];
              pcVar4->origin[1] = in_stack_00000030 + pcVar4->origin[1];
              pcVar4->origin[2] = in_stack_00000034 + pcVar4->origin[2];
              DAT_101913e4 = origin[0x19];
              DAT_101913e8 = origin[0x1a];
              DAT_101913ec = origin[0x1b];
            }
          }
        }
        break;
      }
      iVar14 = iVar14 + 1;
      uVar5 = uVar5 - 1;
    } while (iVar14 < 0x3f);
  }
  DAT_101913f8 = origin[0x20];
  DAT_101913fc = origin[0x21];
  DAT_10191400 = origin[0x22];
  pvVar2 = origin + 3;
  DAT_101914d0 = *pvVar2;
  DAT_101914d4 = origin[4];
  DAT_101914d8 = origin[5];
  fStack_10 = DAT_101914d0;
  fStack_c = DAT_101914d4;
  fStack_8 = DAT_101914d8;
  iVar14 = CL_IsThirdPerson();
  if (iVar14 != 0) {
    origin[4] = unaff_retaddr;
    *pvVar2 = fStack_4;
    origin[5] = (float)param_1;
    if (fStack_4 <= 180.0) {
      fVar15 = fStack_4;
      if (fStack_4 < -180.0) {
        fVar15 = fStack_4 + 360.0;
      }
    }
    else {
      fVar15 = fStack_4 - 360.0;
    }
    fVar15 = fVar15 * -0.33333334;
    *(float *)(in_stack_00000054 + 0xb54) = fVar15;
    *(float *)(in_stack_00000054 + 0x2cc) = fVar15;
    *(float *)(in_stack_00000054 + 0x178) = fVar15;
    *(float *)(in_stack_00000054 + 0xb28) = fVar15;
  }
  if (((int)origin[0x2b] < (int)origin[0x2c]) &&
     (pcVar7 = (*gEngfuncs.GetEntityByIndex)((int)origin[0x2c]), pcVar7 != (cl_entity_s *)0x0)) {
    *origin = pcVar7->origin[0];
    origin[1] = pcVar7->origin[1];
    origin[2] = pcVar7->origin[2];
    DAT_101914d0 = pcVar7->angles[0];
    *pvVar2 = DAT_101914d0;
    origin[4] = pcVar7->angles[1];
    origin[5] = pcVar7->angles[2];
    DAT_101914d4 = origin[4];
    DAT_101914d8 = origin[5];
    fStack_4 = DAT_101914d8;
  }
  _DAT_10191404 = origin[0x10];
  DAT_10190b28 = *origin;
  DAT_10190b2c = origin[1];
  DAT_10190b30 = origin[2];
  fStack_10 = DAT_10190b28;
  fStack_c = DAT_10190b2c;
  fStack_8 = DAT_10190b30;
  iVar14 = CL_IsThirdPerson();
  if (iVar14 == 0) {
    DAT_101914a0 = (DAT_100cf978 < 0x28) - 1 & (uint)pcVar4;
  }
  else {
    DAT_101914a0 = 0;
    DAT_10191440 = origin[0x1c] + *(float *)(in_stack_00000054 + 0xb48);
    DAT_10191444 = origin[0x1d] + *(float *)(in_stack_00000054 + 0xb4c);
    DAT_10191448 = origin[0x1e] + *(float *)(in_stack_00000054 + 0xb50);
  }
  DAT_10190b50 = *pvVar2;
  DAT_10190b54 = origin[4];
  DAT_10190b58 = origin[5];
  return;
}

/* 10068c00  FUN_10068c00  (310 bytes)
 * undefined FUN_10068c00(undefined4 param_1, float * param_2, float param_3, int param_4, float * param_5)
 * called by: FUN_10068d40
 */
void __cdecl FUN_10068c00(float *param_1,float *param_2,float param_3,int param_4,float *param_5)

{
  pmtrace_s *ppVar1;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  (*gEngfuncs.pfnAngleVectors)(param_1,&local_24,(float *)0x0,(float *)0x0);
  FUN_100583e0(&local_24,-1.0,&local_24);
  fStack_3c = *param_2;
  fStack_38 = param_2[1];
  fStack_34 = param_2[2];
  FUN_10058410(&fStack_3c,param_3,&local_24,&fStack_18);
  while( true ) {
    ppVar1 = (*gEngfuncs.PM_TraceLine)(&fStack_3c,&fStack_18,1,2,-1);
    if ((ppVar1->ent < 1) || (param_4 == 0)) break;
    fStack_c = ppVar1->endpos[0] - fStack_18;
    fStack_8 = ppVar1->endpos[1] - fStack_14;
    fStack_4 = ppVar1->endpos[2] - fStack_10;
    FUN_10002610(&fStack_30,&fStack_c);
    if (SQRT(fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28) <= 1.0) break;
    fStack_3c = local_24 + ppVar1->endpos[0];
    fStack_38 = fStack_20 + ppVar1->endpos[1];
    fStack_34 = fStack_1c + ppVar1->endpos[2];
  }
  FUN_10058410(ppVar1->endpos,4.0,(ppVar1->plane).normal,param_5);
  return;
}

/* 10068d40  FUN_10068d40  (210 bytes)
 * undefined FUN_10068d40(int param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_10068f70
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10068d40(int param_1,float *param_2,float *param_3,float *param_4)

{
  cl_entity_s *pcVar1;
  
  if (param_1 == 0) {
    *param_4 = _DAT_10191d2c;
    param_4[1] = DAT_10191d30;
    param_4[2] = DAT_10191d34;
    *param_3 = DAT_10191d40;
    param_3[1] = DAT_10191d44;
    param_3[2] = DAT_10191d48;
    return;
  }
  pcVar1 = (*gEngfuncs.GetEntityByIndex)(param_1);
  if (pcVar1 != (cl_entity_s *)0x0) {
    if (param_2 == (float *)0x0) {
      *param_4 = pcVar1->angles[0];
      param_4[1] = pcVar1->angles[1];
      param_4[2] = pcVar1->angles[2];
      *param_4 = *param_4 * -1.0;
    }
    else {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
    }
    *param_3 = pcVar1->origin[0];
    param_3[1] = pcVar1->origin[1];
    param_3[2] = pcVar1->origin[2] + 28.0;
    FUN_10068c00(param_4,param_3,90.0,0,param_3);
  }
  return;
}

/* 10068e20  FUN_10068e20  (201 bytes)
 * undefined FUN_10068e20(int param_1, undefined4 * param_2, float * param_3)
 * called by: FUN_1001c620, FUN_10024160, FUN_1003b750, FUN_1003d600, FUN_10068f70
 */
void __cdecl FUN_10068e20(int param_1,undefined4 *param_2,float *param_3)

{
  cl_entity_s *pcVar1;
  
  pcVar1 = (*gEngfuncs.GetEntityByIndex)(param_1);
  if (((pcVar1 != (cl_entity_s *)0x0) && (pcVar1->player != 0)) &&
     (*(int *)(&DAT_1018fbd8 + param_1 * 0x14) != 0)) {
    *param_2 = pcVar1->origin[0];
    param_2[1] = pcVar1->origin[1];
    param_2[2] = pcVar1->origin[2];
    *param_3 = pcVar1->angles[0];
    param_3[1] = pcVar1->angles[1];
    param_3[2] = pcVar1->angles[2];
    *param_3 = *param_3 * -3.1415927;
    if ((pcVar1->curstate).solid == 0) {
      param_3[2] = 80.0;
      param_2[2] = (float)param_2[2] - 8.0;
      return;
    }
    if (((pcVar1->curstate).iuser4 & 0x400000U) == 0) {
      if ((pcVar1->curstate).usehull == 1) {
        param_2[2] = (float)param_2[2] + 16.0;
        return;
      }
      param_2[2] = (float)param_2[2] + 28.0;
    }
  }
  return;
}

/* 10068ef0  FUN_10068ef0  (118 bytes)
 * int FUN_10068ef0(undefined4 param_1)
 * called by: FUN_10068f70
 */
int __cdecl FUN_10068ef0(undefined4 param_1)

{
  byte_conflict bVar1;
  byte_conflict *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte_conflict *pbVar6;
  int iVar7;
  
  pbVar2 = (byte_conflict *)(*DAT_100ea7d4)(param_1);
  if (pbVar2 == (byte_conflict *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pbVar6 = pbVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != '\0');
  iVar7 = 0;
  while( true ) {
    puVar3 = FUN_100071c0(iVar7);
    iVar4 = FUN_10076e60(pbVar2,(char *)((int)puVar3 + 0x172),(void *)(~uVar5 - 1));
    if (iVar4 == 0) {
      return iVar7;
    }
    iVar4 = FUN_10076e60(pbVar2,(char *)((int)puVar3 + 0x1b2),(void *)(~uVar5 - 1));
    if (iVar4 == 0) break;
    iVar7 = iVar7 + 1;
    if (0x25 < iVar7) {
      return -1;
    }
  }
  return iVar7;
}

/* 10068f70  FUN_10068f70  (3055 bytes)
 * undefined FUN_10068f70(float * param_1)
 * called by: V_CalcRefdef
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10068f70(float *param_1)

{
  vec_t *origin;
  vec_t *angles;
  float fVar1;
  float *pfVar2;
  cl_entity_s *pcVar3;
  cl_entity_s *pcVar4;
  vec_t *pvVar5;
  undefined4 *puVar6;
  model_s *pmVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float10 fVar13;
  longlong lVar14;
  float unaff_retaddr;
  float *in_stack_00000008;
  _func_410 **pp_Stack00000018;
  int iStack0000001c;
  float in_stack_00000028;
  float fStack_20;
  cl_entity_s *pcStack_1c;
  float *pfStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_8;
  cl_entity_s *pcStack_4;
  
  if ((DAT_101914dc & 1) == 0) {
    DAT_101914dc = DAT_101914dc | 1;
    _DAT_10191418 = 0.0;
    _DAT_1019141c = 0.0;
    _DAT_10191420 = 0.0;
    FUN_1006af63(0x10069b80);
  }
  pcVar3 = (*gEngfuncs.GetEntityByIndex)(DAT_10190b20);
  pcVar4 = (*gEngfuncs.GetViewModel)();
  pfVar2 = in_stack_00000008;
  DAT_10191490 = in_stack_00000008[0x19];
  *in_stack_00000008 = DAT_10191490;
  in_stack_00000008[1] = in_stack_00000008[0x1a];
  in_stack_00000008[2] = in_stack_00000008[0x1b];
  DAT_10191494 = in_stack_00000008[0x1a];
  DAT_10191498 = in_stack_00000008[0x1b];
  DAT_101913f8 = in_stack_00000008[0x20];
  DAT_101913fc = in_stack_00000008[0x21];
  DAT_10191400 = in_stack_00000008[0x22];
  DAT_101914d0 = in_stack_00000008[3];
  DAT_101914d4 = in_stack_00000008[4];
  DAT_101914d8 = in_stack_00000008[5];
  DAT_10190b28 = *in_stack_00000008;
  DAT_10190b2c = in_stack_00000008[1];
  DAT_10190b30 = in_stack_00000008[2];
  if (DAT_101914f0 == 0) {
    DAT_101913e4 = *in_stack_00000008;
    DAT_101913e8 = in_stack_00000008[1];
    DAT_101913ec = in_stack_00000008[2];
  }
  else {
    *in_stack_00000008 = DAT_101913e4;
    in_stack_00000008[1] = DAT_101913e8;
    in_stack_00000008[2] = DAT_101913ec;
  }
  in_stack_00000008[3] = in_stack_00000008[0x20];
  in_stack_00000008[4] = in_stack_00000008[0x21];
  in_stack_00000008[5] = in_stack_00000008[0x22];
  if (DAT_1019149c == 0) {
    DAT_10190b70 = in_stack_00000008[4];
    DAT_10190b74 = in_stack_00000008[5];
    DAT_10190b6c = in_stack_00000008[0x20];
  }
  else {
    in_stack_00000008[3] = DAT_10190b6c;
    in_stack_00000008[4] = DAT_10190b70;
    in_stack_00000008[5] = DAT_10190b74;
  }
  if (in_stack_00000008[0x38] == 0.0) {
    fStack_14 = in_stack_00000008[3] - _DAT_10190b44;
    fStack_10 = in_stack_00000008[4] - _DAT_10190b48;
    fStack_c = in_stack_00000008[5] - _DAT_10190b4c;
    fVar13 = FUN_10058390(&fStack_14);
    if (fVar13 != (float10)0.0) {
      *(float *)(&DAT_10190f98 + (DAT_1019139c & 0x3f) * 0xc) = pfVar2[3];
      *(float *)(&DAT_10190f9c + (DAT_1019139c & 0x3f) * 0xc) = pfVar2[4];
      *(float *)(&DAT_10190fa0 + (DAT_1019139c & 0x3f) * 0xc) = pfVar2[5];
      *(float *)(&DAT_10191298 + (DAT_1019139c & 0x3f) * 4) = pfVar2[0x10];
      DAT_1019139c = DAT_1019139c + 1;
      _DAT_10190b44 = pfVar2[3];
      _DAT_10190b48 = pfVar2[4];
      _DAT_10190b4c = pfVar2[5];
    }
    if (((DAT_100df430 != 0) && (*(float *)(DAT_100df430 + 0xc) != 0.0)) &&
       (((byte)DAT_101914ec & 2) != 0)) {
      in_stack_00000008 = (float *)(pfVar2[0x10] - *(float *)(DAT_100df430 + 0xc));
      iVar8 = 1;
      uVar12 = DAT_1019139c - 2;
      do {
        if (*(float *)(&DAT_10191298 + (uVar12 & 0x3f) * 4) <= (float)in_stack_00000008) {
          if ((iVar8 < 0x3f) &&
             (uVar9 = uVar12 & 0x3f, *(float *)(&DAT_10191298 + uVar9 * 4) != 0.0)) {
            (*gEngfuncs.pfnAngleVectors)
                      ((float *)(&DAT_10190f98 + uVar9 * 0xc),&fStack_20,(float *)0x0,(float *)0x0);
            uVar12 = uVar12 + 1 & 0x3f;
            pfStack_18 = (float *)(&DAT_10190f98 + uVar12 * 0xc);
            (*gEngfuncs.pfnAngleVectors)
                      (pfStack_18,(float *)&stack0x00000008,(float *)0x0,(float *)0x0);
            fVar13 = FUN_10029d70((float *)&stack0x00000000,(float *)&stack0x00000018);
            fStack_c = (float)fVar13;
            if ((0.0 < *(float *)(&DAT_10191298 + uVar12 * 4) -
                       *(float *)(&DAT_10191298 + uVar9 * 4)) && (fStack_c < 22.5)) {
              fVar1 = (in_stack_00000028 - *(float *)(&DAT_10191298 + uVar9 * 4)) /
                      (*(float *)(&DAT_10191298 + uVar12 * 4) -
                      *(float *)(&DAT_10191298 + uVar9 * 4));
              if (1.0 < fVar1) {
                fVar1 = 1.0;
              }
              pcVar3 = pcStack_4;
              FUN_10029cf0((float *)pcStack_4,pfStack_8,&DAT_10190b6c,fVar1);
              pfVar2[3] = DAT_10190b6c;
              pfVar2[4] = DAT_10190b70;
              pfVar2[5] = DAT_10190b74;
            }
          }
          break;
        }
        iVar8 = iVar8 + 1;
        uVar12 = uVar12 - 1;
      } while (iVar8 < 0x3f);
    }
    fStack_14 = *pfVar2 - _DAT_10190b60;
    fStack_10 = pfVar2[1] - _DAT_10190b64;
    fStack_c = pfVar2[2] - _DAT_10190b68;
    fVar13 = FUN_10058390(&fStack_14);
    if (fVar13 != (float10)0.0) {
      *(float *)(&DAT_10190b98 + (DAT_10191398 & 0x3f) * 0xc) = *pfVar2;
      *(float *)(&DAT_10190b9c + (DAT_10191398 & 0x3f) * 0xc) = pfVar2[1];
      *(float *)(&DAT_10190ba0 + (DAT_10191398 & 0x3f) * 0xc) = pfVar2[2];
      *(float *)(&DAT_10190e98 + (DAT_10191398 & 0x3f) * 4) = pfVar2[0x10];
      DAT_10191398 = DAT_10191398 + 1;
    }
    if (((DAT_100df430 != 0) && (*(float *)(DAT_100df430 + 0xc) != 0.0)) &&
       (((byte)DAT_101914ec & 4) != 0)) {
      in_stack_00000008 = (float *)(pfVar2[0x10] - *(float *)(DAT_100df430 + 0xc));
      iVar8 = 1;
      uVar12 = DAT_10191398 - 2;
      do {
        if (*(float *)(&DAT_10190e98 + (uVar12 & 0x3f) * 4) <= (float)in_stack_00000008) {
          if ((iVar8 < 0x3f) &&
             (uVar9 = uVar12 & 0x3f, *(float *)(&DAT_10190e98 + uVar9 * 4) != 0.0)) {
            uVar12 = uVar12 + 1 & 0x3f;
            if (0.0 < *(float *)(&DAT_10190e98 + uVar12 * 4) - *(float *)(&DAT_10190e98 + uVar9 * 4)
               ) {
              fVar1 = ((float)in_stack_00000008 - *(float *)(&DAT_10190e98 + uVar9 * 4)) /
                      (*(float *)(&DAT_10190e98 + uVar12 * 4) -
                      *(float *)(&DAT_10190e98 + uVar9 * 4));
              if (1.0 < fVar1) {
                fVar1 = 1.0;
              }
              iVar10 = uVar9 * 0xc;
              iVar8 = uVar12 * 0xc;
              fStack_20 = *(float *)(&DAT_10190b98 + iVar8) - *(float *)(&DAT_10190b98 + iVar10);
              pcStack_1c = (cl_entity_s *)
                           (*(float *)(&DAT_10190b9c + iVar8) - *(float *)(&DAT_10190b9c + iVar10));
              pfStack_18 = (float *)(*(float *)(&DAT_10190ba0 + iVar8) -
                                    *(float *)(&DAT_10190ba0 + iVar10));
              FUN_10058410((float *)(&DAT_10190b98 + iVar10),fVar1,&fStack_20,(float *)&pfStack_8);
              fVar13 = FUN_10058390(&fStack_20);
              if (fVar13 < (float10)64.0) {
                pcStack_1c = (cl_entity_s *)((float)pcStack_4 - pfVar2[0x1a]);
                pfStack_18 = (float *)(unaff_retaddr - pfVar2[0x1b]);
                DAT_101913e4 = ((float)pfStack_8 - pfVar2[0x19]) + *pfVar2;
                *pfVar2 = DAT_101913e4;
                pfVar2[1] = (float)pcStack_1c + pfVar2[1];
                pfVar2[2] = (float)pfStack_18 + pfVar2[2];
                DAT_101913e8 = pfVar2[1];
                DAT_101913ec = pfVar2[2];
              }
            }
          }
          break;
        }
        iVar8 = iVar8 + 1;
        uVar12 = uVar12 - 1;
      } while (iVar8 < 0x3f);
    }
  }
  if (0.0 < pfVar2[0xf]) {
    fStack_20 = *pfVar2 - _DAT_10190b60;
    pcStack_1c = (cl_entity_s *)(pfVar2[1] - _DAT_10190b64);
    pfStack_18 = (float *)(pfVar2[2] - _DAT_10190b68);
    FUN_100583e0(&fStack_20,1.0 / pfVar2[0xf],&fStack_20);
    _DAT_10191418 = _DAT_10191418 * 0.8 + fStack_20 * 0.2;
    _DAT_1019141c = _DAT_1019141c * 0.8 + (float)pcStack_1c * 0.2;
    _DAT_10191420 = _DAT_10191420 * 0.8 + (float)pfStack_18 * 0.2;
  }
  _DAT_10190b60 = *pfVar2;
  _DAT_10190b64 = pfVar2[1];
  _DAT_10190b68 = pfVar2[2];
  _DAT_101914e4 = pfVar2[0x10];
  if (pfVar2[0x38] == 0.0) {
    switch(DAT_10190b18) {
    case 1:
      FUN_10068d40(DAT_10190b20,(float *)0x0,&DAT_10190b28,&DAT_101914d0);
      break;
    case 2:
      FUN_10068d40(DAT_10190b20,&DAT_101913f8,&DAT_10190b28,&DAT_101914d0);
      break;
    case 3:
      DAT_101914d0 = DAT_101913f8;
      DAT_101914d4 = DAT_101913fc;
      DAT_101914d8 = DAT_10191400;
      DAT_10190b28 = DAT_10191490;
      DAT_10190b2c = DAT_10191494;
      DAT_10190b30 = DAT_10191498;
      break;
    default:
      pfVar2[0x39] = 0.0;
      break;
    case 5:
      FUN_10068e20(DAT_10190b20,pfVar2,pfVar2 + 3);
    }
    if (DAT_100d000c != 0) {
      pfVar2[0x38] = 1.4013e-45;
    }
    _DAT_100d0010 = 0;
  }
  else {
    lVar14 = __ftol();
    pfVar2[0x34] = (float)lVar14;
    lVar14 = __ftol();
    pfVar2[0x35] = (float)lVar14;
    lVar14 = __ftol();
    pfVar2[0x36] = (float)lVar14;
    lVar14 = __ftol();
    pfVar2[0x37] = (float)lVar14;
    pfVar2[0x38] = 0.0;
    pfVar2[0x39] = 0.0;
    if (DAT_100d000c == 2) {
      FUN_10068e20(DAT_100d0940,pfVar2,pfVar2 + 3);
    }
    else if (DAT_100d000c == 3) {
      pfVar2[0x39] = 1.4013e-45;
      pfStack_8 = (float *)pfVar2[0x20];
      _DAT_100d0958 = (cl_entity_s *)pfVar2[0x21];
      _DAT_100d095c = (float *)pfVar2[0x22];
      _DAT_100d0954 = (float)pfStack_8 * 0.011111111 * 38.75 + 51.25;
      fStack_20 = _DAT_100d0954;
      pcStack_1c = _DAT_100d0958;
      pfStack_18 = _DAT_100d095c;
      pcStack_4 = _DAT_100d0958;
      FUN_100240b0(&DAT_100cfff8,pfVar2);
      pfVar2[3] = fStack_20;
      pfVar2[4] = (float)pcStack_1c;
      pfVar2[5] = (float)pfStack_18;
    }
    _DAT_100d0010 = 1;
  }
  if (((DAT_10190b18 == 5) && (pcVar3 != (cl_entity_s *)0x0)) && (DAT_10190b20 != 0)) {
    origin = pcVar4->origin;
    angles = pcVar4->angles;
    *origin = DAT_10190b28;
    pcVar4->origin[1] = DAT_10190b2c;
    pcVar4->origin[2] = DAT_10190b30;
    *angles = DAT_101914d0;
    pcVar4->angles[1] = DAT_101914d4;
    pcVar4->angles[2] = DAT_101914d8;
    *angles = *angles * -1.0;
    (*gEngfuncs.pfnAngleVectors)(&DAT_101914d0,(float *)&pfStack_8,(float *)0x0,(float *)0x0);
    pfVar11 = (float *)&stack0x00000008;
    iVar8 = 3;
    pvVar5 = origin;
    do {
      fVar1 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      iVar8 = iVar8 + -1;
      *pvVar5 = fVar1 * _DAT_10191dac * 0.4 + *pvVar5;
      pvVar5 = pvVar5 + 1;
    } while (iVar8 != 0);
    pcVar4->angles[1] = pcVar4->angles[1] - _DAT_10191dac * 0.5;
    pcVar4->angles[2] = pcVar4->angles[2] - _DAT_10191dac;
    *angles = *angles - _DAT_10191dac * 0.3;
    (pcVar4->curstate).angles[0] = *angles;
    (pcVar4->curstate).angles[1] = pcVar4->angles[1];
    (pcVar4->curstate).angles[2] = pcVar4->angles[2];
    (pcVar4->latched).prevangles[0] = *angles;
    (pcVar4->latched).prevangles[1] = pcVar4->angles[1];
    (pcVar4->latched).prevangles[2] = pcVar4->angles[2];
    iVar8 = *(int *)((int)fStack_20 + 0x364);
    if (DAT_10191db0 != iVar8) {
      DAT_10191db0 = iVar8;
      DAT_10097218 = FUN_10068ef0(iVar8);
      if (DAT_10097218 == -1) {
        pcVar4->model = (model_s *)0x0;
        DAT_10191db0 = 0;
        DAT_10097218 = -1;
        pcVar4->model = (model_s *)0x0;
        DAT_101914a0 = (int *)0x0;
        goto LAB_10069b0c;
      }
      _DAT_10191d5c =
           FUN_10007110(DAT_10097218,(int)*(char *)((int)&DAT_1018d128 + DAT_10190b20 * 2));
    }
    if (DAT_10097218 == -1) {
      pcVar4->model = (model_s *)0x0;
      DAT_101914a0 = (int *)0x0;
    }
    else {
      pp_Stack00000018 = &(gEngfuncs.pEventAPI)->EV_FindModelIndex;
      puVar6 = FUN_100071c0(DAT_10097218);
      iStack0000001c = (**pp_Stack00000018)((char *)((int)puVar6 + 0x132));
      pmVar7 = (model_s *)(*DAT_100ea7d4)(iStack0000001c);
      pcVar4->model = pmVar7;
      (pcVar4->curstate).modelindex = (int)pcStack_4;
      (pcVar4->curstate).frame = 0.0;
      (pcVar4->curstate).colormap = 0;
      pcVar4->index = DAT_10190b20;
      *angles = pfVar2[0x20];
      pcVar4->angles[1] = pfVar2[0x21];
      pcVar4->angles[2] = pfVar2[0x22];
      FUN_100674a0((int)pfVar2,(float *)&DAT_10191dac);
      *origin = *pfVar2;
      pcVar4->origin[1] = pfVar2[1];
      pcVar4->origin[2] = pfVar2[2];
      (*gEngfuncs.V_ApplyShake)(origin,angles,0.9);
      *origin = DAT_10191428 + *origin;
      pcVar4->origin[1] = DAT_1019142c + pcVar4->origin[1];
      pcVar4->origin[2] = _DAT_10191430 + pcVar4->origin[2];
      pcVar4->origin[2] = pcVar4->origin[2] - 1.0;
      DAT_101914a0 = &pcVar4->index;
    }
  }
  else {
    pcVar4->model = (model_s *)0x0;
    DAT_10191db0 = 0;
    DAT_10097218 = -1;
    DAT_101914a0 = (int *)0x0;
  }
LAB_10069b0c:
  DAT_101914d0 = pfVar2[3];
  DAT_101914d4 = pfVar2[4];
  DAT_101914d8 = pfVar2[5];
  DAT_10190b28 = *pfVar2;
  DAT_10190b2c = pfVar2[1];
  DAT_10190b30 = pfVar2[2];
  return;
}

/* 10069e40  FUN_10069e40  (77 bytes)
 * undefined FUN_10069e40(float param_1, float * param_2)
 * called by: FUN_10067890
 */
void __cdecl FUN_10069e40(float param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_10029e40(param_2);
  fVar1 = fVar1 - (fVar1 * (float10)0.5 + (float10)10.0) * (float10)DAT_100963e8 * (float10)param_1;
  if (fVar1 <= (float10)0.0) {
    fVar1 = (float10)0.0;
  }
  FUN_100583e0(param_2,(float)fVar1,param_2);
  return;
}

/* 10069e90  FUN_10069e90  (253 bytes)
 * undefined FUN_10069e90(void)
 * called by: FUN_10026b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10069e90(void)

{
  (*gEngfuncs.pfnAddCommand)(s_centerview_100973a4,(function *)0x10067290);
  _DAT_10191d4c = (*gEngfuncs.pfnRegisterVariable)(s_scr_ofsx_10097398,&DAT_10092bf4,0);
  _DAT_10191d54 = (*gEngfuncs.pfnRegisterVariable)(s_scr_ofsy_1009738c,&DAT_10092bf4,0);
  _DAT_10191d50 = (*gEngfuncs.pfnRegisterVariable)(s_scr_ofsz_10097380,&DAT_10092bf4,0);
  DAT_101913f0 = (*gEngfuncs.pfnRegisterVariable)(s_v_centermove_10097370,&DAT_1009468c,0);
  DAT_101914f4 = (*gEngfuncs.pfnRegisterVariable)(s_v_centerspeed_1009735c,&DAT_1009736c,0);
  _DAT_1019148c = (*gEngfuncs.pfnRegisterVariable)(s_cl_bobcycle_10097350,&DAT_10094214,0);
  DAT_10191d3c = (*gEngfuncs.pfnRegisterVariable)(s_cl_bob_10097344,&DAT_1009734c,1);
  _DAT_10191d58 = (*gEngfuncs.pfnRegisterVariable)(s_cl_bobup_10097338,&DAT_100972f4,0);
  DAT_101914e8 = (*gEngfuncs.pfnRegisterVariable)(s_cl_waterdist_10097324,&DAT_10097334,0);
  DAT_101914e0 = (*gEngfuncs.pfnRegisterVariable)(s_cl_slowfade_10097318,&DAT_10092c08,0);
  return;
}

/* 1006ac7a  FUN_1006ac7a  (82 bytes)
 * int FUN_1006ac7a(undefined1 * param_1, byte.conflict * param_2)
 * called by: FUN_10001000, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_10011a60, FUN_10012050, FUN_10018360, FUN_10018780, FUN_10018cf0, FUN_100197c0, FUN_10020170, FUN_100206c0, ... (53 total)
 */
int __cdecl FUN_1006ac7a(undefined1 *param_1,byte_conflict *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1006cfbd((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1006cea5(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006accc  FUN_1006accc  (23 bytes)
 * undefined FUN_1006accc(void)
 * called by: FUN_1006ad57
 */
void FUN_1006accc(void)

{
  void *extraout_ECX;
  
  FUN_1006ace4();
  DAT_10191db8 = FUN_1006d817();
  FUN_1006d7c7(extraout_ECX);
  return;
}

/* 1006ace4  FUN_1006ace4  (56 bytes)
 * undefined FUN_1006ace4(void)
 * called by: FUN_1006accc
 */
void FUN_1006ace4(void)

{
  PTR___fptrap_100976a0 = &LAB_1006d89a;
  PTR___fptrap_1009769c = __cfltcvt;
  PTR___fptrap_100976a4 = __fassign;
  PTR___fptrap_100976a8 = FUN_1006d840;
  PTR___fptrap_100976ac = &LAB_1006d8e8;
  PTR___fptrap_100976b0 = __cfltcvt;
  return;
}

/* 1006ad4c  FUN_1006ad4c  (11 bytes)
 * undefined FUN_1006ad4c(LPVOID param_1)
 * called by: FUN_100103b0, FUN_10010440, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_100172c0, FUN_100173c0, FUN_100177c0, FUN_100177e0, FUN_10018b90, FUN_1001acc0, FUN_1001f390, ... (160 total)
 */
void __cdecl FUN_1006ad4c(LPVOID param_1)

{
  FUN_1006c158(param_1);
  return;
}

/* 1006ad57  FUN_1006ad57  (45 bytes)
 * undefined FUN_1006ad57(void)
 * called by: FUN_1006ccfc
 */
void FUN_1006ad57(void)

{
  if (PTR_FUN_100973b8 != (undefined *)0x0) {
    (*(code *)PTR_FUN_100973b8)();
  }
  FUN_1006ae6c((undefined4 *)&DAT_10091090,(undefined4 *)&DAT_100910a4);
  FUN_1006ae6c((undefined4 *)&DAT_10091000,(undefined4 *)&DAT_1009108c);
  return;
}

/* 1006ad84  FUN_1006ad84  (17 bytes)
 * undefined FUN_1006ad84(UINT param_1)
 * called by: vgui::Dar<char>::Dar<char>, vgui::Dar<char>::addElement, vgui::Dar<char>::ensureCapacity, vgui::Dar<char>::insertElementAt, vgui::Dar<char>::putElement, vgui::Dar<int>::Dar<int>, vgui::Dar<int>::addElement, vgui::Dar<int>::ensureCapacity, vgui::Dar<int>::insertElementAt, vgui::Dar<int>::putElement, vgui::ScrollBar2::ScrollBar2, vgui::ScrollBar2::addIntChangeSignal, ... (14 total)
 */
void __cdecl FUN_1006ad84(UINT param_1)

{
  FUN_1006adb5(param_1,0,0);
  return;
}

/* 1006ada6  FUN_1006ada6  (15 bytes)
 * undefined FUN_1006ada6(void)
 * called by: FUN_1006ccfc
 */
void FUN_1006ada6(void)

{
  FUN_1006adb5(0,0,1);
  return;
}

/* 1006adb5  FUN_1006adb5  (163 bytes)
 * undefined FUN_1006adb5(UINT param_1, int param_2, int param_3)
 * called by: FUN_1006ad84, FUN_1006ada6, __exit
 */
void __cdecl FUN_1006adb5(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1006ae5a();
  if (DAT_10191dfc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10191df8 = 1;
  DAT_10191df4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_101934f8 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_101934f4 - 4), DAT_101934f8 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_101934f8 <= puVar1);
    }
    FUN_1006ae6c((undefined4 *)&DAT_100910a8,(undefined4 *)&DAT_100910b0);
  }
  FUN_1006ae6c((undefined4 *)&DAT_100910b4,(undefined4 *)&DAT_100910bc);
  if (param_3 == 0) {
    DAT_10191dfc = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1006ae63();
  return;
}

/* 1006ae5a  FUN_1006ae5a  (9 bytes)
 * undefined FUN_1006ae5a(void)
 * called by: FUN_1006adb5, FUN_1006aee5
 */
void FUN_1006ae5a(void)

{
  FUN_1006dcfb(0xd);
  return;
}

/* 1006ae63  FUN_1006ae63  (9 bytes)
 * undefined FUN_1006ae63(void)
 * called by: FUN_1006adb5, FUN_1006aee5
 */
void FUN_1006ae63(void)

{
  FUN_1006dd5c(0xd);
  return;
}

/* 1006ae6c  FUN_1006ae6c  (26 bytes)
 * undefined FUN_1006ae6c(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_1006ad57, FUN_1006adb5
 */
void __cdecl FUN_1006ae6c(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

/* 1006ae94  FUN_1006ae94  (81 bytes)
 * int FUN_1006ae94(undefined1 * param_1, byte.conflict * param_2, undefined4 * param_3)
 */
int __cdecl FUN_1006ae94(undefined1 *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1006cfbd((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1006cea5(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006aee5  FUN_1006aee5  (126 bytes)
 * int FUN_1006aee5(int param_1)
 * called by: FUN_1006af63
 */
int __cdecl FUN_1006aee5(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_1006ae5a();
  SVar1 = FUN_1006dea9(DAT_101934f8);
  if (SVar1 < (uint)((int)DAT_101934f4 + (4 - (int)DAT_101934f8))) {
    SVar1 = FUN_1006dea9(DAT_101934f8);
    piVar2 = FUN_1006dd71(DAT_101934f8,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      param_1 = 0;
      goto LAB_1006af5a;
    }
    DAT_101934f4 = piVar2 + ((int)DAT_101934f4 - (int)DAT_101934f8 >> 2);
    DAT_101934f8 = piVar2;
  }
  *DAT_101934f4 = param_1;
  DAT_101934f4 = DAT_101934f4 + 1;
LAB_1006af5a:
  FUN_1006ae63();
  return param_1;
}

/* 1006af63  FUN_1006af63  (18 bytes)
 * int FUN_1006af63(int param_1)
 * called by: CL_CreateMove, FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_10017550, FUN_10018f60, FUN_1001a980, FUN_1001c880, FUN_1001c930, FUN_1001f340, FUN_1001fc90, FUN_10034ee0, ... (35 total)
 */
int __cdecl FUN_1006af63(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006aee5(param_1);
  return (iVar1 != 0) - 1;
}

/* 1006afa4  FUN_1006afa4  (45 bytes)
 * undefined FUN_1006afa4(undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1006e2f7
 */
void FUN_1006afa4(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1006afcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006afd8  FUN_1006afd8  (7 bytes)
 * undefined FUN_1006afd8(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1006e4b7, FUN_1006e67b
 */
void FUN_1006afd8(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1006afdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006afdf  FUN_1006afdf  (7 bytes)
 * undefined FUN_1006afdf(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1006e4b7
 */
void FUN_1006afdf(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1006afe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006afe6  FUN_1006afe6  (79 bytes)
 * undefined FUN_1006afe6(PVOID param_1, PEXCEPTION_RECORD param_2)
 * called by: FUN_1006b19a, FUN_1006e2f7
 */
void FUN_1006afe6(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1006b00e,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

/* 1006b035  FUN_1006b035  (54 bytes)
 * undefined4 FUN_1006b035(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_1006b035(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1006deee(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}

/* 1006b06b  FUN_1006b06b  (84 bytes)
 * undefined4 FUN_1006b06b(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * called by: FUN_1006e372
 */
undefined4 __cdecl
FUN_1006b06b(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1006b0bf;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}

/* 1006b0bf  FUN_1006b0bf  (37 bytes)
 * undefined FUN_1006b0bf(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
void __cdecl FUN_1006b0bf(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1006deee(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}

/* 1006b0e4  FUN_1006b0e4  (182 bytes)
 * undefined4 FUN_1006b0e4(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_1006e13c
 */
undefined4 __cdecl
FUN_1006b0e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_1006b19a;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1006b16c;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1006e7e1();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}

/* 1006b19a  FUN_1006b19a  (114 bytes)
 * undefined4 FUN_1006b19a(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
undefined4 __cdecl FUN_1006b19a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1006deee(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1006afe6(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1006b204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

/* 1006b20f  FUN_1006b20f  (123 bytes)
 * int FUN_1006b20f(int param_1, int param_2, int param_3, uint * param_4, uint * param_5)
 * called by: FUN_1006df89, FUN_1006e13c
 */
int __cdecl FUN_1006b20f(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_1006e949();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_1006e949();
  }
  return iVar1 + uVar5 * 0x14;
}

/* 1006b362  FUN_1006b362  (24 bytes)
 * undefined FUN_1006b362(void)
 * called by: __local_unwind2
 */
void FUN_1006b362(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100973cc = *(undefined4 *)(unaff_EBP + 8);
  DAT_100973c8 = in_EAX;
  DAT_100973d0 = unaff_EBP;
  return;
}

/* 1006b37a  FUN_1006b37a  (49 bytes)
 * undefined4 FUN_1006b37a(FILE * param_1)
 * called by: FUN_100171e0, FUN_10017300, FUN_10036480, FUN_10036560, FUN_1003a860
 */
undefined4 __cdecl FUN_1006b37a(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_1006ea5b((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1006eaad((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

/* 1006b3f7  FUN_1006b3f7  (34 bytes)
 * int FUN_1006b3f7(char * param_1)
 * called by: FUN_100171e0
 */
int __cdecl FUN_1006b3f7(char *param_1)

{
  int iVar1;
  
  FUN_1006ea5b((uint)param_1);
  iVar1 = FUN_1006b419(param_1);
  FUN_1006eaad((uint)param_1);
  return iVar1;
}

/* 1006b419  FUN_1006b419  (353 bytes)
 * int FUN_1006b419(char * param_1)
 * called by: FUN_1006b3f7, FUN_1006b5a6
 */
int __cdecl FUN_1006b419(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_1006efd6(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_1006b4a7:
    local_c = -1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_1006edb4();
        *pDVar4 = 0x16;
        goto LAB_1006b4a7;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_101923c0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_101923c0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_1006efd6(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_1006efd6(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_101923c0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}

/* 1006b57a  FUN_1006b57a  (44 bytes)
 * int FUN_1006b57a(int * param_1, int param_2, DWORD param_3)
 * called by: FUN_100171e0, FUN_10036480, FUN_10036560, FUN_1003a860
 */
int __cdecl FUN_1006b57a(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_1006ea5b((uint)param_1);
  iVar1 = FUN_1006b5a6(param_1,param_2,param_3);
  FUN_1006eaad((uint)param_1);
  return iVar1;
}

/* 1006b5a6  FUN_1006b5a6  (141 bytes)
 * int FUN_1006b5a6(int * param_1, int param_2, DWORD param_3)
 * called by: FUN_1006b57a
 */
int __cdecl FUN_1006b5a6(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_1006edb4();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_1006b419((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_1006ec38(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_1006efd6(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}

/* 1006b633  FUN_1006b633  (47 bytes)
 * uint FUN_1006b633(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_100171e0, FUN_10036480, FUN_1003a860
 */
uint __cdecl FUN_1006b633(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_1006ea5b((uint)param_4);
  uVar1 = FUN_1006b662(param_1,param_2,param_3,param_4);
  FUN_1006eaad((uint)param_4);
  return uVar1;
}

/* 1006b662  FUN_1006b662  (232 bytes)
 * uint FUN_1006b662(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_1006b633
 */
uint __cdecl FUN_1006b662(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_1006f0ae(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_1006b73e;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((uint)param_1 % (uint)param_4);
          }
          iVar3 = FUN_1006f18a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_1006b73e:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1006b73e;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_1006f3d0((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}

/* 1006b74a  FUN_1006b74a  (49 bytes)
 * undefined4 * FUN_1006b74a(LPCSTR param_1, char * param_2, uint param_3)
 * called by: FUN_1006b77b
 */
undefined4 * __cdecl FUN_1006b74a(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1006f875();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1006f705(param_1,param_2,param_3,puVar1);
  FUN_1006eaad((uint)puVar1);
  return puVar2;
}

/* 1006b77b  FUN_1006b77b  (19 bytes)
 * undefined FUN_1006b77b(LPCSTR param_1, char * param_2)
 * called by: FUN_100171e0, FUN_10017300, FUN_10036480, FUN_10036560, FUN_1003a860
 */
void __cdecl FUN_1006b77b(LPCSTR param_1,char *param_2)

{
  FUN_1006b74a(param_1,param_2,0x40);
  return;
}

/* 1006b78e  FUN_1006b78e  (81 bytes)
 * int FUN_1006b78e(undefined1 * param_1, int param_2, byte.conflict * param_3)
 * called by: FUN_100171e0, FUN_10017300, FUN_100180c0, FUN_10018360
 */
int __cdecl FUN_1006b78e(undefined1 *param_1,int param_2,byte_conflict *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = param_2;
  iVar1 = FUN_1006cfbd((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1006cea5(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006b7df  FUN_1006b7df  (47 bytes)
 * uint FUN_1006b7df(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_10017300, FUN_10036560
 */
uint __cdecl FUN_1006b7df(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_1006ea5b((uint)param_4);
  uVar1 = FUN_1006b80e(param_1,param_2,param_3,param_4);
  FUN_1006eaad((uint)param_4);
  return uVar1;
}

/* 1006b80e  FUN_1006b80e  (266 bytes)
 * uint FUN_1006b80e(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_1006b7df
 */
uint __cdecl FUN_1006b80e(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_2 * param_3);
  if (piVar6 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    piVar5 = piVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (piVar7 = (int *)piVar1[1], piVar7 == (int *)0x0)) {
        if (param_4 <= piVar5) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_1006ec38(piVar1), iVar2 != 0)) {
LAB_1006b90f:
            return (uint)((int)piVar6 - (int)piVar5) / param_2;
          }
          piVar7 = piVar5;
          if (param_4 != (int *)0x0) {
            piVar7 = (int *)((int)piVar5 - (uint)piVar5 % (uint)param_4);
          }
          piVar3 = (int *)FUN_1006f93d(piVar1[4],param_1,(uint)piVar7);
          if ((piVar3 == (int *)0xffffffff) ||
             (piVar5 = (int *)((int)piVar5 - (int)piVar3), piVar3 < piVar7)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1006b90f;
          }
          goto LAB_1006b8c6;
        }
        uVar4 = FUN_1006cea5((int)*param_1,piVar1);
        if (uVar4 == 0xffffffff) goto LAB_1006b90f;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        piVar5 = (int *)((int)piVar5 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        piVar3 = piVar5;
        if (piVar7 <= piVar5) {
          piVar3 = piVar7;
        }
        FUN_1006f3d0((undefined4 *)*piVar1,(undefined4 *)param_1,(uint)piVar3);
        piVar1[1] = piVar1[1] - (int)piVar3;
        *piVar1 = *piVar1 + (int)piVar3;
        piVar5 = (int *)((int)piVar5 - (int)piVar3);
LAB_1006b8c6:
        param_1 = param_1 + (int)piVar3;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_3;
}

/* 1006b918  FUN_1006b918  (87 bytes)
 * float10 FUN_1006b918(undefined * param_1, byte.conflict * param_2)
 * called by: FUN_10017af0, FUN_10022280, FUN_10022d00, FUN_10023720, FUN_1003a3c0, FUN_10055d20, FUN_10055f90
 */
float10 __thiscall FUN_1006b918(undefined *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  byte *this;
  undefined *puVar3;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_10097674 < 2) {
      uVar1 = (byte)PTR_DAT_10097468[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_10097468;
    }
    else {
      puVar3 = (undefined *)0x8;
      uVar1 = FUN_1006c8b6(param_1,(uint)*param_2,8);
      param_1 = puVar3;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  iVar2 = FUN_1006fb2d(this,local_1c,param_2);
  return (float10)*(double *)(iVar2 + 0x10);
}

/* 1006b970  FUN_1006b970  (47 bytes)
 * undefined FUN_1006b970(void)
 * called by: FUN_10017af0, FUN_1001b860, FUN_10025740, FUN_10072c41, FUN_10072e90, FUN_100763ba, FUN_1007706f
 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1006b970(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

/* 1006b9aa  FUN_1006b9aa  (10 bytes)
 * undefined FUN_1006b9aa(undefined4 param_1)
 * called by: FUN_100185f0
 */
void __fastcall FUN_1006b9aa(undefined4 param_1)

{
  __cintrindisp2(param_1,0x100973e0);
  return;
}

/* 1006b9d2  FUN_1006b9d2  (41 bytes)
 * undefined FUN_1006b9d2(undefined4 * param_1)
 * called by: FUN_1006b9fb
 */
void __fastcall FUN_1006b9d2(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_1006dcfb(0x1b);
  if ((LPVOID)param_1[1] != (LPVOID)0x0) {
    FUN_1006c158((LPVOID)param_1[1]);
  }
  FUN_1006dd5c(0x1b);
  return;
}

/* 1006b9fb  FUN_1006b9fb  (28 bytes)
 * undefined4 * FUN_1006b9fb(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1006b9fb(void *this,byte_conflict param_1)

{
  FUN_1006b9d2(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1006ba20  FUN_1006ba20  (664 bytes)
 * undefined4 * FUN_1006ba20(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1001b047, FUN_1001b360, FUN_1002ead0, FUN_10063c00, FUN_1006dc41, FUN_1006e4b7, FUN_10071bb0, FUN_10073f31
 */
undefined4 * __cdecl FUN_1006ba20(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1006bbd7_caseD_2;
        case 3:
          goto switchD_1006bbd7_caseD_3;
        }
        goto switchD_1006bbd7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1006bbd7_caseD_0;
      case 1:
        goto switchD_1006bbd7_caseD_1;
      case 2:
        goto switchD_1006bbd7_caseD_2;
      case 3:
        goto switchD_1006bbd7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006bbd7_caseD_2;
            case 3:
              goto switchD_1006bbd7_caseD_3;
            }
            goto switchD_1006bbd7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006bbd7_caseD_2;
            case 3:
              goto switchD_1006bbd7_caseD_3;
            }
            goto switchD_1006bbd7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006bbd7_caseD_2;
            case 3:
              goto switchD_1006bbd7_caseD_3;
            }
            goto switchD_1006bbd7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1006bbd7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1006bbd7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1006bbd7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1006bbd7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1006ba55_caseD_2;
      case 3:
        goto switchD_1006ba55_caseD_3;
      }
      goto switchD_1006ba55_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1006ba55_caseD_0;
    case 1:
      goto switchD_1006ba55_caseD_1;
    case 2:
      goto switchD_1006ba55_caseD_2;
    case 3:
      goto switchD_1006ba55_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006ba55_caseD_2;
          case 3:
            goto switchD_1006ba55_caseD_3;
          }
          goto switchD_1006ba55_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006ba55_caseD_2;
          case 3:
            goto switchD_1006ba55_caseD_3;
          }
          goto switchD_1006ba55_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006ba55_caseD_2;
          case 3:
            goto switchD_1006ba55_caseD_3;
          }
          goto switchD_1006ba55_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1006ba55_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1006ba55_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1006ba55_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1006ba55_caseD_0:
  return param_1;
}

/* 1006bf83  FUN_1006bf83  (52 bytes)
 * undefined FUN_1006bf83(char * param_1, byte.conflict * param_2)
 * called by: FUN_1003a3c0, FUN_1004fb50, FUN_10055d20, FUN_10055f90, FUN_1005cb80
 */
void __cdecl FUN_1006bf83(char *param_1,byte_conflict *param_2)

{
  void *this;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  FUN_10070ee8(this,(int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  return;
}

/* 1006bfb7  FUN_1006bfb7  (139 bytes)
 * int FUN_1006bfb7(byte.conflict * param_1)
 * called by: FUN_1006c042, FUN_1007514b
 */
int __thiscall FUN_1006bfb7(void *this,byte_conflict *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10097674 < 2) {
      uVar1 = (byte)PTR_DAT_10097468[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10097468;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1006c8b6(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_10097674 < 2) {
      uVar2 = (byte)PTR_DAT_10097468[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1006c8b6(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

/* 1006c042  FUN_1006c042  (11 bytes)
 * undefined FUN_1006c042(byte.conflict * param_1)
 * called by: FUN_100224c0, FUN_10023720, FUN_100259a0, FUN_10025a10, FUN_1002de80, FUN_1002f480, FUN_10053780, FUN_10055d20, FUN_10055f90, FUN_1005c300, FUN_10060c70, HUD_StudioEvent
 */
void __thiscall FUN_1006c042(void *this,byte_conflict *param_1)

{
  FUN_1006bfb7(this,param_1);
  return;
}

/* 1006c04d  FUN_1006c04d  (13 bytes)
 * undefined FUN_1006c04d(DWORD param_1)
 */
void __cdecl FUN_1006c04d(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1006e7e1();
  pDVar1[5] = param_1;
  return;
}

/* 1006c07c  FUN_1006c07c  (220 bytes)
 * undefined FUN_1006c07c(int * param_1)
 */
void __cdecl FUN_1006c07c(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10191e10._2_2_) {
    if (local_24.wHour == (WORD)DAT_10191e10) {
      if (local_24.wDay == DAT_10191e0c._2_2_) {
        if (local_24.wMonth == DAT_10191e08._2_2_) {
          if (local_24.wYear == (WORD)DAT_10191e08) goto LAB_1006c126;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_10191e00 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_10191e00 = 1;
  }
  else {
    DAT_10191e00 = 0;
  }
  DAT_10191e08._0_2_ = local_24.wYear;
  DAT_10191e08._2_2_ = local_24.wMonth;
  DAT_10191e0c._0_2_ = local_24.wDayOfWeek;
  DAT_10191e0c._2_2_ = local_24.wDay;
  DAT_10191e10._0_2_ = local_24.wHour;
  DAT_10191e10._2_2_ = local_24.wMinute;
  DAT_10191e14._0_2_ = local_24.wSecond;
  DAT_10191e14._2_2_ = local_24.wMilliseconds;
LAB_1006c126:
  iVar2 = FUN_100719d4((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_10191e00);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}

/* 1006c158  FUN_1006c158  (72 bytes)
 * undefined FUN_1006c158(LPVOID param_1)
 * called by: FUN_10020170, FUN_10020590, FUN_10025970, FUN_10028760, FUN_1003a960, FUN_100667c0, FUN_1006ad4c, FUN_1006b9d2, FUN_1006dc8f, FUN_1006dcfb, FUN_1006dd71, FUN_1006e848, ... (20 total)
 */
void __cdecl FUN_1006c158(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1006dcfb(9);
    puVar1 = (uint *)FUN_10071b85((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10071bb0(puVar1,(uint)param_1);
      FUN_1006dd5c(9);
      return;
    }
    FUN_1006dd5c(9);
    HeapFree(DAT_101923a8,0,param_1);
  }
  return;
}

/* 1006c216  FUN_1006c216  (78 bytes)
 * int * FUN_1006c216(uint * param_1)
 * called by: __nh_malloc
 */
int * __cdecl FUN_1006c216(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10097d44) {
    FUN_1006dcfb(9);
    piVar1 = FUN_10071edb(param_1);
    FUN_1006dd5c(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_101923a8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}

/* 1006c264  FUN_1006c264  (340 bytes)
 * undefined FUN_1006c264(int * param_1, undefined4 * param_2, uint param_3, undefined * param_4)
 * called by: FUN_10022380
 */
void __cdecl FUN_1006c264(int *param_1,undefined4 *param_2,uint param_3,undefined *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_fc [30];
  int local_84 [30];
  int *local_c;
  int local_8;
  
  if ((param_2 < (undefined4 *)0x2) || (param_3 == 0)) {
    return;
  }
  local_8 = 0;
  iVar4 = (int)param_2 + -1;
  param_2 = local_fc;
  piVar5 = (int *)(iVar4 * param_3 + (int)param_1);
  piVar3 = param_1;
  param_1 = local_84;
LAB_1006c2a3:
  uVar2 = (uint)((int)piVar5 - (int)piVar3) / param_3 + 1;
  if (8 < uVar2) {
    FUN_1006c406((undefined1 *)((uVar2 >> 1) * param_3 + (int)piVar3),(undefined1 *)piVar3,param_3);
    piVar6 = (int *)(param_3 + (int)piVar5);
    local_c = piVar3;
LAB_1006c2fa:
    local_c = (int *)((int)local_c + param_3);
    if (local_c <= piVar5) goto code_r0x1006c307;
    goto LAB_1006c312;
  }
  FUN_1006c3b8((undefined1 *)piVar3,(undefined1 *)piVar5,param_3,param_4);
  goto LAB_1006c2c2;
code_r0x1006c307:
  iVar4 = (*(code *)param_4)(local_c,piVar3);
  if (iVar4 < 1) goto LAB_1006c2fa;
LAB_1006c312:
  do {
    piVar6 = (int *)((int)piVar6 - param_3);
    if (piVar6 <= piVar3) break;
    iVar4 = (*(code *)param_4)(piVar6,piVar3);
  } while (-1 < iVar4);
  if (local_c <= piVar6) {
    FUN_1006c406((undefined1 *)local_c,(undefined1 *)piVar6,param_3);
    goto LAB_1006c2fa;
  }
  FUN_1006c406((undefined1 *)piVar3,(undefined1 *)piVar6,param_3);
  piVar1 = local_c;
  if ((int)((int)piVar6 + (-1 - (int)piVar3)) < (int)piVar5 - (int)local_c) {
    if (local_c < piVar5) {
      local_8 = local_8 + 1;
      *param_2 = local_c;
      *param_1 = (int)piVar5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int *)(param_3 + (int)piVar3) < piVar6) {
      piVar5 = (int *)((int)piVar6 - param_3);
      goto LAB_1006c2a3;
    }
  }
  else {
    if ((int *)((int)piVar3 + param_3) < piVar6) {
      local_8 = local_8 + 1;
      *param_2 = piVar3;
      *param_1 = (int)piVar6 - param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    piVar3 = piVar1;
    if (piVar1 < piVar5) goto LAB_1006c2a3;
  }
LAB_1006c2c2:
  local_8 = local_8 + -1;
  param_2 = param_2 + -1;
  param_1 = param_1 + -1;
  if (local_8 < 0) {
    return;
  }
  piVar5 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  goto LAB_1006c2a3;
}

/* 1006c3b8  FUN_1006c3b8  (78 bytes)
 * undefined FUN_1006c3b8(undefined1 * param_1, undefined1 * param_2, int param_3, undefined * param_4)
 * called by: FUN_1006c264
 */
void __cdecl FUN_1006c3b8(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  for (; puVar2 = param_1, puVar3 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar3 = puVar3 + param_3, puVar3 <= param_2) {
      iVar1 = (*(code *)param_4)(puVar3,puVar2);
      if (0 < iVar1) {
        puVar2 = puVar3;
      }
    }
    FUN_1006c406(puVar2,param_2,param_3);
  }
  return;
}

/* 1006c406  FUN_1006c406  (44 bytes)
 * undefined FUN_1006c406(undefined1 * param_1, undefined1 * param_2, int param_3)
 * called by: FUN_1006c264, FUN_1006c3b8
 */
void __cdecl FUN_1006c406(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

/* 1006c432  FUN_1006c432  (40 bytes)
 * uint FUN_1006c432(int param_1)
 * called by: FUN_10070ee8, FUN_10071975
 */
uint __thiscall FUN_1006c432(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_10097674) {
    uVar1 = FUN_1006c8b6(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_10097468[param_1 * 2] & 8;
}

/* 1006c45a  FUN_1006c45a  (46 bytes)
 * uint FUN_1006c45a(int param_1)
 * called by: FUN_10025740
 */
uint __thiscall FUN_1006c45a(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_10097674) {
    uVar1 = FUN_1006c8b6(this,param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_10097468 + param_1 * 2) & 0x107;
}

/* 1006c490  FUN_1006c490  (25 bytes)
 * undefined FUN_1006c490(void)
 * called by: FUN_100274d0, FUN_10027e40
 */
void FUN_1006c490(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_1006c4b2(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}

/* 1006c4b2  FUN_1006c4b2  (467 bytes)
 * undefined1[10] FUN_1006c4b2(int param_1, uint param_2, int param_3, uint param_4)
 * called by: FUN_1006c490
 */
/* decompilation failed: 
Low-level Error: Overlapping input varnodes */

/* 1006c685  FUN_1006c685  (40 bytes)
 * undefined FUN_1006c685(void)
 * called by: FUN_1006c4b2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c685(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}

/* 1006c6b0  FUN_1006c6b0  (20 bytes)
 * undefined FUN_1006c6b0(void)
 * called by: FUN_10029d70, FUN_1002fc70
 */
void FUN_1006c6b0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100729a8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1006c6cd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 1006c6cd  FUN_1006c6cd  (174 bytes)
 * undefined FUN_1006c6cd(int param_1, uint param_2)
 * called by: FUN_1006c6b0
 */
void __cdecl FUN_1006c6cd(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1007294c();
    }
LAB_1006c75c:
    if (DAT_10191db4 == 0) {
      __startOneArgErrorHandling(&DAT_10097460,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10072935();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_1006c75c;
    if (DAT_10191db4 == 0) {
      __math_exit(&DAT_10097460,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

/* 1006c77b  FUN_1006c77b  (111 bytes)
 * uint FUN_1006c77b(uint param_1)
 * called by: FUN_1002a0a0
 */
uint __cdecl FUN_1006c77b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10191ebc == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1019238c);
    bVar1 = DAT_10192388 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1019238c);
      this = (void *)0x13;
      FUN_1006dcfb(0x13);
    }
    param_1 = FUN_1006c7ea(this,param_1);
    if (bVar1) {
      FUN_1006dd5c(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1019238c);
    }
  }
  return param_1;
}

/* 1006c7ea  FUN_1006c7ea  (204 bytes)
 * uint FUN_1006c7ea(uint param_1)
 * called by: FUN_1006c77b
 */
uint __thiscall FUN_1006c7ea(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10191ebc == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10097674 < 2) {
        uVar2 = (byte)PTR_DAT_10097468[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1006c8b6(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10097468[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10072c41(DAT_10191ebc,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}

/* 1006c8b6  FUN_1006c8b6  (117 bytes)
 * uint FUN_1006c8b6(int param_1, uint param_2)
 * called by: FUN_1002a0a0, FUN_1006b918, FUN_1006bfb7, FUN_1006c432, FUN_1006c45a, FUN_1006c7ea, FUN_1006d840, FUN_10070ee8, FUN_1007190d, FUN_10073a7a, FUN_100749c9
 */
uint __thiscall FUN_1006c8b6(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10097468 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10097468[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10072e90(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}

/* 1006c930  FUN_1006c930  (133 bytes)
 * uint * FUN_1006c930(uint * param_1, char * param_2)
 * called by: FUN_1002ed00, FUN_1002f210, FUN_1004b520
 */
uint * __cdecl FUN_1006c930(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    puVar5 = FUN_1006cc46(param_1);
    return puVar5;
  }
  do {
    cVar3 = (char)*param_1;
    do {
      while (puVar5 = param_1, param_1 = (uint *)((int)puVar5 + 1), cVar3 != *param_2) {
        if (cVar3 == '\0') {
          return (uint *)0x0;
        }
        cVar3 = *(char *)param_1;
      }
      cVar3 = *(char *)param_1;
      pcVar6 = param_2;
      puVar4 = puVar5;
    } while (cVar3 != param_2[1]);
    do {
      if (pcVar6[2] == '\0') {
        return puVar5;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar6[2]) break;
      pcVar1 = pcVar6 + 3;
      if (*pcVar1 == '\0') {
        return puVar5;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar6 = pcVar6 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}

/* 1006c9b0  FUN_1006c9b0  (20 bytes)
 * undefined FUN_1006c9b0(void)
 * called by: FUN_1002fef0
 */
void FUN_1006c9b0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100729a8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1006c9cd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 1006c9cd  FUN_1006c9cd  (174 bytes)
 * undefined FUN_1006c9cd(int param_1, uint param_2)
 * called by: FUN_1006c9b0
 */
void __cdecl FUN_1006c9cd(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1007294c();
    }
LAB_1006ca5c:
    if (DAT_10191db4 == 0) {
      __startOneArgErrorHandling(&DAT_10097680,0xe,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10072935();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_1006ca5c;
    if (DAT_10191db4 == 0) {
      __math_exit(&DAT_10097680,0xe,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

/* 1006ca7b  FUN_1006ca7b  (80 bytes)
 * int FUN_1006ca7b(undefined1 * param_1, int param_2, byte.conflict * param_3, undefined4 * param_4)
 * called by: FUN_10058660
 */
int __cdecl FUN_1006ca7b(undefined1 *param_1,int param_2,byte_conflict *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  local_18 = 0x42;
  iVar1 = FUN_1006cfbd((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1006cea5(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006cacb  FUN_1006cacb  (106 bytes)
 * undefined FUN_1006cacb(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_1005ac10, FUN_1005c300, FUN_1005ce70
 */
void FUN_1006cacb(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081eb8;
  puStack_10 = &LAB_10072fe4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1006cb35();
  ExceptionList = local_14;
  return;
}

/* 1006cb35  FUN_1006cb35  (24 bytes)
 * undefined FUN_1006cb35(void)
 * called by: FUN_1006cacb
 */
void FUN_1006cb35(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    FUN_1006cbcd(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + -0x1c),*(undefined **)(unaff_EBP + 0x18));
  }
  return;
}

/* 1006cb4d  FUN_1006cb4d  (104 bytes)
 * undefined FUN_1006cb4d(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_1005ad20, FUN_1005cc10, Unwind@10077cbe, Unwind@10077ce7, Unwind@10077d02
 */
void FUN_1006cb4d(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081ec8;
  puStack_10 = &LAB_10072fe4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1006cbb5();
  ExceptionList = local_14;
  return;
}

/* 1006cbb5  FUN_1006cbb5  (24 bytes)
 * undefined FUN_1006cbb5(void)
 * called by: FUN_1006cb4d
 */
void FUN_1006cbb5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_1006cbcd(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}

/* 1006cbcd  FUN_1006cbcd  (81 bytes)
 * undefined FUN_1006cbcd(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_1006cb35, FUN_1006cbb5
 */
void FUN_1006cbcd(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081ed8;
  puStack_10 = &LAB_10072fe4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}

/* 1006cc40  FUN_1006cc40  (6 bytes)
 * uint * FUN_1006cc40(uint * param_1, char param_2)
 * called by: FUN_10063c00, FUN_10077532
 */
uint * FUN_1006cc40(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

/* 1006cc46  FUN_1006cc46  (182 bytes)
 * uint * FUN_1006cc46(uint * param_1)
 * called by: FUN_1006c930
 */
uint * __cdecl FUN_1006cc46(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_EAX;
  while (((uint)param_1 & 3) != 0) {
    uVar7 = *param_1;
    if ((char)uVar7 == cVar6) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar7 == '\0') {
      return (uint *)0x0;
    }
  }
  uVar7 = in_EAX | in_EAX << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == cVar6) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

/* 1006ccfc  FUN_1006ccfc  (217 bytes)
 * undefined4 FUN_1006ccfc(undefined4 param_1, int param_2)
 * called by: entry
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1006ccfc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10191dc0 = GetVersion();
    iVar1 = FUN_10071a96(1);
    if (iVar1 != 0) {
      _DAT_10191dcc = DAT_10191dc0 >> 8 & 0xff;
      _DAT_10191dc8 = DAT_10191dc0 & 0xff;
      DAT_10191dc0 = DAT_10191dc0 >> 0x10;
      _DAT_10191dc4 = _DAT_10191dc8 * 0x100 + _DAT_10191dcc;
      iVar1 = FUN_1006e75c();
      if (iVar1 != 0) {
        DAT_101934e4 = GetCommandLineA();
        DAT_10191e1c = FUN_100733c2();
        FUN_1006edc6();
        FUN_10073175();
        FUN_100730bc();
        FUN_1006ad57();
        DAT_10191e18 = DAT_10191e18 + 1;
        goto LAB_1006cdcf;
      }
      FUN_10071ad2();
    }
LAB_1006cd5c:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10191e18 < 1) goto LAB_1006cd5c;
      DAT_10191e18 = DAT_10191e18 + -1;
      if (DAT_10191df8 == 0) {
        FUN_1006ada6();
      }
      FUN_1006ef82();
      FUN_1006e7b0();
      FUN_10071ad2();
    }
    else if (param_2 == 3) {
      FUN_1006e848((LPVOID)0x0);
    }
LAB_1006cdcf:
    uVar2 = 1;
  }
  return uVar2;
}

/* 1006cea5  FUN_1006cea5  (280 bytes)
 * uint FUN_1006cea5(uint param_1, int * param_2)
 * called by: FUN_1006ac7a, FUN_1006ae94, FUN_1006b78e, FUN_1006b80e, FUN_1006ca7b, FUN_1006d6fe
 */
uint __cdecl FUN_1006cea5(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte_conflict bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1006cfb1:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1006cfb1;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_100977a8 && (piVar4 != (int *)&DAT_100977c8)) ||
        (bVar5 = FUN_100736ca(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10073686(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_1006f93d(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10097b70;
        }
        else {
          puVar6 = (undefined *)((&DAT_101923c0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1006efd6(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1006f93d(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}

/* 1006cfbd  FUN_1006cfbd  (1825 bytes)
 * int FUN_1006cfbd(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_1006ac7a, FUN_1006ae94, FUN_1006b78e, FUN_1006ca7b
 */
int __cdecl FUN_1006cfbd(int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)(&DAT_10081ec4)[(char)bVar9] & 0xf;
    }
    local_34 = (int)(char)(&DAT_10081ee4)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_1006d02b_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10097468[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_1006d6fe((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_1006d6fe((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_1006d79c((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_1006d79c((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != '4')) {
          local_34 = 0;
          goto switchD_1006d02b_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_1006d43c:
              local_30 = 7;
LAB_1006d443:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_1006d4ad;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_1006d1ea;
                }
                goto LAB_1006d5c7;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_1006d24b;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_1006d278:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_1006d79c((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_1006d7b9((int *)&param_3);
              local_10 = (undefined1 *)FUN_100736f3(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_1006d79c((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_10097694;
              pWVar4 = (WCHAR *)PTR_DAT_10097694;
              goto LAB_1006d3bd;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_1006d278;
            if (bVar9 == 100) goto LAB_1006d4a2;
          }
        }
        else {
LAB_1006d24b:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_1009769c)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_100976a8)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_100976a0)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_1006d3bd:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_1006d4a2:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_1006d79c((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_1006d4ad;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_1006d43c;
          }
          if (bVar9 == 0x73) {
LAB_1006d1ea:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_1006d79c((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10097694;
                pWVar4 = (WCHAR *)PTR_DAT_10097694;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10097698;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_1006d5c7;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_1006d5c7;
            local_30 = 0x27;
            goto LAB_1006d443;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_1006d4ad:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_1006d79c((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_1006d500;
            }
            uVar2 = FUN_1006d79c((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_1006d79c((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_1006d79c((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_1006d7a9((int *)&param_3);
        }
LAB_1006d500:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_1006d5c7:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_1006d5ff;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_1006d5ff:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_1006d733(0x20,iVar10,param_1,&local_18);
        }
        FUN_1006d764(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_1006d733(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_1006d764((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_100736f3(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_1006d764(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_1006d733(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}

/* 1006d6fe  FUN_1006d6fe  (53 bytes)
 * undefined FUN_1006d6fe(uint param_1, int * param_2, int * param_3)
 * called by: FUN_1006cfbd, FUN_1006d733, FUN_1006d764
 */
void __cdecl FUN_1006d6fe(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1006cea5(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

/* 1006d733  FUN_1006d733  (49 bytes)
 * undefined FUN_1006d733(uint param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_1006cfbd
 */
void __cdecl FUN_1006d733(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1006d6fe(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 1006d764  FUN_1006d764  (56 bytes)
 * undefined FUN_1006d764(char * param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_1006cfbd
 */
void __cdecl FUN_1006d764(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1006d6fe((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 1006d79c  FUN_1006d79c  (13 bytes)
 * undefined4 FUN_1006d79c(int * param_1)
 * called by: FUN_1006cfbd
 */
undefined4 __cdecl FUN_1006d79c(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

/* 1006d7a9  FUN_1006d7a9  (16 bytes)
 * undefined8 FUN_1006d7a9(int * param_1)
 * called by: FUN_1006cfbd
 */
undefined8 __cdecl FUN_1006d7a9(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

/* 1006d7b9  FUN_1006d7b9  (14 bytes)
 * undefined4 FUN_1006d7b9(int * param_1)
 * called by: FUN_1006cfbd
 */
undefined4 __cdecl FUN_1006d7b9(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

/* 1006d7c7  FUN_1006d7c7  (18 bytes)
 * undefined FUN_1006d7c7(void * param_1)
 * called by: FUN_1006accc
 */
void __fastcall FUN_1006d7c7(void *param_1)

{
  FUN_100738da(param_1,0x10000,0x30000);
  return;
}

/* 1006d7d9  FUN_1006d7d9  (62 bytes)
 * undefined4 FUN_1006d7d9(void)
 * called by: FUN_1006d817
 */
/* WARNING: Removing unreachable block (ram,0x1006d80e) */

undefined4 FUN_1006d7d9(void)

{
  return 0;
}

/* 1006d817  FUN_1006d817  (41 bytes)
 * undefined FUN_1006d817(void)
 * called by: FUN_1006accc
 */
void FUN_1006d817(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1006d7d9();
  return;
}

/* 1006d840  FUN_1006d840  (90 bytes)
 * undefined FUN_1006d840(char * param_1)
 */
void __cdecl FUN_1006d840(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10073a0b((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10097674 < 2) {
        uVar3 = (byte)PTR_DAT_10097468[*param_1 * 2] & 4;
        this = PTR_DAT_10097468;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1006c8b6(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10097678;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

/* 1006d93e  FUN_1006d93e  (97 bytes)
 * undefined1 * FUN_1006d93e(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * called by: __cfltcvt
 */
undefined1 * __cdecl FUN_1006d93e(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10073fa8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10073f31(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1006d99f(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}

/* 1006d99f  FUN_1006d99f  (194 bytes)
 * undefined1 * FUN_1006d99f(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * called by: FUN_1006d93e, FUN_1006db5d
 */
undefined1 * __cdecl
FUN_1006d99f(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1006dc41(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_10097678;
  }
  puVar3 = FUN_100740c0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}

/* 1006da61  FUN_1006da61  (85 bytes)
 * char * FUN_1006da61(undefined8 * param_1, char * param_2, size_t param_3)
 * called by: __cfltcvt
 */
char * __cdecl FUN_1006da61(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10073fa8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10073f31(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1006dab6(param_2,param_3,&local_14,'\0');
  return param_2;
}

/* 1006dab6  FUN_1006dab6  (167 bytes)
 * char * FUN_1006dab6(char * param_1, size_t param_2, int * param_3, char param_4)
 * called by: FUN_1006da61, FUN_1006db5d
 */
char * __cdecl FUN_1006dab6(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1006dc41(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1006dc41(pcVar3,1);
    *pcVar3 = DAT_10097678;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1006dc41(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}

/* 1006db5d  FUN_1006db5d  (147 bytes)
 * undefined FUN_1006db5d(undefined8 * param_1, char * param_2, size_t param_3, int param_4)
 * called by: __cfltcvt
 */
void __cdecl FUN_1006db5d(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10073fa8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10073f31(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1006d99f(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1006dab6(param_2,param_3,&local_14,'\x01');
  }
  return;
}

/* 1006dc41  FUN_1006dc41  (37 bytes)
 * undefined FUN_1006dc41(char * param_1, int param_2)
 * called by: FUN_1006d99f, FUN_1006dab6
 */
void __cdecl FUN_1006dc41(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1006ba20((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

/* 1006dc66  FUN_1006dc66  (41 bytes)
 * undefined FUN_1006dc66(void)
 * called by: FUN_1006e75c
 */
void FUN_1006dc66(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976f8);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976e8);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976d8);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976b8);
  return;
}

/* 1006dc8f  FUN_1006dc8f  (108 bytes)
 * undefined FUN_1006dc8f(void)
 * called by: FUN_1006e7b0
 */
void FUN_1006dc8f(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100976b4;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100976f8)) && (ppuVar1 != &PTR_DAT_100976e8)) &&
       ((ppuVar1 != &PTR_DAT_100976d8 && (ppuVar1 != &PTR_DAT_100976b8)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1006c158(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10097774);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976d8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976e8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976f8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100976b8);
  return;
}

/* 1006dcfb  FUN_1006dcfb  (97 bytes)
 * undefined FUN_1006dcfb(int param_1)
 * called by: FUN_1006ae5a, FUN_1006b9d2, FUN_1006c158, FUN_1006c216, FUN_1006c77b, FUN_1006dcfb, FUN_1006dd71, FUN_1006dea9, FUN_1006ea5b, FUN_1006ea8a, FUN_1006ec9d, FUN_1006f875, ... (27 total)
 */
void __cdecl FUN_1006dcfb(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100976b4 + param_1;
  if ((&DAT_100976b4)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1006dcfb(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1006c158(lpCriticalSection);
    }
    FUN_1006dd5c(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

/* 1006dd5c  FUN_1006dd5c  (21 bytes)
 * undefined FUN_1006dd5c(int param_1)
 * called by: FUN_1006ae63, FUN_1006b9d2, FUN_1006c158, FUN_1006c216, FUN_1006c77b, FUN_1006dcfb, FUN_1006dd71, FUN_1006dea9, FUN_1006eaad, FUN_1006eadc, FUN_1006ec9d, FUN_1006f875, ... (27 total)
 */
void __cdecl FUN_1006dd5c(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100976b4)[param_1]);
  return;
}

