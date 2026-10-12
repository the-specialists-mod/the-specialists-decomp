/* client.dll - unnamed_10098660 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10098660  FUN_10098660  (89 bytes)
 * undefined FUN_10098660(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_10098660(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  thunk_FUN_10098730(this);
  uVar1 = thunk_FUN_100a05e0(param_1);
  *(undefined4 *)((int)this + 600) = uVar1;
  uVar1 = thunk_FUN_100a05e0(param_2);
  *(undefined4 *)((int)this + 0x25c) = uVar1;
  *(undefined1 *)((int)this + 0x260) = 1;
  thunk_FUN_10098a50(this);
  return;
}

/* 100986d0  FUN_100986d0  (71 bytes)
 * undefined FUN_100986d0(int param_1, int param_2)
 */
void __thiscall FUN_100986d0(void *this,int param_1,int param_2)

{
  thunk_FUN_10098730(this);
  *(int *)((int)this + 600) = param_1;
  *(int *)((int)this + 0x25c) = param_2;
  *(undefined1 *)((int)this + 0x260) = 0;
  thunk_FUN_10098a50(this);
  return;
}

/* 10098730  FUN_10098730  (126 bytes)
 * undefined FUN_10098730(int * param_1)
 */
void __fastcall FUN_10098730(int *param_1)

{
  if ((char)param_1[0x98] != '\0') {
    FUN_100bbb10((void *)param_1[0x96]);
    FUN_100bbb10((void *)param_1[0x97]);
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  thunk_FUN_10098a50(param_1);
  return;
}

/* 100987d0  FUN_100987d0  (41 bytes)
 * undefined FUN_100987d0(undefined1 param_1)
 */
void __thiscall FUN_100987d0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xc4) = param_1;
  thunk_FUN_10098a50(this);
  return;
}

/* 10098810  FUN_10098810  (28 bytes)
 * undefined1 FUN_10098810(int param_1)
 */
undefined1 __fastcall FUN_10098810(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}

/* 10098840  FUN_10098840  (112 bytes)
 * undefined FUN_10098840(int * param_1, byte.conflict * param_2)
 */
void __cdecl FUN_10098840(int *param_1,byte_conflict *param_2)

{
  undefined1 local_204 [512];
  
  FUN_100c1a60(local_204,0x200,param_2,(undefined4 *)&stack0x0000000c);
  (**(code **)(param_1[0x32] + 0x200))(param_1 + 0x32,local_204);
  thunk_FUN_10098a50(param_1);
  return;
}

/* 100988d0  FUN_100988d0  (72 bytes)
 * undefined FUN_100988d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
void __thiscall
FUN_100988d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*(int *)((int)this + 200) + 0x120))(param_1,param_2,param_3,param_4);
  (**(code **)(*(int *)this + 0x30))();
  return;
}

/* 10098930  FUN_10098930  (33 bytes)
 * undefined FUN_10098930(undefined4 param_1)
 */
void __thiscall FUN_10098930(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}

/* 10098960  FUN_10098960  (28 bytes)
 * undefined1 FUN_10098960(int param_1)
 */
undefined1 __fastcall FUN_10098960(int param_1)

{
  return *(undefined1 *)(param_1 + 0x261);
}

/* 10098990  FUN_10098990  (41 bytes)
 * undefined FUN_10098990(undefined1 param_1)
 */
void __thiscall FUN_10098990(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x261) = param_1;
  thunk_FUN_10098a50(this);
  return;
}

/* 100989d0  FUN_100989d0  (92 bytes)
 * undefined FUN_100989d0(int * param_1)
 * called by: thunk_FUN_100989d0
 */
void __fastcall FUN_100989d0(int *param_1)

{
  *(char *)((int)param_1 + 0x261) = '\x01' - (*(char *)((int)param_1 + 0x261) != '\0');
  if (param_1[0x30] != 0) {
    (*(code *)**(undefined4 **)param_1[0x30])(param_1);
  }
  thunk_FUN_10098a50(param_1);
  return;
}

/* 10098a50  FUN_10098a50  (439 bytes)
 * undefined FUN_10098a50(int * param_1)
 */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10098a50(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *local_70;
  int local_24 [4];
  int *local_14 [4];
  
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    local_70 = (int *)param_1[0x97];
  }
  else {
    local_70 = (int *)param_1[0x96];
  }
  local_14[2] = local_70;
  local_14[0] = param_1 + 0x66;
  local_14[1] = param_1 + 0x32;
  local_24[1] = 0;
  local_24[0] = 0;
  local_14[3] = param_1;
  if (local_70 != (int *)0x0) {
    (**(code **)(*local_70 + 8))(local_24,local_24 + 1);
  }
  (**(code **)(local_14[3][0x66] + 0x1fc))(local_14[2]);
  (**(code **)(local_14[3][0x66] + 8))(local_24[0],local_24[1]);
  (**(code **)(local_14[3][0x32] + 0xc))(local_24 + 2,local_24 + 3);
  (**(code **)(local_14[3][0x32] + 0x21c))(3);
  uVar2 = (uint)((char)local_14[3][0x31] == '\0');
  bVar1 = local_24[1] <= local_24[2];
  (**(code **)*local_14[uVar2])(0,(local_24[(uint)bVar1 * 2 + 1] - local_24[uVar2 * 2 + 1]) / 2);
  (**(code **)*local_14[uVar2 == 0])
            (local_24[uVar2 * 2] + 5,
             (local_24[(uint)bVar1 * 2 + 1] - local_24[(uint)(uVar2 == 0) * 2 + 1]) / 2);
  if (local_24[3] < local_24[1]) {
    local_70 = (int *)local_24[1];
  }
  else {
    local_70 = (int *)local_24[3];
  }
  (**(code **)(*local_14[3] + 8))(local_24[0] + 5 + local_24[2],local_70);
  (**(code **)(*local_14[3] + 0x30))();
  return;
}

/* 10098c80  FUN_10098c80  (49 bytes)
 * undefined FUN_10098c80(undefined4 param_1)
 * called by: thunk_FUN_10098c80
 */
void __thiscall FUN_10098c80(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + -0xbc) + 0x1d4))(param_1);
  return;
}

/* 10098cc0  FUN_10098cc0  (4667 bytes)
 * undefined4 * FUN_10098cc0(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 */
