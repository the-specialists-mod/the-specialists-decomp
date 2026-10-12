/* client.dll - unnamed_10013a10 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013a10  FUN_10013a10  (56 bytes)
 * undefined FUN_10013a10(Panel * param_1)
 */
void __thiscall FUN_10013a10(void *this,Panel *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::Panel*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::Panel*>::addElement(this,param_1);
  }
  return;
}

/* 10013a60  FUN_10013a60  (155 bytes)
 * undefined FUN_10013a60(Panel * param_1, int param_2)
 */
void __thiscall FUN_10013a60(void *this,Panel *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::Panel*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::Panel*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(Panel **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10013b30  FUN_10013b30  (54 bytes)
 * undefined FUN_10013b30(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10013b30(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10013b80  FUN_10013b80  (109 bytes)
 * undefined FUN_10013b80(int param_1)
 */
void __thiscall FUN_10013b80(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 10013c10  FUN_10013c10  (82 bytes)
 * undefined FUN_10013c10(int param_1)
 */
void __thiscall FUN_10013c10(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<vgui::Panel*>::removeElementAt(this,local_c);
  return;
}

/* 10013c80  FUN_10013c80  (28 bytes)
 * undefined FUN_10013c80(undefined4 * param_1)
 */
void __fastcall FUN_10013c80(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10013cb0  FUN_10013cb0  (53 bytes)
 * undefined4 FUN_10013cb0(int param_1)
 */
undefined4 __thiscall FUN_10013cb0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 10013d00  FUN_10013d00  (61 bytes)
 * Dar<vgui::Label*> * FUN_10013d00(Dar<vgui::Label*> * param_1)
 */
Dar<vgui::Label*> * __fastcall FUN_10013d00(Dar<vgui::Label*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::Label*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10013d50  FUN_10013d50  (65 bytes)
 * Dar<vgui::Label*> * FUN_10013d50(int param_1)
 */
Dar<vgui::Label*> * __thiscall FUN_10013d50(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::Label*>::ensureCapacity(this,param_1);
  return this;
}

/* 10013db0  FUN_10013db0  (225 bytes)
 * undefined FUN_10013db0(int param_1)
 */
void __thiscall FUN_10013db0(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 10013ed0  FUN_10013ed0  (48 bytes)
 * undefined FUN_10013ed0(int param_1)
 */
void __thiscall FUN_10013ed0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10013f10  FUN_10013f10  (24 bytes)
 * undefined4 FUN_10013f10(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10013f10(undefined4 *param_1)

{
  return *param_1;
}

/* 10013f30  FUN_10013f30  (68 bytes)
 * undefined FUN_10013f30(undefined4 param_1)
 */
void __thiscall FUN_10013f30(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::Label*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10013f90  FUN_10013f90  (74 bytes)
 * uint FUN_10013f90(int param_1)
 */
uint __thiscall FUN_10013f90(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 10013ff0  FUN_10013ff0  (56 bytes)
 * undefined FUN_10013ff0(Label * param_1)
 */
void __thiscall FUN_10013ff0(void *this,Label *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::Label*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::Label*>::addElement(this,param_1);
  }
  return;
}

/* 10014040  FUN_10014040  (155 bytes)
 * undefined FUN_10014040(Label * param_1, int param_2)
 */
void __thiscall FUN_10014040(void *this,Label *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::Label*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::Label*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(Label **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10014110  FUN_10014110  (54 bytes)
 * undefined FUN_10014110(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10014110(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10014160  FUN_10014160  (109 bytes)
 * undefined FUN_10014160(int param_1)
 */
void __thiscall FUN_10014160(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 100141f0  FUN_100141f0  (82 bytes)
 * undefined FUN_100141f0(int param_1)
 */
void __thiscall FUN_100141f0(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<vgui::Label*>::removeElementAt(this,local_c);
  return;
}

/* 10014260  FUN_10014260  (28 bytes)
 * undefined FUN_10014260(undefined4 * param_1)
 */
void __fastcall FUN_10014260(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10014290  FUN_10014290  (53 bytes)
 * undefined4 FUN_10014290(int param_1)
 */
undefined4 __thiscall FUN_10014290(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 100142e0  FUN_100142e0  (61 bytes)
 * Dar<vgui::RepaintSignal*> * FUN_100142e0(Dar<vgui::RepaintSignal*> * param_1)
 */
Dar<vgui::RepaintSignal*> * __fastcall FUN_100142e0(Dar<vgui::RepaintSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::RepaintSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10014330  FUN_10014330  (65 bytes)
 * Dar<vgui::RepaintSignal*> * FUN_10014330(int param_1)
 */
Dar<vgui::RepaintSignal*> * __thiscall FUN_10014330(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::RepaintSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 10014390  FUN_10014390  (225 bytes)
 * undefined FUN_10014390(int param_1)
 */
void __thiscall FUN_10014390(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 100144b0  FUN_100144b0  (48 bytes)
 * undefined FUN_100144b0(int param_1)
 */
void __thiscall FUN_100144b0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100144f0  FUN_100144f0  (24 bytes)
 * undefined4 FUN_100144f0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_100144f0(undefined4 *param_1)

{
  return *param_1;
}

/* 10014510  FUN_10014510  (68 bytes)
 * undefined FUN_10014510(undefined4 param_1)
 */
void __thiscall FUN_10014510(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::RepaintSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10014570  FUN_10014570  (74 bytes)
 * uint FUN_10014570(int param_1)
 */
uint __thiscall FUN_10014570(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 100145d0  FUN_100145d0  (56 bytes)
 * undefined FUN_100145d0(RepaintSignal * param_1)
 */
void __thiscall FUN_100145d0(void *this,RepaintSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::RepaintSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::RepaintSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10014620  FUN_10014620  (155 bytes)
 * undefined FUN_10014620(RepaintSignal * param_1, int param_2)
 */
void __thiscall FUN_10014620(void *this,RepaintSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::RepaintSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::RepaintSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(RepaintSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100146f0  FUN_100146f0  (54 bytes)
 * undefined FUN_100146f0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_100146f0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10014740  FUN_10014740  (109 bytes)
 * undefined FUN_10014740(int param_1)
 */
void __thiscall FUN_10014740(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 100147d0  FUN_100147d0  (82 bytes)
 * undefined FUN_100147d0(int param_1)
 */
void __thiscall FUN_100147d0(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<vgui::RepaintSignal*>::removeElementAt(this,local_c);
  return;
}

/* 10014840  FUN_10014840  (28 bytes)
 * undefined FUN_10014840(undefined4 * param_1)
 */
void __fastcall FUN_10014840(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10014870  FUN_10014870  (53 bytes)
 * undefined4 FUN_10014870(int param_1)
 */
undefined4 __thiscall FUN_10014870(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 100148c0  FUN_100148c0  (21 bytes)
 * undefined FUN_100148c0(void)
 */
void FUN_100148c0(void)

{
  FUN_100148e0();
  return;
}

/* 100148e0  FUN_100148e0  (32 bytes)
 * undefined FUN_100148e0(void)
 * called by: FUN_100148c0
 */
void FUN_100148e0(void)

{
  thunk_FUN_1000cae0(&DAT_1028ffec,0,0,0);
  return;
}

/* 10014910  FUN_10014910  (16 bytes)
 * undefined FUN_10014910(void)
 */
void FUN_10014910(void)

{
  return;
}

/* 10014930  FUN_10014930  (26 bytes)
 * undefined4 FUN_10014930(void)
 * called by: thunk_FUN_10014930
 */
undefined4 FUN_10014930(void)

{
  return 1;
}

/* 10014950  FUN_10014950  (26 bytes)
 * undefined4 FUN_10014950(void)
 * called by: thunk_FUN_10014950
 */
undefined4 FUN_10014950(void)

{
  return 1;
}

/* 10014970  FUN_10014970  (21 bytes)
 * undefined4 FUN_10014970(void)
 * called by: thunk_FUN_10014970
 */
undefined4 FUN_10014970(void)

{
  return 0;
}

/* 10014990  FUN_10014990  (26 bytes)
 * undefined4 FUN_10014990(void)
 * called by: thunk_FUN_10014990
 */
undefined4 FUN_10014990(void)

{
  return 1;
}

/* 100149b0  FUN_100149b0  (26 bytes)
 * undefined4 FUN_100149b0(void)
 * called by: thunk_FUN_100149b0
 */
undefined4 FUN_100149b0(void)

{
  return 1;
}

/* 100149d0  FUN_100149d0  (19 bytes)
 * undefined FUN_100149d0(void)
 * called by: thunk_FUN_100149d0
 */
void FUN_100149d0(void)

{
  return;
}

/* 100149f0  FUN_100149f0  (23 bytes)
 * undefined4 FUN_100149f0(void)
 */
undefined4 FUN_100149f0(void)

{
  return 0;
}

/* 10014a10  FUN_10014a10  (19 bytes)
 * undefined FUN_10014a10(void)
 */
void FUN_10014a10(void)

{
  return;
}

/* 10014a30  FUN_10014a30  (21 bytes)
 * undefined4 FUN_10014a30(void)
 */
undefined4 FUN_10014a30(void)

{
  return 0;
}

/* 10014a50  FUN_10014a50  (24 bytes)
 * undefined4 FUN_10014a50(void)
 * called by: thunk_FUN_10014a50
 */
undefined4 FUN_10014a50(void)

{
  return 1;
}

/* 10014a70  FUN_10014a70  (23 bytes)
 * undefined4 FUN_10014a70(void)
 */
undefined4 FUN_10014a70(void)

{
  return 0;
}

/* 10014a90  FUN_10014a90  (24 bytes)
 * undefined4 FUN_10014a90(void)
 * called by: thunk_FUN_10014a90
 */
undefined4 FUN_10014a90(void)

{
  return 0xffffffff;
}

/* 10014ab0  FUN_10014ab0  (18 bytes)
 * undefined4 FUN_10014ab0(void)
 */
undefined4 FUN_10014ab0(void)

{
  return 0;
}

/* 10014ad0  FUN_10014ad0  (19 bytes)
 * undefined FUN_10014ad0(void)
 */
void FUN_10014ad0(void)

{
  return;
}

/* 10014af0  FUN_10014af0  (19 bytes)
 * undefined FUN_10014af0(void)
 * called by: thunk_FUN_10014af0
 */
void FUN_10014af0(void)

{
  return;
}

/* 10014b10  FUN_10014b10  (21 bytes)
 * undefined FUN_10014b10(void)
 * called by: thunk_FUN_10014b10
 */
void FUN_10014b10(void)

{
  return;
}

/* 10014b30  FUN_10014b30  (21 bytes)
 * undefined FUN_10014b30(void)
 * called by: thunk_FUN_10014b30
 */
void FUN_10014b30(void)

{
  return;
}

/* 10014b50  FUN_10014b50  (26 bytes)
 * undefined4 FUN_10014b50(void)
 * called by: thunk_FUN_10014b50
 */
undefined4 FUN_10014b50(void)

{
  return 1;
}

/* 10014b70  FUN_10014b70  (26 bytes)
 * undefined4 FUN_10014b70(void)
 * called by: thunk_FUN_10014b70
 */
undefined4 FUN_10014b70(void)

{
  return 1;
}

/* 10014b90  FUN_10014b90  (26 bytes)
 * undefined4 FUN_10014b90(void)
 * called by: thunk_FUN_10014b90
 */
undefined4 FUN_10014b90(void)

{
  return 1;
}

/* 10014bb0  FUN_10014bb0  (26 bytes)
 * undefined4 FUN_10014bb0(void)
 * called by: thunk_FUN_10014bb0
 */
undefined4 FUN_10014bb0(void)

{
  return 1;
}

/* 10014bd0  FUN_10014bd0  (18 bytes)
 * undefined4 FUN_10014bd0(void)
 */
undefined4 FUN_10014bd0(void)

{
  return 0;
}

/* 10014bf0  FUN_10014bf0  (16 bytes)
 * undefined FUN_10014bf0(void)
 */
void FUN_10014bf0(void)

{
  return;
}

/* 10014c10  FUN_10014c10  (16 bytes)
 * undefined FUN_10014c10(void)
 */
void FUN_10014c10(void)

{
  return;
}

/* 10014c30  FUN_10014c30  (16 bytes)
 * undefined FUN_10014c30(void)
 */
void FUN_10014c30(void)

{
  return;
}

/* 10014c50  FUN_10014c50  (16 bytes)
 * undefined FUN_10014c50(void)
 */
void FUN_10014c50(void)

{
  return;
}

/* 10014c70  FUN_10014c70  (16 bytes)
 * undefined FUN_10014c70(void)
 */
void FUN_10014c70(void)

{
  return;
}

/* 10014c90  FUN_10014c90  (16 bytes)
 * undefined FUN_10014c90(void)
 */
void FUN_10014c90(void)

{
  return;
}

/* 10014cb0  FUN_10014cb0  (21 bytes)
 * undefined4 FUN_10014cb0(void)
 */
undefined4 FUN_10014cb0(void)

{
  return 1;
}

/* 10014cd0  FUN_10014cd0  (16 bytes)
 * undefined FUN_10014cd0(void)
 */
void FUN_10014cd0(void)

{
  return;
}

/* 10014cf0  FUN_10014cf0  (21 bytes)
 * undefined4 FUN_10014cf0(void)
 */
undefined4 FUN_10014cf0(void)

{
  return 1;
}

/* 10014d10  FUN_10014d10  (16 bytes)
 * undefined FUN_10014d10(void)
 */
void FUN_10014d10(void)

{
  return;
}

/* 10014d30  FUN_10014d30  (16 bytes)
 * undefined FUN_10014d30(void)
 */
void FUN_10014d30(void)

{
  return;
}

/* 10014d50  FUN_10014d50  (16 bytes)
 * undefined FUN_10014d50(void)
 */
void FUN_10014d50(void)

{
  return;
}

/* 10014d70  FUN_10014d70  (26 bytes)
 * undefined4 FUN_10014d70(void)
 * called by: thunk_FUN_10014d70
 */
undefined4 FUN_10014d70(void)

{
  return 1;
}

/* 10014d90  FUN_10014d90  (26 bytes)
 * undefined4 FUN_10014d90(void)
 * called by: thunk_FUN_10014d90
 */
undefined4 FUN_10014d90(void)

{
  return 1;
}

/* 10014db0  FUN_10014db0  (21 bytes)
 * undefined FUN_10014db0(void)
 * called by: thunk_FUN_10014db0
 */
void FUN_10014db0(void)

{
  return;
}

/* 10014dd0  FUN_10014dd0  (19 bytes)
 * undefined FUN_10014dd0(void)
 */
void FUN_10014dd0(void)

{
  return;
}

/* 10014df0  FUN_10014df0  (21 bytes)
 * undefined FUN_10014df0(void)
 */
void FUN_10014df0(void)

{
  return;
}

/* 10014e10  FUN_10014e10  (21 bytes)
 * undefined FUN_10014e10(void)
 */
void FUN_10014e10(void)

{
  return;
}

/* 10014e30  FUN_10014e30  (21 bytes)
 * undefined FUN_10014e30(void)
 */
void FUN_10014e30(void)

{
  return;
}

/* 10014e50  FUN_10014e50  (19 bytes)
 * undefined FUN_10014e50(void)
 */
void FUN_10014e50(void)

{
  return;
}

/* 10014e70  FUN_10014e70  (18 bytes)
 * undefined4 FUN_10014e70(void)
 */
undefined4 FUN_10014e70(void)

{
  return 0;
}

/* 10014e90  FUN_10014e90  (18 bytes)
 * undefined4 FUN_10014e90(void)
 */
undefined4 FUN_10014e90(void)

{
  return 0;
}

/* 10014eb0  FUN_10014eb0  (21 bytes)
 * undefined FUN_10014eb0(void)
 */
void FUN_10014eb0(void)

{
  return;
}

/* 10014ed0  FUN_10014ed0  (16 bytes)
 * undefined FUN_10014ed0(void)
 */
void FUN_10014ed0(void)

{
  return;
}

/* 10014ef0  FUN_10014ef0  (16 bytes)
 * undefined FUN_10014ef0(void)
 */
void FUN_10014ef0(void)

{
  return;
}

/* 10014f10  FUN_10014f10  (18 bytes)
 * undefined4 FUN_10014f10(void)
 */
undefined4 FUN_10014f10(void)

{
  return 0;
}

/* 10014f30  FUN_10014f30  (29 bytes)
 * void * FUN_10014f30(void * param_1)
 */
void * __cdecl FUN_10014f30(void *param_1)

{
  thunk_FUN_10015740(param_1,(undefined4 *)0x0);
  return param_1;
}

/* 10014f60  FUN_10014f60  (18 bytes)
 * undefined4 FUN_10014f60(void)
 */
undefined4 FUN_10014f60(void)

{
  return 0;
}

/* 10014f80  FUN_10014f80  (21 bytes)
 * undefined FUN_10014f80(void)
 */
void FUN_10014f80(void)

{
  return;
}

/* 10014fa0  FUN_10014fa0  (18 bytes)
 * undefined4 FUN_10014fa0(void)
 */
undefined4 FUN_10014fa0(void)

{
  return 0;
}

/* 10014fc0  FUN_10014fc0  (21 bytes)
 * undefined FUN_10014fc0(void)
 */
void FUN_10014fc0(void)

{
  return;
}

/* 10014fe0  FUN_10014fe0  (23 bytes)
 * undefined4 FUN_10014fe0(void)
 */
undefined4 FUN_10014fe0(void)

{
  return 0;
}

/* 10015000  FUN_10015000  (21 bytes)
 * undefined FUN_10015000(void)
 * called by: thunk_FUN_10015000
 */
void FUN_10015000(void)

{
  return;
}

/* 10015020  FUN_10015020  (27 bytes)
 * float10 FUN_10015020(void)
 */
float10 FUN_10015020(void)

{
  return (float10)0.0;
}

/* 10015050  FUN_10015050  (23 bytes)
 * undefined4 FUN_10015050(void)
 * called by: thunk_FUN_10015050
 */
undefined4 FUN_10015050(void)

{
  return 0;
}

/* 10015070  FUN_10015070  (21 bytes)
 * undefined4 FUN_10015070(void)
 * called by: thunk_FUN_10015070
 */
undefined4 FUN_10015070(void)

{
  return 0;
}

/* 10015090  FUN_10015090  (23 bytes)
 * undefined4 FUN_10015090(void)
 * called by: thunk_FUN_10015090
 */
undefined4 FUN_10015090(void)

{
  return 0;
}

/* 100150b0  FUN_100150b0  (23 bytes)
 * undefined4 FUN_100150b0(void)
 * called by: thunk_FUN_100150b0
 */
undefined4 FUN_100150b0(void)

{
  return 0;
}

/* 100150d0  FUN_100150d0  (23 bytes)
 * undefined4 FUN_100150d0(void)
 * called by: thunk_FUN_100150d0
 */
undefined4 FUN_100150d0(void)

{
  return 0;
}

/* 100150f0  FUN_100150f0  (23 bytes)
 * undefined4 FUN_100150f0(void)
 * called by: thunk_FUN_100150f0
 */
undefined4 FUN_100150f0(void)

{
  return 0;
}

/* 10015110  FUN_10015110  (21 bytes)
 * undefined FUN_10015110(void)
 */
void FUN_10015110(void)

{
  return;
}

/* 10015130  FUN_10015130  (27 bytes)
 * float10 FUN_10015130(void)
 * called by: thunk_FUN_10015130
 */
float10 FUN_10015130(void)

{
  return (float10)0.0;
}

/* 10015160  FUN_10015160  (23 bytes)
 * undefined4 FUN_10015160(void)
 */
undefined4 FUN_10015160(void)

{
  return 0;
}

/* 10015180  FUN_10015180  (23 bytes)
 * undefined4 FUN_10015180(void)
 */
undefined4 FUN_10015180(void)

{
  return 0;
}

/* 100151a0  FUN_100151a0  (23 bytes)
 * undefined4 FUN_100151a0(void)
 */
undefined4 FUN_100151a0(void)

{
  return 0;
}

/* 100151c0  FUN_100151c0  (19 bytes)
 * undefined FUN_100151c0(void)
 */
void FUN_100151c0(void)

{
  return;
}

/* 100151e0  FUN_100151e0  (21 bytes)
 * undefined4 FUN_100151e0(void)
 */
undefined4 FUN_100151e0(void)

{
  return 0;
}

/* 10015200  FUN_10015200  (21 bytes)
 * undefined FUN_10015200(void)
 */
void FUN_10015200(void)

{
  return;
}

/* 10015220  FUN_10015220  (27 bytes)
 * float10 FUN_10015220(void)
 */
float10 FUN_10015220(void)

{
  return (float10)0.0;
}

/* 10015250  FUN_10015250  (19 bytes)
 * undefined FUN_10015250(void)
 */
void FUN_10015250(void)

{
  return;
}

/* 10015270  FUN_10015270  (27 bytes)
 * float10 FUN_10015270(void)
 */
float10 FUN_10015270(void)

{
  return (float10)0.0;
}

/* 100152a0  FUN_100152a0  (21 bytes)
 * undefined FUN_100152a0(void)
 */
void FUN_100152a0(void)

{
  return;
}

/* 100152c0  FUN_100152c0  (21 bytes)
 * undefined FUN_100152c0(void)
 */
void FUN_100152c0(void)

{
  return;
}

/* 100152e0  FUN_100152e0  (24 bytes)
 * undefined4 FUN_100152e0(void)
 */
undefined4 FUN_100152e0(void)

{
  return 0xffffffff;
}

/* 10015300  FUN_10015300  (21 bytes)
 * undefined FUN_10015300(void)
 */
void FUN_10015300(void)

{
  return;
}

/* 10015320  FUN_10015320  (21 bytes)
 * undefined FUN_10015320(void)
 */
void FUN_10015320(void)

{
  return;
}

/* 10015340  FUN_10015340  (23 bytes)
 * undefined4 FUN_10015340(void)
 */
undefined4 FUN_10015340(void)

{
  return 0;
}

/* 10015360  FUN_10015360  (21 bytes)
 * undefined FUN_10015360(void)
 * called by: thunk_FUN_10015360
 */
void FUN_10015360(void)

{
  return;
}

/* 10015380  FUN_10015380  (21 bytes)
 * undefined FUN_10015380(void)
 */
void FUN_10015380(void)

{
  return;
}

/* 100153a0  FUN_100153a0  (21 bytes)
 * undefined FUN_100153a0(void)
 * called by: thunk_FUN_100153a0
 */
void FUN_100153a0(void)

{
  return;
}

/* 100153c0  FUN_100153c0  (21 bytes)
 * undefined FUN_100153c0(void)
 */
void FUN_100153c0(void)

{
  return;
}

/* 100153e0  FUN_100153e0  (19 bytes)
 * undefined FUN_100153e0(void)
 * called by: thunk_FUN_100153e0
 */
void FUN_100153e0(void)

{
  return;
}

/* 10015400  FUN_10015400  (21 bytes)
 * undefined FUN_10015400(void)
 * called by: thunk_FUN_10015400
 */
void FUN_10015400(void)

{
  return;
}

/* 10015420  FUN_10015420  (21 bytes)
 * undefined4 FUN_10015420(void)
 */
undefined4 FUN_10015420(void)

{
  return 0;
}

/* 10015440  FUN_10015440  (19 bytes)
 * undefined FUN_10015440(void)
 */
void FUN_10015440(void)

{
  return;
}

/* 10015460  FUN_10015460  (19 bytes)
 * undefined FUN_10015460(void)
 * called by: thunk_FUN_10015460
 */
void FUN_10015460(void)

{
  return;
}

/* 10015480  FUN_10015480  (21 bytes)
 * undefined FUN_10015480(void)
 * called by: thunk_FUN_10015480
 */
void FUN_10015480(void)

{
  return;
}

/* 100154a0  FUN_100154a0  (21 bytes)
 * undefined4 FUN_100154a0(void)
 * called by: thunk_FUN_100154a0
 */
undefined4 FUN_100154a0(void)

{
  return 0;
}

/* 100154c0  FUN_100154c0  (21 bytes)
 * undefined FUN_100154c0(void)
 */
void FUN_100154c0(void)

{
  return;
}

/* 100154e0  FUN_100154e0  (21 bytes)
 * undefined FUN_100154e0(void)
 */
void FUN_100154e0(void)

{
  return;
}

/* 10015500  FUN_10015500  (19 bytes)
 * undefined FUN_10015500(void)
 * called by: thunk_FUN_10015500
 */
void FUN_10015500(void)

{
  return;
}

/* 10015520  FUN_10015520  (19 bytes)
 * undefined FUN_10015520(void)
 * called by: thunk_FUN_10015520
 */
void FUN_10015520(void)

{
  return;
}

/* 10015540  FUN_10015540  (21 bytes)
 * undefined4 FUN_10015540(void)
 * called by: thunk_FUN_10015540
 */
undefined4 FUN_10015540(void)

{
  return 0;
}

/* 10015560  FUN_10015560  (21 bytes)
 * undefined4 FUN_10015560(void)
 * called by: thunk_FUN_10015560
 */
undefined4 FUN_10015560(void)

{
  return 0;
}

/* 10015580  FUN_10015580  (24 bytes)
 * undefined4 FUN_10015580(void)
 * called by: thunk_FUN_10015580
 */
undefined4 FUN_10015580(void)

{
  return 0x42;
}

/* 100155a0  FUN_100155a0  (19 bytes)
 * undefined FUN_100155a0(void)
 * called by: thunk_FUN_100155a0
 */
void FUN_100155a0(void)

{
  return;
}

/* 100155c0  FUN_100155c0  (21 bytes)
 * undefined FUN_100155c0(void)
 * called by: thunk_FUN_100155c0
 */
void FUN_100155c0(void)

{
  return;
}

/* 100155e0  FUN_100155e0  (23 bytes)
 * undefined4 FUN_100155e0(void)
 * called by: thunk_FUN_100155e0
 */
undefined4 FUN_100155e0(void)

{
  return 0;
}

/* 10015600  FUN_10015600  (23 bytes)
 * undefined4 FUN_10015600(void)
 * called by: thunk_FUN_10015600
 */
undefined4 FUN_10015600(void)

{
  return 0;
}

/* 10015620  FUN_10015620  (18 bytes)
 * undefined4 FUN_10015620(void)
 */
undefined4 FUN_10015620(void)

{
  return 0;
}

/* 10015640  FUN_10015640  (19 bytes)
 * undefined FUN_10015640(void)
 */
void FUN_10015640(void)

{
  return;
}

/* 10015660  FUN_10015660  (23 bytes)
 * undefined4 FUN_10015660(void)
 * called by: thunk_FUN_10015660
 */
undefined4 FUN_10015660(void)

{
  return 0;
}

/* 10015680  FUN_10015680  (21 bytes)
 * undefined FUN_10015680(void)
 * called by: thunk_FUN_10015680
 */
void FUN_10015680(void)

{
  return;
}

/* 100156a0  FUN_100156a0  (23 bytes)
 * undefined4 FUN_100156a0(void)
 * called by: thunk_FUN_100156a0
 */
undefined4 FUN_100156a0(void)

{
  return 0;
}

/* 100156c0  FUN_100156c0  (21 bytes)
 * undefined FUN_100156c0(void)
 */
void FUN_100156c0(void)

{
  return;
}

/* 100156e0  FUN_100156e0  (21 bytes)
 * undefined FUN_100156e0(void)
 */
void FUN_100156e0(void)

{
  return;
}

/* 10015700  FUN_10015700  (19 bytes)
 * undefined FUN_10015700(void)
 */
void FUN_10015700(void)

{
  return;
}

/* 10015720  FUN_10015720  (21 bytes)
 * undefined4 FUN_10015720(void)
 */
undefined4 FUN_10015720(void)

{
  return 0;
}

/* 10015740  FUN_10015740  (58 bytes)
 * undefined4 * FUN_10015740(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10015740(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10015790  FUN_10015790  (19 bytes)
 * undefined FUN_10015790(void)
 */
void FUN_10015790(void)

{
  return;
}