undefined4 * __thiscall
FUN_10098cc0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *pLVar1;
  void *pvVar2;
  int iVar3;
  LineBorder *pLVar4;
  int *piVar5;
  Button *pBVar6;
  undefined4 uVar7;
  TextPanel *this_00;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  Button BVar13;
  undefined4 uStack_294;
  undefined4 uStack_290;
  ScrollPanel *local_238;
  int local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int *local_170;
  char *local_16c;
  char *local_168;
  int local_164;
  undefined1 local_160 [4];
  int *local_15c;
  int local_158;
  int *local_154;
  undefined *local_150;
  int local_14c;
  undefined4 *local_148;
  int local_144;
  Label local_140 [256];
  int local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  void *local_1c;
  char local_15;
  undefined4 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5b46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  thunk_FUN_1003a500(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *local_14 = &PTR_setPos_1027201c;
  local_15 = 0x27f < DAT_102e1234;
  _memset(local_14 + 0x5b,0,0xc00);
  local_1c = (void *)thunk_FUN_1009ace0(DAT_102e15e0);
  local_20 = thunk_FUN_100a28e0(local_1c,(byte_conflict *)"Title Font");
  local_24 = thunk_FUN_100a28e0(local_1c,(byte_conflict *)"Briefing Text");
  pLVar1 = operator_new(0xd0);
  local_8 = 0;
  if (pLVar1 == (Label *)0x0) {
    local_238 = (ScrollPanel *)0x0;
  }
  else {
    lVar11 = __ftol();
    iVar8 = (int)lVar11;
    lVar11 = __ftol();
    local_238 = (ScrollPanel *)vgui::Label::Label(pLVar1,"",(int)lVar11,iVar8);
  }
  local_8 = 0xffffffff;
  local_38 = (int *)local_238;
  (**(code **)(*(int *)local_238 + 0x40))();
  thunk_FUN_100a29a0(local_1c,local_20);
  (**(code **)(*local_38 + 0x208))();
  thunk_FUN_100a29d0(local_1c,local_20,&local_28,&local_2c,&local_30,&local_34);
  (**(code **)(*local_38 + 0x120))();
  thunk_FUN_100a2a40(local_1c,local_20,&local_28,&local_2c,&local_30,&local_34);
  (**(code **)(*local_38 + 300))();
  (**(code **)(*local_38 + 0x21c))();
  thunk_FUN_10068750("#Title_SelectYourClass");
  (**(code **)(*local_38 + 0x200))();
  pvVar2 = operator_new(0xd0);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_238 = (ScrollPanel *)0x0;
  }
  else {
    lVar11 = __ftol();
    iVar8 = (int)lVar11;
    lVar11 = __ftol();
    iVar9 = (int)lVar11;
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    lVar11 = __ftol();
    local_238 = thunk_FUN_1009db50(pvVar2,(int)lVar11,iVar3,iVar9,iVar8);
  }
  local_8 = 0xffffffff;
  local_14[0x5a] = local_238;
  (**(code **)(*(int *)local_14[0x5a] + 0x40))();
  (**(code **)(*(int *)local_14[0x5a] + 0x200))();
  (**(code **)(*(int *)local_14[0x5a] + 0x1fc))();
  uStack_290 = 0x10098fea;
  pLVar4 = operator_new(0x44);
  local_8 = 2;
  if (pLVar4 != (LineBorder *)0x0) {
    vgui::Color::Color((Color *)&uStack_294,0xb2,0x76,0,0);
    vgui::LineBorder::LineBorder(pLVar4);
  }
  local_8 = 0xffffffff;
  uStack_290 = 0x1009906f;
  (**(code **)(*(int *)local_14[0x5a] + 0xd4))();
  uStack_290 = 0x1009908b;
  (**(code **)(*(int *)local_14[0x5a] + 0x220))();
  uStack_290 = 0x100990a7;
  piVar5 = (int *)(**(code **)(*(int *)local_14[0x5a] + 0x204))();
  uStack_290 = 0x100990be;
  local_3c = (**(code **)(*piVar5 + 0x18))();
  uStack_290 = 1;
  uStack_294 = 0;
  (**(code **)(*(int *)local_14[0x5a] + 0x200))();
  (**(code **)(*(int *)local_14[0x5a] + 0x1fc))(0,0);
  (**(code **)(*(int *)local_14[0x5a] + 0x220))();
  for (local_40 = 0; local_40 < 0xb; local_40 = local_40 + 1) {
    lVar11 = __ftol();
    local_144 = (int)lVar11;
    pvVar2 = operator_new(0x108);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      local_238 = (ScrollPanel *)thunk_FUN_1009ad10(pvVar2,(&PTR_s_civilian_1028af84)[local_40]);
    }
    local_8 = 0xffffffff;
    local_148 = (undefined4 *)local_238;
    thunk_FUN_10068750((&PTR_s__Civilian_1028af54)[local_40]);
    FUN_100bb6e0(local_140,"%s");
    pBVar6 = operator_new(0x130);
    local_8 = 4;
    if (pBVar6 == (Button *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      BVar13 = (Button)0x1;
      lVar11 = __ftol();
      iVar9 = (int)lVar11;
      lVar11 = __ftol();
      iVar3 = (int)lVar11;
      iVar8 = local_144;
      lVar11 = __ftol();
      local_238 = (ScrollPanel *)
                  thunk_FUN_1009b050(pBVar6,local_40,(char *)local_140,(int)lVar11,iVar8,iVar3,iVar9
                                     ,BVar13);
    }
    local_8 = 0xffffffff;
    local_14[local_40 + 0x4d] = local_238;
    if ((local_40 < 1) || (9 < local_40)) {
      FUN_100bb6e0(local_140,"0");
    }
    else {
      FUN_100bb6e0(local_140,"%d");
    }
    thunk_FUN_1009d090((Label *)local_14[local_40 + 0x4d],local_140[0]);
    (**(code **)(*(int *)local_14[local_40 + 0x4d] + 0x21c))(3);
    (**(code **)(*(int *)local_14[local_40 + 0x4d] + 0x240))(local_148);
    pvVar2 = operator_new(0xc);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      local_238 = (ScrollPanel *)thunk_FUN_1009aec0(pvVar2,local_14,local_40);
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)local_14[local_40 + 0x4d] + 0x70))(local_238);
    (**(code **)(*(int *)local_14[local_40 + 0x4d] + 0x40))(local_14);
    pvVar2 = operator_new(0xc0);
    local_8 = 6;
    if (pvVar2 == (void *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      lVar11 = __ftol();
      local_238 = (ScrollPanel *)thunk_FUN_1003a570(pvVar2,0xff,0,0,local_3c,(int)lVar11);
    }
    local_8 = 0xffffffff;
    local_14[local_40 + 0x35] = local_238;
    uVar7 = (**(code **)(*(int *)local_14[0x5a] + 0x204))();
    (**(code **)(*(int *)local_14[local_40 + 0x35] + 0x40))(uVar7);
    lVar11 = __ftol();
    local_14c = (int)lVar11;
    if (local_15 != '\0') {
      lVar11 = __ftol();
      local_14c = (int)lVar11;
    }
    FUN_100bb6e0(local_140,(byte_conflict *)"#Title_%s");
    local_150 = thunk_FUN_10068750((char *)local_140);
    pLVar1 = operator_new(0xd0);
    local_8 = 7;
    if (pLVar1 == (Label *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      lVar11 = __ftol();
      local_238 = (ScrollPanel *)vgui::Label::Label(pLVar1,"",local_14c,(int)lVar11);
    }
    local_8 = 0xffffffff;
    local_154 = (int *)local_238;
    uVar7 = thunk_FUN_100a29a0(local_1c,local_20);
    (**(code **)(*local_154 + 0x208))(uVar7);
    (**(code **)(*local_154 + 0x40))(local_14[local_40 + 0x35]);
    thunk_FUN_100a29d0(local_1c,local_20,&local_28,&local_2c,&local_30,&local_34);
    (**(code **)(*local_154 + 0x120))(local_28,local_2c,local_30,local_34);
    thunk_FUN_100a2a40(local_1c,local_20,&local_28,&local_2c,&local_30,&local_34);
    (**(code **)(*local_154 + 300))(local_28,local_2c,local_30,local_34);
    (**(code **)(*local_154 + 0x21c))(3);
    (**(code **)(*local_154 + 0x200))(local_154,local_150);
    if (local_15 != '\0') {
      for (local_158 = 0; local_158 < 2; local_158 = local_158 + 1) {
        if (local_158 == 1) {
          FUN_100bb6e0(local_140,(byte_conflict *)"%sred");
        }
        else {
          FUN_100bb6e0(local_140,(byte_conflict *)"%sblue");
        }
        pvVar2 = operator_new(0xd4);
        local_8 = 8;
        if (pvVar2 == (void *)0x0) {
          local_238 = (ScrollPanel *)0x0;
        }
        else {
          lVar11 = __ftol();
          iVar8 = (int)lVar11;
          lVar11 = __ftol();
          local_238 = (ScrollPanel *)thunk_FUN_1009d600(pvVar2,local_140,0,0,(int)lVar11,iVar8);
        }
        local_8 = 0xffffffff;
        local_14[local_158 * 0xc + local_40 + 0x5b] = local_238;
        local_15c = (int *)local_14[local_158 * 0xc + local_40 + 0x5b];
        (**(code **)(*local_15c + 0x40))(local_14[local_40 + 0x35]);
        if (local_158 != 1) {
          (**(code **)(*local_15c + 0x24))(0);
        }
        (**(code **)(*local_154 + 0x210))(local_160,&local_164);
        (**(code **)(*local_15c + 0x18))(local_164 / 2);
        lVar11 = __ftol();
        (**(code **)*local_15c)((int)lVar11);
      }
    }
    thunk_FUN_10068580("#Title_CurrentlyOnYourTeam",(char *)(local_14 + 0x35c),0x80);
    pLVar1 = operator_new(0xd0);
    local_8 = 9;
    if (pLVar1 == (Label *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      lVar11 = __ftol();
      local_238 = (ScrollPanel *)vgui::Label::Label(pLVar1,"",local_14c,(int)lVar11);
    }
    local_8 = 0xffffffff;
    local_14[local_40 + 0x41] = local_238;
    (**(code **)(*(int *)local_14[local_40 + 0x41] + 0x40))(local_14[local_40 + 0x35]);
    (**(code **)(*(int *)local_14[local_40 + 0x41] + 300))(0,0,0,0xff);
    (**(code **)(*(int *)local_14[local_40 + 0x41] + 0x21c))(3);
    uVar7 = thunk_FUN_100a29a0(local_1c,local_24);
    (**(code **)(*(int *)local_14[local_40 + 0x41] + 0x208))(uVar7);
    FUN_100bb6e0(local_140,(byte_conflict *)"classes/short_%s.txt");
    local_168 = "Class Description not available.";
    local_16c = (char *)(*DAT_102e1594)(local_140,5,0);
    if (local_16c != (char *)0x0) {
      local_168 = local_16c;
    }
    this_00 = operator_new(0xc0);
    local_8 = 10;
    if (this_00 == (TextPanel *)0x0) {
      local_238 = (ScrollPanel *)0x0;
    }
    else {
      lVar11 = __ftol();
      iVar8 = (int)lVar11;
      lVar11 = __ftol();
      iVar9 = (int)lVar11;
      lVar11 = __ftol();
      local_238 = (ScrollPanel *)
                  vgui::TextPanel::TextPanel(this_00,local_168,local_14c,(int)lVar11,iVar9,iVar8);
    }
    local_8 = 0xffffffff;
    local_170 = (int *)local_238;
    (**(code **)(*(int *)local_238 + 0x40))(local_14[local_40 + 0x35]);
    uVar7 = thunk_FUN_100a29a0(local_1c,local_24);
    (**(code **)(*local_170 + 0x200))(uVar7);
    thunk_FUN_100a29d0(local_1c,local_24,&local_28,&local_2c,&local_30,&local_34);
    (**(code **)(*local_170 + 0x120))(local_28,local_2c,local_30,local_34);
    thunk_FUN_100a2a40(local_1c,local_24,&local_28,&local_2c,&local_30,&local_34);
    (**(code **)(*local_170 + 300))(local_28,local_2c,local_30,local_34);
    piVar5 = (int *)(**(code **)(*local_170 + 0x208))(&local_174,&local_178);
    (**(code **)(*piVar5 + 0x68))();
    (**(code **)(*local_170 + 8))(local_174,local_178);
    (**(code **)(*local_170 + 4))(&local_17c,&local_180);
    iVar8 = local_17c + local_174;
    local_188 = local_180 + local_178;
    if (local_14[local_40 + 0x5b] != 0) {
      (**(code **)(*(int *)local_14[local_40 + 0x5b] + 4))(&local_17c,&local_180);
      iVar9 = (**(code **)(*(int *)local_14[local_40 + 0x5b] + 0x1c))();
      if (local_188 < local_180 + iVar9) {
        local_188 = (**(code **)(*(int *)local_14[local_40 + 0x5b] + 0x1c))();
        local_188 = local_180 + local_188;
      }
    }
    (**(code **)(*(int *)local_14[local_40 + 0x35] + 8))(iVar8,local_188);
  }
  pBVar6 = operator_new(300);
  local_8 = 0xb;
  if (pBVar6 == (Button *)0x0) {
    local_238 = (ScrollPanel *)0x0;
  }
  else {
    BVar13 = (Button)0x0;
    lVar11 = __ftol();
    iVar8 = (int)lVar11;
    lVar11 = __ftol();
    iVar9 = (int)lVar11;
    iVar12 = 0;
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    pcVar10 = thunk_FUN_10068750("#Menu_Cancel");
    local_238 = (ScrollPanel *)thunk_FUN_1009cd50(pBVar6,pcVar10,iVar3,iVar12,iVar9,iVar8,BVar13);
  }
  local_8 = 0xffffffff;
  local_14[0x59] = local_238;
  (**(code **)(*(int *)local_14[0x59] + 0x40))(local_14);
  pvVar2 = operator_new(8);
  local_8 = 0xc;
  if (pvVar2 == (void *)0x0) {
    local_238 = (ScrollPanel *)0x0;
  }
  else {
    local_238 = (ScrollPanel *)thunk_FUN_1009ae20(pvVar2,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_14[0x59] + 0x240))(local_238);
  local_14[0x35b] = 0;
  ExceptionList = local_10;
  return local_14;
}

/* 1009a390  FUN_1009a390  (1247 bytes)
 * undefined FUN_1009a390(void)
 * called by: thunk_FUN_1009a390
 */
void FUN_1009a390(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int local_120;
  undefined1 local_11c [256];
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  if (DAT_10320644 != 0) {
    lVar2 = __ftol();
    local_c = (undefined4)lVar2;
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      iVar1 = thunk_FUN_1009acb0(DAT_102e15e0,DAT_10320644);
      local_11 = iVar1 == -1;
      if ((bool)local_11) {
        if (local_10 == 0) {
          (**(code **)(*(int *)local_8[0x4d] + 0x24))(1);
          (**(code **)(*local_8 + 0x20c))(0);
          lVar2 = __ftol();
          local_c = (undefined4)lVar2;
        }
        else {
          (**(code **)(*(int *)local_8[local_10 + 0x4d] + 0x24))(0);
        }
      }
      else {
        iVar1 = (**(code **)(*(int *)local_8[local_10 + 0x4d] + 0x260))();
        if ((iVar1 == 0) && (local_10 != 0)) {
          (**(code **)(*(int *)local_8[local_10 + 0x4d] + 0x24))(1);
          uVar3 = local_c;
          lVar2 = __ftol();
          (*(code *)**(undefined4 **)local_8[local_10 + 0x4d])((int)lVar2,uVar3);
          lVar2 = __ftol();
          local_c = (undefined4)lVar2;
          if (local_8[0x35b] == 0) {
            (**(code **)(*local_8 + 0x20c))(local_10);
          }
        }
        else {
          (**(code **)(*(int *)local_8[local_10 + 0x4d] + 0x24))(0);
        }
      }
      local_18 = 0;
      for (local_1c = 1; local_1c < 0x40; local_1c = local_1c + 1) {
        if ((((*(int *)(&DAT_1031f3e0 + local_1c * 0x14) != 0) &&
             ((&DAT_1031fa0a)[local_1c * 0x1a] != '\0')) &&
            ((&DAT_1031f3e6)[local_1c * 0x14] == '\0')) &&
           ((*(short *)(&DAT_1031fa08 + local_1c * 0x1a) == DAT_10320644 &&
            ((*(short *)(&DAT_1031fa06 + local_1c * 0x1a) == local_10 || (local_11 != '\0')))))) {
          local_18 = local_18 + 1;
        }
      }
      FUN_100bb6e0(local_11c,(byte_conflict *)(local_8 + 0x35c));
      (**(code **)(*(int *)local_8[local_10 + 0x41] + 0x200))(local_8[local_10 + 0x41],local_11c);
      (**(code **)(*(int *)local_8[local_10 + 0x41] + 0x120))
                (*(undefined4 *)(&DAT_1028aeec + (DAT_10320644 % DAT_1028aee8) * 0xc),
                 *(undefined4 *)(&DAT_1028aef0 + (DAT_10320644 % DAT_1028aee8) * 0xc),
                 *(undefined4 *)(&DAT_1028aef4 + (DAT_10320644 % DAT_1028aee8) * 0xc),0);
      for (local_120 = 0; local_120 < 0x40; local_120 = local_120 + 1) {
        if (local_8[local_120 * 0xc + local_10 + 0x5b] != 0) {
          (**(code **)(*(int *)local_8[local_120 * 0xc + local_10 + 0x5b] + 0x24))(0);
        }
        if (local_8[(DAT_10320644 + -1) * 0xc + local_10 + 0x5b] == 0) {
          if (local_8[local_10 + 0x5b] != 0) {
            (**(code **)(*(int *)local_8[local_10 + 0x5b] + 0x24))(1);
          }
        }
        else {
          (**(code **)(*(int *)local_8[(DAT_10320644 + -1) * 0xc + local_10 + 0x5b] + 0x24))(1);
        }
      }
    }
    if (DAT_10320530 == 0) {
      (**(code **)(*(int *)local_8[0x59] + 0x24))(0);
    }
    else {
      uVar3 = local_c;
      lVar2 = __ftol();
      (*(code *)**(undefined4 **)local_8[0x59])((int)lVar2,uVar3);
      (**(code **)(*(int *)local_8[0x59] + 0x24))(1);
    }
  }
  return;
}

/* 1009a9b0  FUN_1009a9b0  (208 bytes)
 * undefined4 FUN_1009a9b0(int param_1)
 * called by: thunk_FUN_1009a9b0
 */
uint __thiscall FUN_1009a9b0(void *this,int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_1 < 0) || (9 < param_1)) {
    uVar3 = in_EAX & 0xffffff00;
  }
  else if (*(int *)((int)this + param_1 * 4 + 0x134) == 0) {
    uVar3 = param_1 & 0xffffff00;
  }
  else {
    if (param_1 == 0) {
      iVar1 = thunk_FUN_1009acb0(DAT_102e15e0,DAT_10320644);
      if (iVar1 == -1) {
        uVar2 = (**(code **)(**(int **)((int)this + 0x134) + 600))();
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      param_1 = 10;
    }
    uVar3 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x260))();
    if (uVar3 == 0) {
      uVar2 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 600))();
      uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    else {
      uVar3 = uVar3 & 0xffffff00;
    }
  }
  return uVar3;
}

/* 1009aac0  FUN_1009aac0  (41 bytes)
 * undefined FUN_1009aac0(int * param_1)
 * called by: thunk_FUN_1009aac0
 */
void __fastcall FUN_1009aac0(int *param_1)

{
  (**(code **)(*param_1 + 0x210))();
  thunk_FUN_1003a620(param_1);
  return;
}

/* 1009ab00  FUN_1009ab00  (64 bytes)
 * undefined FUN_1009ab00(int * param_1)
 * called by: thunk_FUN_1009ab00
 */
void __fastcall FUN_1009ab00(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  (**(code **)(*(int *)param_1[0x5a] + 0x20c))(0,0);
  return;
}

/* 1009ab50  FUN_1009ab50  (276 bytes)
 * undefined FUN_1009ab50(int param_1)
 * called by: thunk_FUN_1009ab50
 */
void __thiscall FUN_1009ab50(void *this,int param_1)

{
  int local_c;
  
  for (local_c = 0; local_c < 0xb; local_c = local_c + 1) {
    (**(code **)(**(int **)((int)this + local_c * 4 + 0x134) + 0x234))(0);
    (**(code **)(**(int **)((int)this + local_c * 4 + 0xd4) + 0x24))(0);
  }
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

/* 1009acb0  FUN_1009acb0  (34 bytes)
 * undefined4 FUN_1009acb0(int param_1)
 */
undefined4 __thiscall FUN_1009acb0(void *this,int param_1)

{
  return *(undefined4 *)((int)this + param_1 * 4 + 0x894);
}

/* 1009ace0  FUN_1009ace0  (27 bytes)
 * int FUN_1009ace0(int param_1)
 */
int __fastcall FUN_1009ace0(int param_1)

{
  return param_1 + 0x22c;
}

/* 1009ad10  FUN_1009ad10  (49 bytes)
 * undefined4 * FUN_1009ad10(char * param_1)
 */
undefined4 * __thiscall FUN_1009ad10(void *this,char *param_1)

{
  thunk_FUN_1009ad50(this,param_1);
  *(undefined ***)this = &PTR_thunk_FUN_1009dff0_102722a4;
  return this;
}

/* 1009ad50  FUN_1009ad50  (88 bytes)
 * ActionSignal * FUN_1009ad50(char * param_1)
 */
ActionSignal * __thiscall FUN_1009ad50(void *this,char *param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009adc0_102722b0;
  _strncpy((char *)((int)this + 4),param_1,0x100);
  *(undefined1 *)((int)this + 0x103) = 0;
  *(undefined4 *)((int)this + 0x104) = 1;
  return this;
}

/* 1009adc0  FUN_1009adc0  (73 bytes)
 * undefined FUN_1009adc0(int param_1)
 */
void __fastcall FUN_1009adc0(int param_1)

{
  (*DAT_102e14a8)(param_1 + 4);
  if (*(int *)(param_1 + 0x104) == 0) {
    thunk_FUN_100aedd0(DAT_102e15e0);
  }
  else {
    thunk_FUN_100b0050((int)DAT_102e15e0);
  }
  return;
}

/* 1009ae20  FUN_1009ae20  (50 bytes)
 * ActionSignal * FUN_1009ae20(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_1009ae20(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009ae60_102722bc;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 1009ae60  FUN_1009ae60  (72 bytes)
 * undefined FUN_1009ae60(int param_1)
 * called by: thunk_FUN_1009ae60
 */
void __fastcall FUN_1009ae60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    thunk_FUN_100b0050((int)DAT_102e15e0);
  }
  else {
    thunk_FUN_100aedd0(DAT_102e15e0);
    thunk_FUN_100afd80(DAT_102e15e0,*(int *)(param_1 + 4));
  }
  return;
}

/* 1009aec0  FUN_1009aec0  (59 bytes)
 * InputSignal * FUN_1009aec0(undefined4 param_1, undefined4 param_2)
 */
InputSignal * __thiscall FUN_1009aec0(void *this,undefined4 param_1,undefined4 param_2)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009af10_102722c8;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}

/* 1009af10  FUN_1009af10  (21 bytes)
 * undefined FUN_1009af10(void)
 * called by: thunk_FUN_1009af10
 */
void FUN_1009af10(void)

{
  return;
}

/* 1009af30  FUN_1009af30  (21 bytes)
 * undefined FUN_1009af30(void)
 * called by: thunk_FUN_1009af30
 */
void FUN_1009af30(void)

{
  return;
}

/* 1009af50  FUN_1009af50  (21 bytes)
 * undefined FUN_1009af50(void)
 * called by: thunk_FUN_1009af50
 */
void FUN_1009af50(void)

{
  return;
}

/* 1009af70  FUN_1009af70  (21 bytes)
 * undefined FUN_1009af70(void)
 * called by: thunk_FUN_1009af70
 */
void FUN_1009af70(void)

{
  return;
}

/* 1009af90  FUN_1009af90  (21 bytes)
 * undefined FUN_1009af90(void)
 * called by: thunk_FUN_1009af90
 */
void FUN_1009af90(void)

{
  return;
}

/* 1009afb0  FUN_1009afb0  (21 bytes)
 * undefined FUN_1009afb0(void)
 * called by: thunk_FUN_1009afb0
 */
void FUN_1009afb0(void)

{
  return;
}

/* 1009afd0  FUN_1009afd0  (21 bytes)
 * undefined FUN_1009afd0(void)
 * called by: thunk_FUN_1009afd0
 */
void FUN_1009afd0(void)

{
  return;
}

/* 1009aff0  FUN_1009aff0  (21 bytes)
 * undefined FUN_1009aff0(void)
 * called by: thunk_FUN_1009aff0
 */
void FUN_1009aff0(void)

{
  return;
}

/* 1009b010  FUN_1009b010  (21 bytes)
 * undefined FUN_1009b010(void)
 * called by: thunk_FUN_1009b010
 */
void FUN_1009b010(void)

{
  return;
}

/* 1009b030  FUN_1009b030  (21 bytes)
 * undefined FUN_1009b030(void)
 * called by: thunk_FUN_1009b030
 */
void FUN_1009b030(void)

{
  return;
}

/* 1009b050  FUN_1009b050  (77 bytes)
 * Button * FUN_1009b050(Button * param_1, undefined4 param_2, char * param_3, int param_4, int param_5, int param_6, int param_7, Button param_8)
 */
Button * __thiscall
FUN_1009b050(Button *param_1,undefined4 param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,Button param_8)

{
  thunk_FUN_1009cd50(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined ***)param_1 = &PTR_setPos_10272304;
  *(undefined4 *)(param_1 + 300) = param_2;
  return param_1;
}

/* 1009b0b0  FUN_1009b0b0  (40 bytes)
 * undefined FUN_1009b0b0(int param_1)
 * called by: thunk_FUN_1009b0b0
 */
void __fastcall FUN_1009b0b0(int param_1)

{
  thunk_FUN_1003a5d0(param_1);
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  return;
}

/* 1009b0f0  FUN_1009b0f0  (576 bytes)
 * Panel * FUN_1009b0f0(int param_1, int param_2, int param_3, int param_4)
 */
Panel * __thiscall FUN_1009b0f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  EtchedBorder *this_00;
  TextGrid *this_01;
  LoweredBorder *this_02;
  TextEntry *this_03;
  void *this_04;
  Border *local_80;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5bb7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_setPos_102725ec;
  this_00 = operator_new(0x38);
  local_8 = 0;
  if (this_00 == (EtchedBorder *)0x0) {
    local_80 = (Border *)0x0;
  }
  else {
    local_80 = (Border *)vgui::EtchedBorder::EtchedBorder(this_00);
  }
  local_8 = 0xffffffff;
  vgui::Panel::setBorder(this,local_80);
  this_01 = operator_new(0xe8);
  local_8 = 1;
  if (this_01 == (TextGrid *)0x0) {
    local_80 = (Border *)0x0;
  }
  else {
    local_80 = (Border *)vgui::TextGrid::TextGrid(this_01,0x50,0x15,5,5,200,100);
  }
  local_8 = 0xffffffff;
  *(Border **)((int)this + 0xbc) = local_80;
  this_02 = operator_new(0x38);
  local_8 = 2;
  if (this_02 == (LoweredBorder *)0x0) {
    local_80 = (Border *)0x0;
  }
  else {
    local_80 = (Border *)vgui::LoweredBorder::LoweredBorder(this_02);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xbc) + 0xd4))(local_80);
  (**(code **)(**(int **)((int)this + 0xbc) + 0x40))(this);
  this_03 = operator_new(0xf4);
  local_8 = 3;
  if (this_03 == (TextEntry *)0x0) {
    local_80 = (Border *)0x0;
  }
  else {
    local_80 = (Border *)vgui::TextEntry::TextEntry(this_03,"",5,5,200,0x14);
  }
  local_8 = 0xffffffff;
  *(Border **)((int)this + 0xc0) = local_80;
  (**(code **)(**(int **)((int)this + 0xc0) + 0x40))(this);
  this_04 = operator_new(8);
  local_8 = 4;
  if (this_04 == (void *)0x0) {
    local_80 = (Border *)0x0;
  }
  else {
    local_80 = (Border *)thunk_FUN_1009b3c0(this_04,this);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xc0) + 0x238))(local_80);
  ExceptionList = local_10;
  return this;
}

/* 1009b3c0  FUN_1009b3c0  (50 bytes)
 * ActionSignal * FUN_1009b3c0(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_1009b3c0(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009b400_10272868;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 1009b400  FUN_1009b400  (43 bytes)
 * undefined FUN_1009b400(int param_1)
 * called by: thunk_FUN_1009b400
 */
void __fastcall FUN_1009b400(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x208))();
  return;
}

/* 1009b440  FUN_1009b440  (60 bytes)
 * undefined FUN_1009b440(undefined4 param_1)
 * called by: thunk_FUN_1009b440
 */
void __thiscall FUN_1009b440(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0xbc) + 0x20c))
            (*(undefined4 *)((int)this + 0xbc),&DAT_1026e5e4,param_1);
  return;
}

/* 1009b490  FUN_1009b490  (55 bytes)
 * undefined FUN_1009b490(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_1009b490
 */
void __thiscall FUN_1009b490(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0xbc) + 0x208))(param_1,param_2);
  return;
}

/* 1009b4e0  FUN_1009b4e0  (57 bytes)
 * undefined4 FUN_1009b4e0(int * param_1, undefined4 param_2)
 * called by: thunk_FUN_1009b4e0
 */
undefined4 __cdecl FUN_1009b4e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x200))(param_2,&stack0x0000000c);
  return uVar1;
}

/* 1009b530  FUN_1009b530  (110 bytes)
 * undefined FUN_1009b530(int param_1)
 * called by: thunk_FUN_1009b530
 */
void __fastcall FUN_1009b530(int param_1)

{
  undefined1 local_808 [2048];
  int local_8;
  
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x200))(0,local_808,0x800);
  (**(code **)(**(int **)(local_8 + 0xc0) + 0x1fc))(0,0);
  (*DAT_102e14a8)(local_808);
  return;
}

/* 1009b5c0  FUN_1009b5c0  (141 bytes)
 * undefined FUN_1009b5c0(int param_1, int param_2)
 * called by: thunk_FUN_1009b5c0
 */
void __thiscall FUN_1009b5c0(void *this,int param_1,int param_2)

{
  vgui::Panel::setSize(this,param_1,param_2);
  (**(code **)(*(int *)this + 0xe8))(&param_1,&param_2);
  (**(code **)(**(int **)((int)this + 0xbc) + 0x10))(5,5,param_1 + -10,param_2 + -0x23);
  (**(code **)(**(int **)((int)this + 0xc0) + 0x10))(5,param_2 + -0x19,param_1 + -10,0x14);
  return;
}

/* 1009b670  FUN_1009b670  (306 bytes)
 * Panel * FUN_1009b670(Panel * param_1)
 */
Panel * __thiscall FUN_1009b670(void *this,Panel *param_1)

{
  InputSignal *local_4c;
  
  vgui::Panel::Panel(this,param_1);
  if (param_1 == (Panel *)0x0) {
    local_4c = (InputSignal *)0x0;
  }
  else {
    local_4c = (InputSignal *)(param_1 + 0xbc);
  }
  vgui::InputSignal::InputSignal((InputSignal *)((int)this + 0xbc),local_4c);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(Panel *)((int)this + 0xd0) = param_1[0xd0];
  *(Panel *)((int)this + 0xd1) = param_1[0xd1];
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined ***)this = &vgui::TextEntry::_vftable__for__vgui__Panel__;
  *(undefined ***)((int)this + 0xbc) = &vgui::TextEntry::_vftable__for__vgui__InputSignal__;
  return this;
}

/* 1009b7f0  FUN_1009b7f0  (306 bytes)
 * Panel * FUN_1009b7f0(Panel * param_1)
 */
Panel * __thiscall FUN_1009b7f0(void *this,Panel *param_1)

{
  InputSignal *local_50;
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  if (param_1 == (Panel *)0x0) {
    local_50 = (InputSignal *)0x0;
  }
  else {
    local_50 = (InputSignal *)(param_1 + 0xbc);
  }
  vgui::InputSignal::operator=((InputSignal *)((int)this + 0xbc),local_50);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(Panel *)((int)this + 0xd0) = param_1[0xd0];
  *(Panel *)((int)this + 0xd1) = param_1[0xd1];
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xdc) = *(undefined4 *)(param_1 + local_c * 4 + 0xdc);
  }
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return this;
}

/* 1009b970  FUN_1009b970  (45 bytes)
 * Border * FUN_1009b970(Border * param_1)
 */
Border * __thiscall FUN_1009b970(void *this,Border *param_1)

{
  vgui::Border::Border(this,param_1);
  *(undefined ***)this = &vgui::EtchedBorder::_vftable_;
  return this;
}

/* 1009b9b0  FUN_1009b9b0  (36 bytes)
 * Border * FUN_1009b9b0(Border * param_1)
 */
Border * __thiscall FUN_1009b9b0(void *this,Border *param_1)

{
  vgui::Border::operator=(this,param_1);
  return this;
}

/* 1009b9e0  FUN_1009b9e0  (1762 bytes)
 * Panel * FUN_1009b9e0(int param_1, int param_2, int param_3, int param_4)
 */
Panel * __thiscall FUN_1009b9e0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  Label *pLVar1;
  HeaderPanel *this_00;
  ScrollPanel *this_01;
  int *piVar2;
  void *this_02;
  int iVar3;
  int iVar4;
  int iVar5;
  TablePanel *local_94;
  undefined4 local_90;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5c22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  vgui::Dar<char*>::Dar<char*>((Dar<char*> *)((int)this + 200));
  vgui::Dar<char*>::Dar<char*>((Dar<char*> *)((int)this + 0xd4));
  *(undefined ***)this = &PTR_setPos_10272c3c;
  vgui::Panel::setPaintBorderEnabled(this,false);
  vgui::Panel::setPaintBackgroundEnabled(this,false);
  vgui::Panel::setPaintEnabled(this,false);
  pLVar1 = operator_new(0xd0);
  local_8 = 0;
  if (pLVar1 == (Label *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = vgui::Label::Label(pLVar1,"Action");
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xe0) = local_90;
  (**(code **)(**(int **)((int)this + 0xe0) + 0x130))();
  (**(code **)(**(int **)((int)this + 0xe0) + 0x124))();
  pLVar1 = operator_new(0xd0);
  local_8 = 1;
  if (pLVar1 == (Label *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = vgui::Label::Label(pLVar1,"Key / Button");
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = local_90;
  (**(code **)(**(int **)((int)this + 0xe4) + 0x130))();
  (**(code **)(**(int **)((int)this + 0xe4) + 0x124))();
  pLVar1 = operator_new(0xd0);
  local_8 = 2;
  if (pLVar1 == (Label *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = vgui::Label::Label(pLVar1,"Alternate");
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = local_90;
  (**(code **)(**(int **)((int)this + 0xe8) + 0x130))();
  (**(code **)(**(int **)((int)this + 0xe8) + 0x124))();
  this_00 = operator_new(0xf8);
  local_8 = 3;
  if (this_00 == (HeaderPanel *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = vgui::HeaderPanel::HeaderPanel(this_00,0,0,param_3,0x14);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xbc) = local_90;
  (**(code **)(**(int **)((int)this + 0xbc) + 0x40))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x200))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x200))();
  (**(code **)(**(int **)((int)this + 0xbc) + 0x200))();
  this_01 = operator_new(0xd0);
  local_8 = 4;
  if (this_01 == (ScrollPanel *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = vgui::ScrollPanel::ScrollPanel(this_01,0,0x14,param_3,param_4 + -0x14);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = local_90;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0xd8))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0xdc))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0xe0))();
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
  (**(code **)(*piVar2 + 0xd8))();
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
  (**(code **)(*piVar2 + 0xdc))();
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
  (**(code **)(*piVar2 + 0xe0))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0x1fc))();
  this_02 = operator_new(0x110);
  local_8 = 5;
  if (this_02 == (void *)0x0) {
    local_94 = (TablePanel *)0x0;
  }
  else {
    iVar5 = 3;
    iVar4 = 800;
    piVar2 = (int *)(**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    local_94 = thunk_FUN_1009c280(this_02,this,0,0,iVar3,iVar4,iVar5);
  }
  local_8 = 0xffffffff;
  *(TablePanel **)((int)this + 0xc0) = local_94;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x204))();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x21c))();
  vgui::Color::Color((Color *)&stack0xfffffee8,200,0,0,0xff);
  (**(code **)(**(int **)((int)this + 0xc0) + 0x128))();
  vgui::Color::Color((Color *)&stack0xfffffedc,4);
  (**(code **)(**(int **)((int)this + 0xc0) + 0x11c))();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x204))(1,1);
  (**(code **)(**(int **)((int)this + 0xc0) + 0x208))(1,1);
  ExceptionList = local_10;
  return this;
}

/* 1009c280  FUN_1009c280  (368 bytes)
 * TablePanel * FUN_1009c280(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 */
TablePanel * __thiscall
FUN_1009c280(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *this_00;
  TextEntry *this_01;
  undefined4 local_68;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5c56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::TablePanel::TablePanel(this,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_10272ec4;
  *(undefined4 *)((int)this + 0x10c) = param_1;
  this_00 = operator_new(0xd0);
  local_8 = 0;
  if (this_00 == (Label *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = vgui::Label::Label(this_00,"You are a dumb monkey",0,0,100,0x14);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 0x104) = local_68;
  (**(code **)(**(int **)((int)this + 0x104) + 0x130))(5);
  (**(code **)(**(int **)((int)this + 0x104) + 0x124))(3);
  (**(code **)(**(int **)((int)this + 0x104) + 0x20c))(3);
  this_01 = operator_new(0xf4);
  local_8 = 1;
  if (this_01 == (TextEntry *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = vgui::TextEntry::TextEntry(this_01,"",0,0,100,0x14);
  }
  *(undefined4 *)((int)this + 0x108) = local_68;
  ExceptionList = local_10;
  return this;
}

/* 1009c450  FUN_1009c450  (33 bytes)
 * undefined FUN_1009c450(int param_1)
 * called by: thunk_FUN_1009c450
 */
void __fastcall FUN_1009c450(int param_1)

{
  thunk_FUN_1009c8d0(*(int *)(param_1 + 0x10c));
  return;
}

/* 1009c480  FUN_1009c480  (26 bytes)
 * undefined4 FUN_1009c480(void)
 * called by: thunk_FUN_1009c480
 */
undefined4 FUN_1009c480(void)

{
  return 0xc;
}

/* 1009c4a0  FUN_1009c4a0  (663 bytes)
 * undefined4 FUN_1009c4a0(int param_1, int param_2, undefined4 param_3, char param_4, char param_5)
 * called by: thunk_FUN_1009c4a0
 */
undefined4 __thiscall
FUN_1009c4a0(void *this,int param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  undefined1 local_208 [128];
  undefined1 local_188 [128];
  char local_108 [128];
  char local_88 [128];
  void *local_8;
  
  local_8 = this;
  thunk_FUN_1009c900(*(void **)((int)this + 0x10c),param_2,local_88,0x80,local_108,0x80);
  if (param_5 == '\0') {
    if (param_4 == '\0') {
      (**(code **)(**(int **)((int)local_8 + 0x104) + 0x130))(5);
      (**(code **)(**(int **)((int)local_8 + 0x104) + 0x124))(3);
    }
    else {
      (**(code **)(**(int **)((int)local_8 + 0x104) + 0x130))(4);
      (**(code **)(**(int **)((int)local_8 + 0x104) + 0x124))(3);
    }
  }
  else {
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x130))(3);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x124))(5);
  }
  if (param_1 == 0) {
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x200))
              (*(undefined4 *)((int)local_8 + 0x104),local_108);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x21c))(3);
  }
  else if (param_1 == 1) {
    thunk_FUN_1009ca40(local_88,local_188,0x80,local_208);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x200))
              (*(undefined4 *)((int)local_8 + 0x104),local_188);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x21c))(4);
  }
  else if (param_1 == 2) {
    thunk_FUN_1009ca40(local_88,local_188,0x80,local_208);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x200))
              (*(undefined4 *)((int)local_8 + 0x104),local_208);
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x21c))(4);
  }
  else {
    (**(code **)(**(int **)((int)local_8 + 0x104) + 0x200))
              (*(undefined4 *)((int)local_8 + 0x104),"");
  }
  return *(undefined4 *)((int)local_8 + 0x104);
}

/* 1009c7e0  FUN_1009c7e0  (105 bytes)
 * undefined4 FUN_1009c7e0(int param_1)
 * called by: thunk_FUN_1009c7e0
 */
undefined4 __fastcall FUN_1009c7e0(int param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen("Goat");
  (**(code **)(**(int **)(param_1 + 0x108) + 0x1fc))(&DAT_1027318c,sVar1);
  (**(code **)(**(int **)(param_1 + 0x108) + 0xa4))();
  return *(undefined4 *)(param_1 + 0x108);
}

/* 1009c870  FUN_1009c870  (75 bytes)
 * undefined FUN_1009c870(char * param_1, char * param_2)
 */
void __thiscall FUN_1009c870(void *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = vgui::vgui_strdup(param_1);
  vgui::Dar<char*>::addElement((Dar<char*> *)((int)this + 200),pcVar1);
  pcVar1 = vgui::vgui_strdup(param_2);
  vgui::Dar<char*>::addElement((Dar<char*> *)((int)this + 0xd4),pcVar1);
  return;
}

/* 1009c8d0  FUN_1009c8d0  (33 bytes)
 * undefined FUN_1009c8d0(int param_1)
 */
void __fastcall FUN_1009c8d0(int param_1)

{
  vgui::Dar<char*>::getCount((Dar<char*> *)(param_1 + 200));
  return;
}

/* 1009c900  FUN_1009c900  (91 bytes)
 * undefined FUN_1009c900(int param_1, char * param_2, int param_3, char * param_4, int param_5)
 */
void __thiscall
FUN_1009c900(void *this,int param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = vgui::Dar<char*>::operator[]((Dar<char*> *)((int)this + 200),param_1);
  vgui::vgui_strcpy(param_2,param_3,pcVar1);
  pcVar1 = vgui::Dar<char*>::operator[]((Dar<char*> *)((int)this + 0xd4),param_1);
  vgui::vgui_strcpy(param_4,param_5,pcVar1);
  return;
}

/* 1009c980  FUN_1009c980  (153 bytes)
 * undefined FUN_1009c980(InputStream * param_1)
 */
void FUN_1009c980(InputStream *param_1)

{
  int iVar1;
  char local_220 [128];
  char local_1a0 [128];
  char local_120 [259];
  bool local_1d;
  DataInputStream local_1c [20];
  void *local_8;
  
  if (param_1 != (InputStream *)0x0) {
    vgui::DataInputStream::DataInputStream(local_1c,param_1);
    while (vgui::DataInputStream::readLine(local_1c,local_120,0x100,&local_1d), local_1d != false) {
      iVar1 = FUN_100c19a0(local_120,(byte_conflict *)"\"%[^\"]\" \"%[^\"]\"");
      if (iVar1 == 2) {
        thunk_FUN_1009c870(local_8,local_1a0,local_220);
      }
    }
  }
  return;
}

/* 1009ca40  FUN_1009ca40  (63 bytes)
 * undefined FUN_1009ca40(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4)
 */
void FUN_1009ca40(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4)

{
  FUN_100bb6e0(param_2,(byte_conflict *)"%s : Bind");
  FUN_100bb6e0(param_4,(byte_conflict *)"%s : BindAlt");
  return;
}

/* 1009ca90  FUN_1009ca90  (21 bytes)
 * undefined FUN_1009ca90(void)
 */
void FUN_1009ca90(void)

{
  return;
}

/* 1009cab0  FUN_1009cab0  (149 bytes)
 * undefined4 * FUN_1009cab0(int param_1, int param_2)
 */
undefined4 * __thiscall FUN_1009cab0(void *this,int param_1,int param_2)

{
  InputStream *local_4c;
  
  if (param_2 != 0) {
    *(undefined1 **)((int)this + 4) = &vgui::DataInputStream::_vbtable_;
    if (param_1 == 0) {
      local_4c = (InputStream *)0x0;
    }
    else {
      local_4c = (InputStream *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4));
    }
    vgui::InputStream::InputStream((InputStream *)((int)this + 0x10),local_4c);
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &vgui::DataInputStream::_vftable__for__vgui__DataInputStream__;
  *(undefined ***)((int)this + *(int *)(*(int *)((int)this + 4) + 4) + 4) =
       &vgui::DataInputStream::_vftable__for__vgui__InputStream__;
  *(undefined4 *)((int)this + *(int *)(*(int *)((int)this + 4) + 4)) = 0;
  return this;
}

/* 1009cb70  FUN_1009cb70  (107 bytes)
 * int FUN_1009cb70(int param_1)
 */
int __thiscall FUN_1009cb70(void *this,int param_1)

{
  InputStream *local_4c;
  
  if (*(undefined1 **)((int)this + 4) == &vgui::DataInputStream::_vbtable_) {
    if (param_1 == 0) {
      local_4c = (InputStream *)0x0;
    }
    else {
      local_4c = (InputStream *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4));
    }
    vgui::InputStream::operator=
              ((InputStream *)((int)this + *(int *)(*(int *)((int)this + 4) + 4) + 4),local_4c);
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (int)this;
}

/* 1009cc00  FUN_1009cc00  (14 bytes)
 * undefined FUN_1009cc00()
 */
void __thiscall FUN_1009cc00(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100bb67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekStart((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1009cc10  FUN_1009cc10  (14 bytes)
 * undefined FUN_1009cc10()
 */
void __thiscall FUN_1009cc10(int param_1,int param_2,bool *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100bb680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekRelative
            ((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2,param_3);
  return;
}

/* 1009cc20  FUN_1009cc20  (14 bytes)
 * undefined FUN_1009cc20()
 */
void __thiscall FUN_1009cc20(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100bb686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekEnd((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1009cc30  FUN_1009cc30  (14 bytes)
 * undefined FUN_1009cc30()
 */
void __thiscall FUN_1009cc30(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100bb68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::getAvailable((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2)
  ;
  return;
}

/* 1009cc40  FUN_1009cc40  (14 bytes)
 * undefined FUN_1009cc40()
 */
void __thiscall FUN_1009cc40(int param_1,uchar *param_2,int param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x100bb692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::readUChar
            ((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2,param_3,param_4);
  return;
}

/* 1009cc50  FUN_1009cc50  (14 bytes)
 * undefined FUN_1009cc50()
 */
void __thiscall FUN_1009cc50(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100bb698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::readUChar((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1009cc60  FUN_1009cc60  (14 bytes)
 * undefined FUN_1009cc60()
 */
void __thiscall FUN_1009cc60(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100bb69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::close((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1009cc70  FUN_1009cc70  (100 bytes)
 * undefined * FUN_1009cc70(byte.conflict * param_1)
 */
undefined * __cdecl FUN_1009cc70(byte_conflict *param_1)

{
  undefined1 local_108 [256];
  undefined4 local_8;
  
  if (DAT_102e1234 < 0x280) {
    local_8 = 0x140;
  }
  else {
    local_8 = 0x280;
  }
  FUN_100bb6e0(local_108,param_1);
  FUN_100bb6e0(&DAT_1031c338,(byte_conflict *)"gfx/vgui/%s.tga");
  return &DAT_1031c338;
}

/* 1009ccf0  FUN_1009ccf0  (73 bytes)
 * undefined4 FUN_1009ccf0(void)
 */
undefined4 FUN_1009ccf0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte_conflict local_108 [260];
  
  FUN_100bb6e0(local_108,(byte_conflict *)"%%d_%s");
  puVar1 = thunk_FUN_1009cc70(local_108);
  uVar2 = thunk_FUN_100a05e0(puVar1);
  return uVar2;
}

/* 1009cd50  FUN_1009cd50  (107 bytes)
 * Button * FUN_1009cd50(Button * param_1, char * param_2, int param_3, int param_4, int param_5, int param_6, Button param_7)
 */
Button * __thiscall
FUN_1009cd50(Button *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
            Button param_7)

{
  vgui::Button::Button(param_1,"",param_3,param_4,param_5,param_6);
  *(undefined ***)param_1 = &PTR_setPos_1027328c;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0x128] = param_7;
  thunk_FUN_1009ce70((int *)param_1);
  thunk_FUN_1009d040(param_1,param_2);
  return param_1;
}

/* 1009cde0  FUN_1009cde0  (104 bytes)
 * Button * FUN_1009cde0(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_1009cde0(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  vgui::Button::Button(this,"",param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_1027328c;
  *(undefined4 *)((int)this + 0xf0) = param_1;
  *(undefined1 *)((int)this + 0x128) = 0;
  thunk_FUN_1009ce70(this);
  thunk_FUN_1009d040(this,param_2);
  return this;
}

/* 1009ce70  FUN_1009ce70  (224 bytes)
 * undefined FUN_1009ce70(int * param_1)
 */
void __fastcall FUN_1009ce70(int *param_1)

{
  void *this;
  undefined4 *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5c7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  (**(code **)(*param_1 + 0x124))(3);
  (**(code **)(*param_1 + 0x21c))(3);
  if ((char)param_1[0x4a] == '\0') {
    this = operator_new(0xc);
    local_8 = 0;
    if (this == (void *)0x0) {
      local_60 = (undefined4 *)0x0;
    }
    else {
      local_60 = thunk_FUN_1009e1d0(this,param_1);
    }
    local_8 = 0xffffffff;
    (**(code **)(*param_1 + 0x70))(local_60);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  ExceptionList = local_10;
  return;
}

/* 1009cf90  FUN_1009cf90  (134 bytes)
 * undefined FUN_1009cf90(Label * param_1)
 */
void __fastcall FUN_1009cf90(Label *param_1)

{
  undefined1 local_88 [31];
  undefined1 local_69;
  Label *local_8;
  
  local_8 = param_1;
  if (param_1[0x120] == (Label)0x0) {
    FUN_100bb6e0(local_88,(byte_conflict *)"     %s");
  }
  else {
    FUN_100bb6e0(local_88,(byte_conflict *)"  %c  %s");
  }
  local_69 = 0;
  vgui::Label::setText(local_8,(char *)local_8);
  return;
}

/* 1009d040  FUN_1009d040  (63 bytes)
 * undefined FUN_1009d040(char * param_1)
 */
void __thiscall FUN_1009d040(void *this,char *param_1)

{
  _strncpy((char *)((int)this + 0x100),param_1,0x20);
  *(undefined1 *)((int)this + 0x11f) = 0;
  thunk_FUN_1009cf90(this);
  return;
}

/* 1009d090  FUN_1009d090  (41 bytes)
 * undefined FUN_1009d090(Label * param_1, Label param_2)
 */
void __thiscall FUN_1009d090(Label *param_1,Label param_2)

{
  param_1[0x120] = param_2;
  thunk_FUN_1009cf90(param_1);
  return;
}

/* 1009d0d0  FUN_1009d0d0  (28 bytes)
 * undefined1 FUN_1009d0d0(int param_1)
 */
undefined1 __fastcall FUN_1009d0d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x120);
}

/* 1009d100  FUN_1009d100  (51 bytes)
 * undefined FUN_1009d100(int param_1)
 */
void __thiscall FUN_1009d100(void *this,int param_1)

{
  *(int *)((int)this + 0xf4) = param_1;
  (**(code **)(*(int *)this + 0x250))(0,0);
  return;
}

/* 1009d140  FUN_1009d140  (51 bytes)
 * undefined FUN_1009d140(undefined4 param_1)
 */
void __thiscall FUN_1009d140(void *this,int param_1)

{
  if (*(int *)((int)this + 0xf4) != 0) {
    thunk_FUN_100a9250(*(void **)((int)this + 0xf4),param_1);
  }
  return;
}

/* 1009d180  FUN_1009d180  (149 bytes)
 * undefined FUN_1009d180(Label * param_1)
 * called by: thunk_FUN_1009d180
 */
void __fastcall FUN_1009d180(Label *param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    cVar1 = (**(code **)(*(int *)param_1 + 0x238))();
    if (cVar1 == '\0') {
      thunk_FUN_1009e0a0(*(int **)(param_1 + 0xfc));
    }
    else {
      thunk_FUN_1009e0e0(*(int **)(param_1 + 0xfc));
    }
  }
  cVar1 = (**(code **)(*(int *)param_1 + 0x248))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)param_1 + 0x124))(3);
  }
  else {
    (**(code **)(*(int *)param_1 + 0x124))(7);
  }
  vgui::Label::paint(param_1);
  return;
}

/* 1009d240  FUN_1009d240  (138 bytes)
 * undefined FUN_1009d240(int * param_1)
 * called by: thunk_FUN_1009d240
 */
void __fastcall FUN_1009d240(int *param_1)

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

/* 1009d2f0  FUN_1009d2f0  (100 bytes)
 * undefined FUN_1009d2f0(int * param_1)
 */
void __fastcall FUN_1009d2f0(int *param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  
  iVar1 = thunk_FUN_1009d3c0((int)param_1);
  if (iVar1 != 0) {
    thunk_FUN_100a8e50(iVar1);
    this = (void *)thunk_FUN_1009e170(iVar1);
    if (this != (void *)0x0) {
      piVar2 = (int *)thunk_FUN_100a8f00(this,iVar1);
      thunk_FUN_1009d2f0(piVar2);
    }
  }
  (**(code **)(*param_1 + 0x234))(1);
  return;
}

/* 1009d370  FUN_1009d370  (59 bytes)
 * undefined FUN_1009d370(int * param_1)
 */
void __fastcall FUN_1009d370(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1009d3c0((int)param_1);
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_1009e140((int)param_1), iVar1 != 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x234))(0);
  return;
}

/* 1009d3c0  FUN_1009d3c0  (28 bytes)
 * undefined4 FUN_1009d3c0(int param_1)
 */
undefined4 __fastcall FUN_1009d3c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}

/* 1009d3f0  FUN_1009d3f0  (33 bytes)
 * undefined FUN_1009d3f0(undefined4 param_1)
 */
void __thiscall FUN_1009d3f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xf8) = param_1;
  return;
}

/* 1009d420  FUN_1009d420  (272 bytes)
 * undefined4 FUN_1009d420(int param_1)
 * called by: thunk_FUN_1009d420
 */
undefined4 __fastcall FUN_1009d420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 300) == -1) {
    iVar1 = thunk_FUN_1009acb0(DAT_102e15e0,DAT_10320644);
    if (iVar1 == -1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar3 = thunk_FUN_1009acb0(DAT_102e15e0,0);
    if (((uVar3 & *(uint *)(&DAT_1028afbc + *(int *)(param_1 + 300) * 4)) == 0) &&
       (uVar3 = thunk_FUN_1009acb0(DAT_102e15e0,DAT_10320644),
       (uVar3 & *(uint *)(&DAT_1028afbc + *(int *)(param_1 + 300) * 4)) == 0)) {
      fVar4 = (float10)thunk_FUN_1000cd40("hud_classautokill");
      if ((fVar4 == (float10)0.0) ||
         (((iVar1 = thunk_FUN_1009e1a0((int)DAT_102e15e0), iVar1 == 0 ||
           (*(int *)(param_1 + 300) != 10)) &&
          ((iVar1 = thunk_FUN_1009e1a0((int)DAT_102e15e0), iVar1 != 0 ||
           (*(int *)(param_1 + 300) != DAT_10320530)))))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* 1009d580  FUN_1009d580  (103 bytes)
 * Label * FUN_1009d580(undefined4 param_1, int param_2, int param_3)
 */
Label * __thiscall FUN_1009d580(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  vgui::Label::Label(this,"",param_2,param_3);
  *(undefined ***)this = &PTR_setPos_1027358c;
  vgui::Label::setContentFitted(this,true);
  uVar1 = thunk_FUN_1009ccf0();
  *(undefined4 *)((int)this + 0xd0) = uVar1;
  vgui::Label::setImage(this,*(Image **)((int)this + 0xd0));
  return this;
}

/* 1009d600  FUN_1009d600  (111 bytes)
 * Label * FUN_1009d600(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 */
Label * __thiscall
FUN_1009d600(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  vgui::Label::Label(this,"",param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_1027358c;
  vgui::Label::setContentFitted(this,true);
  uVar1 = thunk_FUN_1009ccf0();
  *(undefined4 *)((int)this + 0xd0) = uVar1;
  vgui::Label::setImage(this,*(Image **)((int)this + 0xd0));
  return this;
}

/* 1009d690  FUN_1009d690  (53 bytes)
 * undefined4 FUN_1009d690(int param_1)
 * called by: thunk_FUN_1009d690
 */
undefined4 __fastcall FUN_1009d690(int param_1)

{
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0xd0) + 8))(&local_c,local_10);
  return local_c;
}

/* 1009d6e0  FUN_1009d6e0  (53 bytes)
 * undefined4 FUN_1009d6e0(int param_1)
 * called by: thunk_FUN_1009d6e0
 */
undefined4 __fastcall FUN_1009d6e0(int param_1)

{
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0xd0) + 8))(local_c,&local_10);
  return local_10;
}

/* 1009d730  FUN_1009d730  (67 bytes)
 * undefined FUN_1009d730(int * param_1)
 * called by: thunk_FUN_1009d730
 */
void __fastcall FUN_1009d730(int *param_1)

{
  (**(code **)(*param_1 + 0x17c))(5);
  (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  return;
}

/* 1009d790  FUN_1009d790  (231 bytes)
 * Button * FUN_1009d790(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 */
Button * __thiscall
FUN_1009d790(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  undefined4 uVar1;
  void *this_00;
  InputSignal *local_64;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5c9b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_1009cd50(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_1027383c;
  vgui::Label::setFgColor(this,3);
  uVar1 = thunk_FUN_1009ccf0();
  *(undefined4 *)((int)this + 300) = uVar1;
  vgui::Label::setImage(this,*(Image **)((int)this + 300));
  this_00 = operator_new(0xc);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_64 = (InputSignal *)0x0;
  }
  else {
    local_64 = (InputSignal *)thunk_FUN_1009e1d0(this_00,this);
  }
  local_8 = 0xffffffff;
  vgui::Panel::addInputSignal(this,local_64);
  ExceptionList = local_10;
  return this;
}

/* 1009d8b0  FUN_1009d8b0  (195 bytes)
 * undefined FUN_1009d8b0(int * param_1)
 * called by: thunk_FUN_1009d8b0
 */
void __fastcall FUN_1009d8b0(int *param_1)

{
  char cVar1;
  Color aCStack_68 [8];
  undefined4 uStack_60;
  
  if (param_1[0x4b] != 0) {
    uStack_60 = 0x1009d8db;
    cVar1 = (**(code **)(*param_1 + 0x248))();
    if (cVar1 == '\0') {
      vgui::Color::Color(aCStack_68,0xff,0xff,0xff,0x80);
      (**(code **)(*(int *)param_1[0x4b] + 0xc))();
    }
    else {
      vgui::Color::Color(aCStack_68,0xff,0xff,0xff,0);
      (**(code **)(*(int *)param_1[0x4b] + 0xc))();
    }
    (**(code **)(*(int *)param_1[0x4b] + 0x5c))(param_1);
  }
  return;
}

/* 1009d9b0  FUN_1009d9b0  (19 bytes)
 * undefined FUN_1009d9b0(void)
 * called by: thunk_FUN_1009d9b0
 */
void FUN_1009d9b0(void)

{
  return;
}

/* 1009d9d0  FUN_1009d9d0  (306 bytes)
 * undefined FUN_1009d9d0(int * param_1)
 * called by: thunk_FUN_1009d9d0
 */
void __fastcall FUN_1009d9d0(int *param_1)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xe8))(&local_c,&local_10);
  (**(code **)(*local_8 + 0x21c))(&local_14,&local_18);
  (**(code **)(*local_8 + 0x17c))(6);
  (**(code **)(*local_8 + 0x184))(0,0,local_c,local_10);
  cVar1 = (**(code **)(*local_8 + 0x204))();
  if (cVar1 == '\0') {
    (**(code **)(*local_8 + 0x17c))(4);
    (**(code **)(*local_8 + 0x180))(local_14,0,local_18,local_10);
    (**(code **)(*local_8 + 0x17c))(3);
    (**(code **)(*local_8 + 0x184))(local_14,0,local_18,local_10);
  }
  else {
    (**(code **)(*local_8 + 0x17c))(4);
    (**(code **)(*local_8 + 0x180))(0,local_14,local_c,local_18);
    (**(code **)(*local_8 + 0x17c))(3);
    (**(code **)(*local_8 + 0x184))(0,local_14,local_c,local_18);
  }
  return;
}

/* 1009db50  FUN_1009db50  (860 bytes)
 * ScrollPanel * FUN_1009db50(int param_1, int param_2, int param_3, int param_4)
 */
ScrollPanel * __thiscall FUN_1009db50(void *this,int param_1,int param_2,int param_3,int param_4)

{
  ScrollBar *pSVar1;
  void *pvVar2;
  Button *local_8c;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5cf2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::ScrollPanel::ScrollPanel(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_setPos_10273b24;
  pSVar1 = vgui::ScrollPanel::getVerticalScrollBar(this);
  pvVar2 = operator_new(0x130);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = thunk_FUN_1009d790(pvVar2,0,"",0,0,0x10,0x10);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(local_8c,0);
  pvVar2 = operator_new(0x130);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = thunk_FUN_1009d790(pvVar2,1,"",0,0,0x10,0x10);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(local_8c,1);
  pvVar2 = operator_new(0xfc);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = (Button *)
               thunk_FUN_1009e460(pvVar2,0,param_3 + -1,param_3,param_4 + param_3 * -2 + 2,true);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x224))(local_8c);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  pSVar1 = vgui::ScrollPanel::getHorizontalScrollBar(this);
  pvVar2 = operator_new(0x130);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = thunk_FUN_1009d790(pvVar2,2,"",0,0,0x10,0x10);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(local_8c,0);
  pvVar2 = operator_new(0x130);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = thunk_FUN_1009d790(pvVar2,3,"",0,0,0x10,0x10);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(local_8c,1);
  pvVar2 = operator_new(0xfc);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_8c = (Button *)0x0;
  }
  else {
    local_8c = (Button *)thunk_FUN_1009e460(pvVar2,param_4,0,param_3 + param_4 * -2,param_4,false);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x224))(local_8c);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  ExceptionList = local_10;
  return this;
}

/* 1009df90  FUN_1009df90  (66 bytes)
 * undefined FUN_1009df90(int param_1)
 * called by: thunk_FUN_1009df90
 */
void __fastcall FUN_1009df90(int param_1)

{
  if ((DAT_102e15e0 != 0) && (*(int *)(param_1 + 8) != 0)) {
    (**(code **)(**(int **)(param_1 + 8) + 0x20c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}

/* 1009dff0  FUN_1009dff0  (113 bytes)
 * undefined FUN_1009dff0(int param_1)
 * called by: thunk_FUN_1009dff0
 */
void __fastcall FUN_1009dff0(int param_1)

{
  float10 fVar1;
  
  thunk_FUN_1009adc0(param_1);
  fVar1 = (float10)thunk_FUN_1000cd40("hud_classautokill");
  if ((fVar1 != (float10)0.0) && (DAT_10320530 != 0)) {
    (*DAT_102e14a8)(&DAT_10273dbc);
  }
  return;
}

/* 1009e080  FUN_1009e080  (19 bytes)
 * undefined FUN_1009e080(void)
 * called by: thunk_FUN_1009e080
 */
void FUN_1009e080(void)

{
  return;
}

/* 1009e0a0  FUN_1009e0a0  (43 bytes)
 * undefined FUN_1009e0a0(int * param_1)
 */
void __fastcall FUN_1009e0a0(int *param_1)

{
  param_1[0x34] = 0;
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 1009e0e0  FUN_1009e0e0  (43 bytes)
 * undefined FUN_1009e0e0(int * param_1)
 */
void __fastcall FUN_1009e0e0(int *param_1)

{
  param_1[0x34] = 1;
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 1009e120  FUN_1009e120  (21 bytes)
 * undefined4 FUN_1009e120(void)
 */
undefined4 FUN_1009e120(void)

{
  return 0;
}

/* 1009e140  FUN_1009e140  (28 bytes)
 * undefined4 FUN_1009e140(int param_1)
 */
undefined4 __fastcall FUN_1009e140(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}

/* 1009e170  FUN_1009e170  (28 bytes)
 * undefined4 FUN_1009e170(int param_1)
 */
undefined4 __fastcall FUN_1009e170(int param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}

/* 1009e1a0  FUN_1009e1a0  (28 bytes)
 * undefined4 FUN_1009e1a0(int param_1)
 */
undefined4 __fastcall FUN_1009e1a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b8);
}

/* 1009e1d0  FUN_1009e1d0  (54 bytes)
 * undefined4 * FUN_1009e1d0(undefined4 param_1)
 */
undefined4 * __thiscall FUN_1009e1d0(void *this,undefined4 param_1)

{
  thunk_FUN_1009e220(this,param_1);
  *(undefined ***)this = &PTR_thunk_FUN_1009e320_10273dc8;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}

/* 1009e220  FUN_1009e220  (50 bytes)
 * InputSignal * FUN_1009e220(undefined4 param_1)
 */
InputSignal * __thiscall FUN_1009e220(void *this,undefined4 param_1)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_1009e320_10273e04;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 1009e260  FUN_1009e260  (45 bytes)
 * undefined FUN_1009e260(int param_1)
 * called by: thunk_FUN_1009e260
 */
void __fastcall FUN_1009e260(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x234))(1);
  return;
}

/* 1009e2a0  FUN_1009e2a0  (45 bytes)
 * undefined FUN_1009e2a0(int param_1)
 * called by: thunk_FUN_1009e2a0
 */
void __fastcall FUN_1009e2a0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x234))(0);
  return;
}

/* 1009e2e0  FUN_1009e2e0  (21 bytes)
 * undefined FUN_1009e2e0(void)
 * called by: thunk_FUN_1009e2e0
 */
void FUN_1009e2e0(void)

{
  return;
}

/* 1009e300  FUN_1009e300  (21 bytes)
 * undefined FUN_1009e300(void)
 * called by: thunk_FUN_1009e300
 */
void FUN_1009e300(void)

{
  return;
}

/* 1009e320  FUN_1009e320  (21 bytes)
 * undefined FUN_1009e320(void)
 * called by: thunk_FUN_1009e320
 */
void FUN_1009e320(void)

{
  return;
}

/* 1009e340  FUN_1009e340  (21 bytes)
 * undefined FUN_1009e340(void)
 * called by: thunk_FUN_1009e340
 */
void FUN_1009e340(void)

{
  return;
}

/* 1009e360  FUN_1009e360  (21 bytes)
 * undefined FUN_1009e360(void)
 * called by: thunk_FUN_1009e360
 */
void FUN_1009e360(void)

{
  return;
}

/* 1009e380  FUN_1009e380  (21 bytes)
 * undefined FUN_1009e380(void)
 * called by: thunk_FUN_1009e380
 */
void FUN_1009e380(void)

{
  return;
}

/* 1009e3a0  FUN_1009e3a0  (21 bytes)
 * undefined FUN_1009e3a0(void)
 * called by: thunk_FUN_1009e3a0
 */
void FUN_1009e3a0(void)

{
  return;
}

/* 1009e3c0  FUN_1009e3c0  (21 bytes)
 * undefined FUN_1009e3c0(void)
 * called by: thunk_FUN_1009e3c0
 */
void FUN_1009e3c0(void)

{
  return;
}

/* 1009e3e0  FUN_1009e3e0  (21 bytes)
 * undefined FUN_1009e3e0(void)
 * called by: thunk_FUN_1009e3e0
 */
void FUN_1009e3e0(void)

{
  return;
}

/* 1009e400  FUN_1009e400  (32 bytes)
 * undefined FUN_1009e400(int param_1)
 * called by: thunk_FUN_1009e400
 */
void __fastcall FUN_1009e400(int param_1)

{
  thunk_FUN_1009d2f0(*(int **)(param_1 + 8));
  return;
}

/* 1009e430  FUN_1009e430  (32 bytes)
 * undefined FUN_1009e430(int param_1)
 * called by: thunk_FUN_1009e430
 */
void __fastcall FUN_1009e430(int param_1)

{
  thunk_FUN_1009d370(*(int **)(param_1 + 8));
  return;
}

/* 1009e460  FUN_1009e460  (61 bytes)
 * Slider * FUN_1009e460(int param_1, int param_2, int param_3, int param_4, bool param_5)
 */
Slider * __thiscall
FUN_1009e460(void *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  vgui::Slider::Slider(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_10273e44;
  return this;
}

/* 1009e4b0  FUN_1009e4b0  (38 bytes)
 * undefined4 * FUN_1009e4b0(undefined4 * param_1)
 * called by: thunk_FUN_1009e4b0
 */
undefined4 * __fastcall FUN_1009e4b0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

/* 1009e4e0  FUN_1009e4e0  (19 bytes)
 * undefined FUN_1009e4e0(void)
 */
void FUN_1009e4e0(void)

{
  return;
}

/* 1009e500  FUN_1009e500  (47 bytes)
 * Panel * FUN_1009e500(Panel * param_1)
 */
Panel * __fastcall FUN_1009e500(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &PTR_setPos_102740fc;
  thunk_FUN_1009f450((int)param_1);
  return param_1;
}

/* 1009e540  FUN_1009e540  (54 bytes)
 * undefined4 * FUN_1009e540(uint param_1)
 * called by: thunk_FUN_1009e540
 */
undefined4 * __thiscall FUN_1009e540(void *this,uint param_1)

{
  thunk_FUN_1009e590(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 1009e590  FUN_1009e590  (36 bytes)
 * undefined FUN_1009e590(undefined4 * param_1)
 */
void __fastcall FUN_1009e590(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_102740fc;
  thunk_FUN_1009e850((int)param_1);
  return;
}

/* 1009e5c0  FUN_1009e5c0  (390 bytes)
 * undefined4 FUN_1009e5c0(int param_1, int param_2)
 */
uint __thiscall FUN_1009e5c0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *local_68;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5d1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_1009e850((int)this);
  iVar1 = param_1 * param_2;
  local_68 = operator_new(iVar1 * 0x14 + 4);
  local_8 = 0;
  if (local_68 == (int *)0x0) {
    local_68 = (int *)0x0;
  }
  else {
    *local_68 = iVar1;
    _eh_vector_constructor_iterator_(local_68 + 1,0x14,iVar1,thunk_FUN_1009e4b0,thunk_FUN_1009e4e0);
    local_68 = local_68 + 1;
  }
  local_8 = 0xffffffff;
  *(int **)((int)this + 0xe0) = local_68;
  pvVar2 = operator_new((param_2 * 2 + param_1 * 2) * 4);
  *(void **)((int)this + 0xd0) = pvVar2;
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd0) + param_1 * 4;
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd4) + param_2 * 4;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xd8) + param_1 * 4;
  if ((*(int *)((int)this + 0xe0) == 0) || (*(int *)((int)this + 0xd0) == 0)) {
    uVar3 = thunk_FUN_1009e850((int)this);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    _memset(*(void **)((int)this + 0xd0),0,(param_2 * 2 + param_1 * 2) * 4);
    *(int *)((int)this + 0xc0) = param_1;
    *(int *)((int)this + 0xc4) = param_2;
    uVar3 = CONCAT31((int3)((uint)this >> 8),1);
  }
  ExceptionList = local_10;
  return uVar3;
}

/* 1009e7b0  FUN_1009e7b0  (120 bytes)
 * void * FUN_1009e7b0(uint param_1)
 */
void * __thiscall FUN_1009e7b0(void *this,uint param_1)

{
  if ((param_1 & 2) == 0) {
    thunk_FUN_1009e4e0();
    if ((param_1 & 1) != 0) {
      FUN_100bbb10(this);
    }
  }
  else {
    FUN_100c1c00(this,0x14,*(int *)((int)this + -4),thunk_FUN_1009e4e0);
    if ((param_1 & 1) != 0) {
      FUN_100bbb10((void *)((int)this + -4));
    }
    this = (void *)((int)this + -4);
  }
  return this;
}

/* 1009e850  FUN_1009e850  (97 bytes)
 * undefined FUN_1009e850(int param_1)
 */
void __fastcall FUN_1009e850(int param_1)

{
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    thunk_FUN_1009e7b0(*(void **)(param_1 + 0xe0),3);
  }
  FUN_100bbb10(*(void **)(param_1 + 0xd0));
  thunk_FUN_1009f450(param_1);
  return;
}

/* 1009e8d0  FUN_1009e8d0  (39 bytes)
 * undefined4 FUN_1009e8d0(int param_1, int param_2)
 */
undefined4 __thiscall FUN_1009e8d0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_1009f4e0(this,param_1,param_2);
  return *puVar1;
}

/* 1009e900  FUN_1009e900  (118 bytes)
 * undefined4 FUN_1009e900(int param_1, int param_2, int * param_3)
 */
undefined4 __thiscall FUN_1009e900(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)thunk_FUN_1009f4e0(this,param_1,param_2);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*piVar1 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x40))(0);
    }
    *piVar1 = (int)param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x40))(this);
    }
    *(undefined1 *)((int)this + 0xbc) = 1;
    uVar2 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar2;
}

/* 1009e9a0  FUN_1009e9a0  (28 bytes)
 * undefined4 FUN_1009e9a0(int param_1)
 */
undefined4 __fastcall FUN_1009e9a0(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}

/* 1009e9d0  FUN_1009e9d0  (28 bytes)
 * undefined4 FUN_1009e9d0(int param_1)
 */
undefined4 __fastcall FUN_1009e9d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}

/* 1009ea00  FUN_1009ea00  (113 bytes)
 * undefined FUN_1009ea00(int param_1, int param_2)
 */
void __thiscall FUN_1009ea00(void *this,int param_1,int param_2)

{
  if (param_1 != *(int *)((int)this + 200)) {
    *(int *)((int)this + 200) = param_1;
    thunk_FUN_1009f590(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  if (param_2 != *(int *)((int)this + 0xcc)) {
    *(int *)((int)this + 0xcc) = param_2;
    thunk_FUN_1009f660(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  return;
}

/* 1009ea90  FUN_1009ea90  (128 bytes)
 * undefined4 FUN_1009ea90(int param_1, undefined4 param_2)
 */
uint __thiscall FUN_1009ea90(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0xc0) <= param_1)) {
    uVar1 = FUN_100bd710((uint *)"!\"CGrid::SetColumnWidth : invalid location specified\"",
                         (uint *)
                         "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                         ,DAT_1028a7fc + 1);
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4) = param_2;
    thunk_FUN_1009f590(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}

/* 1009eb30  FUN_1009eb30  (128 bytes)
 * undefined4 FUN_1009eb30(int param_1, undefined4 param_2)
 */
uint __thiscall FUN_1009eb30(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0xc4) <= param_1)) {
    uVar1 = FUN_100bd710((uint *)"!\"CGrid::SetColumnWidth : invalid location specified\"",
                         (uint *)
                         "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                         ,DAT_1028a800 + 1);
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4) = param_2;
    thunk_FUN_1009f660(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}

/* 1009ebd0  FUN_1009ebd0  (98 bytes)
 * undefined4 FUN_1009ebd0(int param_1)
 */
undefined4 __thiscall FUN_1009ebd0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0xc0) <= param_1)) {
    FUN_100bd710((uint *)"!\"CGrid::GetColumnWidth: invalid location specified\"",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                 ,DAT_1028a804 + 1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4);
  }
  return uVar1;
}

/* 1009ec50  FUN_1009ec50  (98 bytes)
 * undefined4 FUN_1009ec50(int param_1)
 */
undefined4 __thiscall FUN_1009ec50(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0xc4) <= param_1)) {
    FUN_100bd710((uint *)"!\"CGrid::GetRowHeight: invalid location specified\"",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                 ,DAT_1028a808 + 1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4);
  }
  return uVar1;
}

/* 1009ecd0  FUN_1009ecd0  (189 bytes)
 * int FUN_1009ecd0(int param_1)
 */
int __thiscall FUN_1009ecd0(void *this,int param_1)

{
  undefined1 local_1c [4];
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  if ((param_1 < 0) || (*(int *)((int)this + 0xc0) <= param_1)) {
    FUN_100bd710((uint *)"!\"CGrid::CalcFitColumnWidth: invalid location specified\"",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                 ,DAT_1028a80c + 1);
    local_c = 0;
  }
  else {
    local_c = 0;
    for (local_10 = 0; local_10 < *(int *)((int)local_8 + 0xc4); local_10 = local_10 + 1) {
      local_14 = (int *)thunk_FUN_1009f4e0(local_8,param_1,local_10);
      local_14 = (int *)*local_14;
      if ((local_14 != (int *)0x0) &&
         ((**(code **)(*local_14 + 0xc))(&local_18,local_1c), local_c < local_18)) {
        local_c = local_18;
      }
    }
  }
  return local_c;
}

/* 1009edc0  FUN_1009edc0  (189 bytes)
 * int FUN_1009edc0(int param_1)
 */
int __thiscall FUN_1009edc0(void *this,int param_1)

{
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  if ((param_1 < 0) || (*(int *)((int)this + 0xc4) <= param_1)) {
    FUN_100bd710((uint *)"!\"CGrid::CalcFitRowHeight: invalid location specified\"",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                 ,DAT_1028a810 + 1);
    local_c = 0;
  }
  else {
    local_c = 0;
    for (local_10 = 0; local_10 < *(int *)((int)local_8 + 0xc0); local_10 = local_10 + 1) {
      local_14 = (int *)thunk_FUN_1009f4e0(local_8,local_10,param_1);
      local_14 = (int *)*local_14;
      if ((local_14 != (int *)0x0) &&
         ((**(code **)(*local_14 + 0xc))(local_18,&local_1c), local_c < local_1c)) {
        local_c = local_1c;
      }
    }
  }
  return local_c;
}

/* 1009eeb0  FUN_1009eeb0  (78 bytes)
 * undefined FUN_1009eeb0(void * param_1)
 */
void __fastcall FUN_1009eeb0(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  for (local_c = 0; local_c < *(int *)((int)param_1 + 0xc4); local_c = local_c + 1) {
    iVar1 = thunk_FUN_1009edc0(param_1,local_c);
    thunk_FUN_1009eb30(param_1,local_c,iVar1);
  }
  return;
}

/* 1009ef20  FUN_1009ef20  (185 bytes)
 * undefined4 FUN_1009ef20(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 */
uint __thiscall
FUN_1009ef20(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  
  if ((((param_1 < 0) || (*(int *)((int)this + 0xc0) <= param_1)) || (param_2 < 0)) ||
     (*(int *)((int)this + 0xc4) <= param_2)) {
    uVar1 = FUN_100bd710((uint *)"!\"CGrid::GetEntryBox: invalid location specified\"",
                         (uint *)
                         "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                         ,DAT_1028a814 + 1);
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    *param_3 = *(undefined4 *)(*(int *)((int)this + 0xd8) + param_1 * 4);
    *param_5 = *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4);
    *param_4 = *(undefined4 *)(*(int *)((int)this + 0xdc) + param_2 * 4);
    *param_6 = *(undefined4 *)(*(int *)((int)this + 0xd4) + param_2 * 4);
    uVar1 = CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return uVar1;
}

/* 1009f010  FUN_1009f010  (137 bytes)
 * undefined4 FUN_1009f010(int param_1)
 */
uint __thiscall FUN_1009f010(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined4 local_c;
  
  if ((param_1 == 0) || (in_EAX = param_1, *(int *)(param_1 + 0xc0) != *(int *)((int)this + 0xc0)))
  {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    for (local_c = 0; local_c < *(int *)((int)this + 0xc0); local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 0xd0) + local_c * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0xd0) + local_c * 4);
    }
    thunk_FUN_1009f590(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}

/* 1009f0c0  FUN_1009f0c0  (211 bytes)
 * undefined FUN_1009f0c0(void * param_1)
 */
void __fastcall FUN_1009f0c0(void *param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_c = 0; local_c < *(int *)((int)param_1 + 0xc0); local_c = local_c + 1) {
    for (local_10 = 0; local_10 < *(int *)((int)param_1 + 0xc4); local_10 = local_10 + 1) {
      piVar1 = (int *)thunk_FUN_1009f4e0(param_1,local_c,local_10);
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x10))
                  (*(undefined4 *)(*(int *)((int)param_1 + 0xd8) + local_c * 4),
                   *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + local_10 * 4),
                   *(undefined4 *)(*(int *)((int)param_1 + 0xd0) + local_c * 4),
                   *(undefined4 *)(*(int *)((int)param_1 + 0xd4) + local_10 * 4));
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0xbc) = 0;
  return;
}

/* 1009f1d0  FUN_1009f1d0  (88 bytes)
 * int FUN_1009f1d0(int param_1)
 */
int __fastcall FUN_1009f1d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc4) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + -4 + *(int *)(param_1 + 0xc4) * 4) +
            *(int *)(*(int *)(param_1 + 0xd4) + -4 + *(int *)(param_1 + 0xc4) * 4) +
            *(int *)(param_1 + 0xcc);
  }
  return iVar1;
}

/* 1009f240  FUN_1009f240  (267 bytes)
 * undefined FUN_1009f240(Panel * param_1)
 * called by: thunk_FUN_1009f240
 */
void __fastcall FUN_1009f240(Panel *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  int local_10;
  
  if (param_1[0xbc] != (Panel)0x0) {
    thunk_FUN_1009f0c0(param_1);
  }
  vgui::Panel::paint(param_1);
  local_10 = 0;
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0xc4); local_14 = local_14 + 1) {
    puVar1 = (undefined4 *)thunk_FUN_1009f4e0(param_1,0,local_14);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))();
    local_10 = local_10 + iVar2 + *(int *)(param_1 + 0xcc);
    if (*(char *)(puVar1 + 1) != '\0') {
      (**(code **)(*(int *)param_1 + 0x178))
                ((int)*(short *)((int)puVar1 + 6),(int)*(short *)(puVar1 + 2),
                 (int)*(short *)((int)puVar1 + 10),(int)*(short *)(puVar1 + 3));
      uVar3 = (**(code **)(*(int *)param_1 + 0x18))(local_10 - puVar1[4]);
      (**(code **)(*(int *)param_1 + 0x180))(0,local_10 - (puVar1[4] + 1),uVar3);
    }
  }
  return;
}

