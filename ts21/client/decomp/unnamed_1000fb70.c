/* client.dll - unnamed_1000fb70 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000fb70  FUN_1000fb70  (82 bytes)
 * undefined FUN_1000fb70(int param_1)
 */
void __thiscall FUN_1000fb70(void *this,int param_1)

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
  vgui::Dar<vgui::SurfaceBase*>::removeElementAt(this,local_c);
  return;
}

/* 1000fbe0  FUN_1000fbe0  (28 bytes)
 * undefined FUN_1000fbe0(undefined4 * param_1)
 */
void __fastcall FUN_1000fbe0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 1000fc10  FUN_1000fc10  (53 bytes)
 * undefined4 FUN_1000fc10(int param_1)
 */
undefined4 __thiscall FUN_1000fc10(void *this,int param_1)

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

/* 1000fc60  FUN_1000fc60  (61 bytes)
 * Dar<vgui::InputSignal*> * FUN_1000fc60(Dar<vgui::InputSignal*> * param_1)
 */
Dar<vgui::InputSignal*> * __fastcall FUN_1000fc60(Dar<vgui::InputSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::InputSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000fcb0  FUN_1000fcb0  (65 bytes)
 * Dar<vgui::InputSignal*> * FUN_1000fcb0(int param_1)
 */
Dar<vgui::InputSignal*> * __thiscall FUN_1000fcb0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::InputSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 1000fd10  FUN_1000fd10  (225 bytes)
 * undefined FUN_1000fd10(int param_1)
 */
void __thiscall FUN_1000fd10(void *this,int param_1)

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

/* 1000fe30  FUN_1000fe30  (48 bytes)
 * undefined FUN_1000fe30(int param_1)
 */
void __thiscall FUN_1000fe30(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000fe70  FUN_1000fe70  (24 bytes)
 * undefined4 FUN_1000fe70(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000fe70(undefined4 *param_1)

{
  return *param_1;
}

/* 1000fe90  FUN_1000fe90  (68 bytes)
 * undefined FUN_1000fe90(undefined4 param_1)
 */
void __thiscall FUN_1000fe90(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::InputSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000fef0  FUN_1000fef0  (74 bytes)
 * uint FUN_1000fef0(int param_1)
 */
uint __thiscall FUN_1000fef0(void *this,int param_1)

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

/* 1000ff50  FUN_1000ff50  (56 bytes)
 * undefined FUN_1000ff50(InputSignal * param_1)
 */
void __thiscall FUN_1000ff50(void *this,InputSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::InputSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::InputSignal*>::addElement(this,param_1);
  }
  return;
}

/* 1000ffa0  FUN_1000ffa0  (155 bytes)
 * undefined FUN_1000ffa0(InputSignal * param_1, int param_2)
 */
void __thiscall FUN_1000ffa0(void *this,InputSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::InputSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::InputSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(InputSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10010070  FUN_10010070  (54 bytes)
 * undefined FUN_10010070(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10010070(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 100100c0  FUN_100100c0  (109 bytes)
 * undefined FUN_100100c0(int param_1)
 */
void __thiscall FUN_100100c0(void *this,int param_1)

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

/* 10010150  FUN_10010150  (82 bytes)
 * undefined FUN_10010150(int param_1)
 */
void __thiscall FUN_10010150(void *this,int param_1)

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
  vgui::Dar<vgui::InputSignal*>::removeElementAt(this,local_c);
  return;
}

/* 100101c0  FUN_100101c0  (28 bytes)
 * undefined FUN_100101c0(undefined4 * param_1)
 */
void __fastcall FUN_100101c0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 100101f0  FUN_100101f0  (53 bytes)
 * undefined4 FUN_100101f0(int param_1)
 */
undefined4 __thiscall FUN_100101f0(void *this,int param_1)

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

/* 10010240  FUN_10010240  (61 bytes)
 * Dar<vgui::FocusChangeSignal*> * FUN_10010240(Dar<vgui::FocusChangeSignal*> * param_1)
 */
Dar<vgui::FocusChangeSignal*> * __fastcall FUN_10010240(Dar<vgui::FocusChangeSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::FocusChangeSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10010290  FUN_10010290  (65 bytes)
 * Dar<vgui::FocusChangeSignal*> * FUN_10010290(int param_1)
 */
Dar<vgui::FocusChangeSignal*> * __thiscall FUN_10010290(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::FocusChangeSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 100102f0  FUN_100102f0  (225 bytes)
 * undefined FUN_100102f0(int param_1)
 */
void __thiscall FUN_100102f0(void *this,int param_1)

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

/* 10010410  FUN_10010410  (48 bytes)
 * undefined FUN_10010410(int param_1)
 */
void __thiscall FUN_10010410(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10010450  FUN_10010450  (24 bytes)
 * undefined4 FUN_10010450(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10010450(undefined4 *param_1)

{
  return *param_1;
}

/* 10010470  FUN_10010470  (68 bytes)
 * undefined FUN_10010470(undefined4 param_1)
 */
void __thiscall FUN_10010470(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::FocusChangeSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100104d0  FUN_100104d0  (74 bytes)
 * uint FUN_100104d0(int param_1)
 */
uint __thiscall FUN_100104d0(void *this,int param_1)

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

/* 10010530  FUN_10010530  (56 bytes)
 * undefined FUN_10010530(FocusChangeSignal * param_1)
 */
void __thiscall FUN_10010530(void *this,FocusChangeSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::FocusChangeSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::FocusChangeSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10010580  FUN_10010580  (155 bytes)
 * undefined FUN_10010580(FocusChangeSignal * param_1, int param_2)
 */
void __thiscall FUN_10010580(void *this,FocusChangeSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::FocusChangeSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::FocusChangeSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(FocusChangeSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10010650  FUN_10010650  (54 bytes)
 * undefined FUN_10010650(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10010650(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 100106a0  FUN_100106a0  (109 bytes)
 * undefined FUN_100106a0(int param_1)
 */
void __thiscall FUN_100106a0(void *this,int param_1)

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

/* 10010730  FUN_10010730  (82 bytes)
 * undefined FUN_10010730(int param_1)
 */
void __thiscall FUN_10010730(void *this,int param_1)

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
  vgui::Dar<vgui::FocusChangeSignal*>::removeElementAt(this,local_c);
  return;
}

/* 100107a0  FUN_100107a0  (28 bytes)
 * undefined FUN_100107a0(undefined4 * param_1)
 */
void __fastcall FUN_100107a0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 100107d0  FUN_100107d0  (53 bytes)
 * undefined4 FUN_100107d0(int param_1)
 */
undefined4 __thiscall FUN_100107d0(void *this,int param_1)

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

/* 10010820  FUN_10010820  (61 bytes)
 * Dar<vgui::FrameSignal*> * FUN_10010820(Dar<vgui::FrameSignal*> * param_1)
 */
Dar<vgui::FrameSignal*> * __fastcall FUN_10010820(Dar<vgui::FrameSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::FrameSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10010870  FUN_10010870  (65 bytes)
 * Dar<vgui::FrameSignal*> * FUN_10010870(int param_1)
 */
Dar<vgui::FrameSignal*> * __thiscall FUN_10010870(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::FrameSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 100108d0  FUN_100108d0  (225 bytes)
 * undefined FUN_100108d0(int param_1)
 */
void __thiscall FUN_100108d0(void *this,int param_1)

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

/* 100109f0  FUN_100109f0  (48 bytes)
 * undefined FUN_100109f0(int param_1)
 */
void __thiscall FUN_100109f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10010a30  FUN_10010a30  (24 bytes)
 * undefined4 FUN_10010a30(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10010a30(undefined4 *param_1)

{
  return *param_1;
}

/* 10010a50  FUN_10010a50  (68 bytes)
 * undefined FUN_10010a50(undefined4 param_1)
 */
void __thiscall FUN_10010a50(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::FrameSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10010ab0  FUN_10010ab0  (74 bytes)
 * uint FUN_10010ab0(int param_1)
 */
uint __thiscall FUN_10010ab0(void *this,int param_1)

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

/* 10010b10  FUN_10010b10  (56 bytes)
 * undefined FUN_10010b10(FrameSignal * param_1)
 */
void __thiscall FUN_10010b10(void *this,FrameSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::FrameSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::FrameSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10010b60  FUN_10010b60  (155 bytes)
 * undefined FUN_10010b60(FrameSignal * param_1, int param_2)
 */
void __thiscall FUN_10010b60(void *this,FrameSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::FrameSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::FrameSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(FrameSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10010c30  FUN_10010c30  (54 bytes)
 * undefined FUN_10010c30(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10010c30(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10010c80  FUN_10010c80  (109 bytes)
 * undefined FUN_10010c80(int param_1)
 */
void __thiscall FUN_10010c80(void *this,int param_1)

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

/* 10010d10  FUN_10010d10  (82 bytes)
 * undefined FUN_10010d10(int param_1)
 */
void __thiscall FUN_10010d10(void *this,int param_1)

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
  vgui::Dar<vgui::FrameSignal*>::removeElementAt(this,local_c);
  return;
}

/* 10010d80  FUN_10010d80  (28 bytes)
 * undefined FUN_10010d80(undefined4 * param_1)
 */
void __fastcall FUN_10010d80(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10010db0  FUN_10010db0  (53 bytes)
 * undefined4 FUN_10010db0(int param_1)
 */
undefined4 __thiscall FUN_10010db0(void *this,int param_1)

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

/* 10010e00  FUN_10010e00  (61 bytes)
 * Dar<vgui::ActionSignal*> * FUN_10010e00(Dar<vgui::ActionSignal*> * param_1)
 */
Dar<vgui::ActionSignal*> * __fastcall FUN_10010e00(Dar<vgui::ActionSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::ActionSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10010e50  FUN_10010e50  (65 bytes)
 * Dar<vgui::ActionSignal*> * FUN_10010e50(int param_1)
 */
Dar<vgui::ActionSignal*> * __thiscall FUN_10010e50(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::ActionSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 10010eb0  FUN_10010eb0  (225 bytes)
 * undefined FUN_10010eb0(int param_1)
 */
void __thiscall FUN_10010eb0(void *this,int param_1)

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

/* 10010fd0  FUN_10010fd0  (48 bytes)
 * undefined FUN_10010fd0(int param_1)
 */
void __thiscall FUN_10010fd0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10011010  FUN_10011010  (24 bytes)
 * undefined4 FUN_10011010(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10011010(undefined4 *param_1)

{
  return *param_1;
}

/* 10011030  FUN_10011030  (68 bytes)
 * undefined FUN_10011030(undefined4 param_1)
 */
void __thiscall FUN_10011030(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::ActionSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10011090  FUN_10011090  (74 bytes)
 * uint FUN_10011090(int param_1)
 */
uint __thiscall FUN_10011090(void *this,int param_1)

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

/* 100110f0  FUN_100110f0  (56 bytes)
 * undefined FUN_100110f0(ActionSignal * param_1)
 */
void __thiscall FUN_100110f0(void *this,ActionSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::ActionSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::ActionSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10011140  FUN_10011140  (155 bytes)
 * undefined FUN_10011140(ActionSignal * param_1, int param_2)
 */
void __thiscall FUN_10011140(void *this,ActionSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::ActionSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::ActionSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(ActionSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10011210  FUN_10011210  (54 bytes)
 * undefined FUN_10011210(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10011210(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10011260  FUN_10011260  (109 bytes)
 * undefined FUN_10011260(int param_1)
 */
void __thiscall FUN_10011260(void *this,int param_1)

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

/* 100112f0  FUN_100112f0  (82 bytes)
 * undefined FUN_100112f0(int param_1)
 */
void __thiscall FUN_100112f0(void *this,int param_1)

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
  vgui::Dar<vgui::ActionSignal*>::removeElementAt(this,local_c);
  return;
}

/* 10011360  FUN_10011360  (28 bytes)
 * undefined FUN_10011360(undefined4 * param_1)
 */
void __fastcall FUN_10011360(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10011390  FUN_10011390  (53 bytes)
 * undefined4 FUN_10011390(int param_1)
 */
undefined4 __thiscall FUN_10011390(void *this,int param_1)

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

/* 100113e0  FUN_100113e0  (61 bytes)
 * Dar<vgui::IntChangeSignal*> * FUN_100113e0(Dar<vgui::IntChangeSignal*> * param_1)
 */
Dar<vgui::IntChangeSignal*> * __fastcall FUN_100113e0(Dar<vgui::IntChangeSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::IntChangeSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10011430  FUN_10011430  (65 bytes)
 * Dar<vgui::IntChangeSignal*> * FUN_10011430(int param_1)
 */
Dar<vgui::IntChangeSignal*> * __thiscall FUN_10011430(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::IntChangeSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 10011490  FUN_10011490  (225 bytes)
 * undefined FUN_10011490(int param_1)
 */
void __thiscall FUN_10011490(void *this,int param_1)

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

/* 100115b0  FUN_100115b0  (48 bytes)
 * undefined FUN_100115b0(int param_1)
 */
void __thiscall FUN_100115b0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100115f0  FUN_100115f0  (24 bytes)
 * undefined4 FUN_100115f0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_100115f0(undefined4 *param_1)

{
  return *param_1;
}

/* 10011610  FUN_10011610  (68 bytes)
 * undefined FUN_10011610(undefined4 param_1)
 */
void __thiscall FUN_10011610(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::IntChangeSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10011670  FUN_10011670  (74 bytes)
 * uint FUN_10011670(int param_1)
 */
uint __thiscall FUN_10011670(void *this,int param_1)

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

/* 100116d0  FUN_100116d0  (56 bytes)
 * undefined FUN_100116d0(IntChangeSignal * param_1)
 */
void __thiscall FUN_100116d0(void *this,IntChangeSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::IntChangeSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::IntChangeSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10011720  FUN_10011720  (155 bytes)
 * undefined FUN_10011720(IntChangeSignal * param_1, int param_2)
 */
void __thiscall FUN_10011720(void *this,IntChangeSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::IntChangeSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::IntChangeSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(IntChangeSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100117f0  FUN_100117f0  (54 bytes)
 * undefined FUN_100117f0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_100117f0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10011840  FUN_10011840  (109 bytes)
 * undefined FUN_10011840(int param_1)
 */
void __thiscall FUN_10011840(void *this,int param_1)

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

/* 100118d0  FUN_100118d0  (82 bytes)
 * undefined FUN_100118d0(int param_1)
 */
void __thiscall FUN_100118d0(void *this,int param_1)

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
  vgui::Dar<vgui::IntChangeSignal*>::removeElementAt(this,local_c);
  return;
}

/* 10011940  FUN_10011940  (28 bytes)
 * undefined FUN_10011940(undefined4 * param_1)
 */
void __fastcall FUN_10011940(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10011970  FUN_10011970  (53 bytes)
 * undefined4 FUN_10011970(int param_1)
 */
undefined4 __thiscall FUN_10011970(void *this,int param_1)

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

/* 100119c0  FUN_100119c0  (61 bytes)
 * Dar<vgui::TickSignal*> * FUN_100119c0(Dar<vgui::TickSignal*> * param_1)
 */
Dar<vgui::TickSignal*> * __fastcall FUN_100119c0(Dar<vgui::TickSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::TickSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10011a10  FUN_10011a10  (65 bytes)
 * Dar<vgui::TickSignal*> * FUN_10011a10(int param_1)
 */
Dar<vgui::TickSignal*> * __thiscall FUN_10011a10(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::TickSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 10011a70  FUN_10011a70  (225 bytes)
 * undefined FUN_10011a70(int param_1)
 */
void __thiscall FUN_10011a70(void *this,int param_1)

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

/* 10011b90  FUN_10011b90  (48 bytes)
 * undefined FUN_10011b90(int param_1)
 */
void __thiscall FUN_10011b90(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10011bd0  FUN_10011bd0  (24 bytes)
 * undefined4 FUN_10011bd0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10011bd0(undefined4 *param_1)

{
  return *param_1;
}

/* 10011bf0  FUN_10011bf0  (68 bytes)
 * undefined FUN_10011bf0(undefined4 param_1)
 */
void __thiscall FUN_10011bf0(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::TickSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10011c50  FUN_10011c50  (74 bytes)
 * uint FUN_10011c50(int param_1)
 */
uint __thiscall FUN_10011c50(void *this,int param_1)

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

/* 10011cb0  FUN_10011cb0  (56 bytes)
 * undefined FUN_10011cb0(TickSignal * param_1)
 */
void __thiscall FUN_10011cb0(void *this,TickSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::TickSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::TickSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10011d00  FUN_10011d00  (155 bytes)
 * undefined FUN_10011d00(TickSignal * param_1, int param_2)
 */
void __thiscall FUN_10011d00(void *this,TickSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::TickSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::TickSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(TickSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10011dd0  FUN_10011dd0  (54 bytes)
 * undefined FUN_10011dd0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10011dd0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10011e20  FUN_10011e20  (109 bytes)
 * undefined FUN_10011e20(int param_1)
 */
void __thiscall FUN_10011e20(void *this,int param_1)

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

/* 10011eb0  FUN_10011eb0  (82 bytes)
 * undefined FUN_10011eb0(int param_1)
 */
void __thiscall FUN_10011eb0(void *this,int param_1)

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
  vgui::Dar<vgui::TickSignal*>::removeElementAt(this,local_c);
  return;
}

/* 10011f20  FUN_10011f20  (28 bytes)
 * undefined FUN_10011f20(undefined4 * param_1)
 */
void __fastcall FUN_10011f20(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10011f50  FUN_10011f50  (53 bytes)
 * undefined4 FUN_10011f50(int param_1)
 */
undefined4 __thiscall FUN_10011f50(void *this,int param_1)

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

/* 10011fa0  FUN_10011fa0  (61 bytes)
 * Dar<vgui::Dar<char>*> * FUN_10011fa0(Dar<vgui::Dar<char>*> * param_1)
 */
Dar<vgui::Dar<char>*> * __fastcall FUN_10011fa0(Dar<vgui::Dar<char>*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::Dar<char>*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10011ff0  FUN_10011ff0  (65 bytes)
 * Dar<vgui::Dar<char>*> * FUN_10011ff0(int param_1)
 */
Dar<vgui::Dar<char>*> * __thiscall FUN_10011ff0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::Dar<char>*>::ensureCapacity(this,param_1);
  return this;
}

/* 10012050  FUN_10012050  (225 bytes)
 * undefined FUN_10012050(int param_1)
 */
void __thiscall FUN_10012050(void *this,int param_1)

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

/* 10012170  FUN_10012170  (48 bytes)
 * undefined FUN_10012170(int param_1)
 */
void __thiscall FUN_10012170(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 100121b0  FUN_100121b0  (24 bytes)
 * undefined4 FUN_100121b0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_100121b0(undefined4 *param_1)

{
  return *param_1;
}

/* 100121d0  FUN_100121d0  (68 bytes)
 * undefined FUN_100121d0(undefined4 param_1)
 */
void __thiscall FUN_100121d0(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::Dar<char>*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10012230  FUN_10012230  (74 bytes)
 * uint FUN_10012230(int param_1)
 */
uint __thiscall FUN_10012230(void *this,int param_1)

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

/* 10012290  FUN_10012290  (56 bytes)
 * undefined FUN_10012290(Dar<char> * param_1)
 */
void __thiscall FUN_10012290(void *this,Dar<char> *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::Dar<char>*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::Dar<char>*>::addElement(this,param_1);
  }
  return;
}

/* 100122e0  FUN_100122e0  (155 bytes)
 * undefined FUN_100122e0(Dar<char> * param_1, int param_2)
 */
void __thiscall FUN_100122e0(void *this,Dar<char> *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::Dar<char>*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::Dar<char>*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(Dar<char> **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 100123b0  FUN_100123b0  (54 bytes)
 * undefined FUN_100123b0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_100123b0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10012400  FUN_10012400  (109 bytes)
 * undefined FUN_10012400(int param_1)
 */
void __thiscall FUN_10012400(void *this,int param_1)

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

/* 10012490  FUN_10012490  (82 bytes)
 * undefined FUN_10012490(int param_1)
 */
void __thiscall FUN_10012490(void *this,int param_1)

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
  vgui::Dar<vgui::Dar<char>*>::removeElementAt(this,local_c);
  return;
}

/* 10012500  FUN_10012500  (28 bytes)
 * undefined FUN_10012500(undefined4 * param_1)
 */
void __fastcall FUN_10012500(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10012530  FUN_10012530  (53 bytes)
 * undefined4 FUN_10012530(int param_1)
 */
undefined4 __thiscall FUN_10012530(void *this,int param_1)

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

/* 10012580  FUN_10012580  (61 bytes)
 * Dar<vgui::Frame*> * FUN_10012580(Dar<vgui::Frame*> * param_1)
 */
Dar<vgui::Frame*> * __fastcall FUN_10012580(Dar<vgui::Frame*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::Frame*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 100125d0  FUN_100125d0  (65 bytes)
 * Dar<vgui::Frame*> * FUN_100125d0(int param_1)
 */
Dar<vgui::Frame*> * __thiscall FUN_100125d0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::Frame*>::ensureCapacity(this,param_1);
  return this;
}

/* 10012630  FUN_10012630  (225 bytes)
 * undefined FUN_10012630(int param_1)
 */
void __thiscall FUN_10012630(void *this,int param_1)

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

/* 10012750  FUN_10012750  (48 bytes)
 * undefined FUN_10012750(int param_1)
 */
void __thiscall FUN_10012750(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10012790  FUN_10012790  (24 bytes)
 * undefined4 FUN_10012790(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10012790(undefined4 *param_1)

{
  return *param_1;
}

/* 100127b0  FUN_100127b0  (68 bytes)
 * undefined FUN_100127b0(undefined4 param_1)
 */
void __thiscall FUN_100127b0(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::Frame*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10012810  FUN_10012810  (74 bytes)
 * uint FUN_10012810(int param_1)
 */
uint __thiscall FUN_10012810(void *this,int param_1)

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

/* 10012870  FUN_10012870  (56 bytes)
 * undefined FUN_10012870(Frame * param_1)
 */
void __thiscall FUN_10012870(void *this,Frame *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::Frame*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::Frame*>::addElement(this,param_1);
  }
  return;
}

/* 100128c0  FUN_100128c0  (155 bytes)
 * undefined FUN_100128c0(Frame * param_1, int param_2)
 */
void __thiscall FUN_100128c0(void *this,Frame *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::Frame*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::Frame*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(Frame **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10012990  FUN_10012990  (54 bytes)
 * undefined FUN_10012990(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10012990(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 100129e0  FUN_100129e0  (109 bytes)
 * undefined FUN_100129e0(int param_1)
 */
void __thiscall FUN_100129e0(void *this,int param_1)

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

/* 10012a70  FUN_10012a70  (82 bytes)
 * undefined FUN_10012a70(int param_1)
 */
void __thiscall FUN_10012a70(void *this,int param_1)

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
  vgui::Dar<vgui::Frame*>::removeElementAt(this,local_c);
  return;
}

/* 10012ae0  FUN_10012ae0  (28 bytes)
 * undefined FUN_10012ae0(undefined4 * param_1)
 */
void __fastcall FUN_10012ae0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 10012b10  FUN_10012b10  (53 bytes)
 * undefined4 FUN_10012b10(int param_1)
 */
undefined4 __thiscall FUN_10012b10(void *this,int param_1)

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

/* 10012b60  FUN_10012b60  (61 bytes)
 * Dar<vgui::DesktopIcon*> * FUN_10012b60(Dar<vgui::DesktopIcon*> * param_1)
 */
Dar<vgui::DesktopIcon*> * __fastcall FUN_10012b60(Dar<vgui::DesktopIcon*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::DesktopIcon*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10012bb0  FUN_10012bb0  (65 bytes)
 * Dar<vgui::DesktopIcon*> * FUN_10012bb0(int param_1)
 */
Dar<vgui::DesktopIcon*> * __thiscall FUN_10012bb0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::DesktopIcon*>::ensureCapacity(this,param_1);
  return this;
}

/* 10012c10  FUN_10012c10  (225 bytes)
 * undefined FUN_10012c10(int param_1)
 */
void __thiscall FUN_10012c10(void *this,int param_1)

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

/* 10012d30  FUN_10012d30  (48 bytes)
 * undefined FUN_10012d30(int param_1)
 */
void __thiscall FUN_10012d30(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10012d70  FUN_10012d70  (24 bytes)
 * undefined4 FUN_10012d70(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10012d70(undefined4 *param_1)

{
  return *param_1;
}

/* 10012d90  FUN_10012d90  (68 bytes)
 * undefined FUN_10012d90(undefined4 param_1)
 */
void __thiscall FUN_10012d90(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::DesktopIcon*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 10012df0  FUN_10012df0  (74 bytes)
 * uint FUN_10012df0(int param_1)
 */
uint __thiscall FUN_10012df0(void *this,int param_1)

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

/* 10012e50  FUN_10012e50  (56 bytes)
 * undefined FUN_10012e50(DesktopIcon * param_1)
 */
void __thiscall FUN_10012e50(void *this,DesktopIcon *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::DesktopIcon*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::DesktopIcon*>::addElement(this,param_1);
  }
  return;
}

/* 10012ea0  FUN_10012ea0  (155 bytes)
 * undefined FUN_10012ea0(DesktopIcon * param_1, int param_2)
 */
void __thiscall FUN_10012ea0(void *this,DesktopIcon *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::DesktopIcon*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::DesktopIcon*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(DesktopIcon **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10012f70  FUN_10012f70  (54 bytes)
 * undefined FUN_10012f70(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10012f70(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 10012fc0  FUN_10012fc0  (109 bytes)
 * undefined FUN_10012fc0(int param_1)
 */
void __thiscall FUN_10012fc0(void *this,int param_1)

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

/* 10013050  FUN_10013050  (82 bytes)
 * undefined FUN_10013050(int param_1)
 */
void __thiscall FUN_10013050(void *this,int param_1)

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
  vgui::Dar<vgui::DesktopIcon*>::removeElementAt(this,local_c);
  return;
}

/* 100130c0  FUN_100130c0  (28 bytes)
 * undefined FUN_100130c0(undefined4 * param_1)
 */
void __fastcall FUN_100130c0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 100130f0  FUN_100130f0  (53 bytes)
 * undefined4 FUN_100130f0(int param_1)
 */
undefined4 __thiscall FUN_100130f0(void *this,int param_1)

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

/* 10013140  FUN_10013140  (61 bytes)
 * Dar<vgui::ChangeSignal*> * FUN_10013140(Dar<vgui::ChangeSignal*> * param_1)
 */
Dar<vgui::ChangeSignal*> * __fastcall FUN_10013140(Dar<vgui::ChangeSignal*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::ChangeSignal*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10013190  FUN_10013190  (65 bytes)
 * Dar<vgui::ChangeSignal*> * FUN_10013190(int param_1)
 */
Dar<vgui::ChangeSignal*> * __thiscall FUN_10013190(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::ChangeSignal*>::ensureCapacity(this,param_1);
  return this;
}

/* 100131f0  FUN_100131f0  (225 bytes)
 * undefined FUN_100131f0(int param_1)
 */
void __thiscall FUN_100131f0(void *this,int param_1)

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

/* 10013310  FUN_10013310  (48 bytes)
 * undefined FUN_10013310(int param_1)
 */
void __thiscall FUN_10013310(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10013350  FUN_10013350  (24 bytes)
 * undefined4 FUN_10013350(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10013350(undefined4 *param_1)

{
  return *param_1;
}

/* 10013370  FUN_10013370  (68 bytes)
 * undefined FUN_10013370(undefined4 param_1)
 */
void __thiscall FUN_10013370(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::ChangeSignal*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100133d0  FUN_100133d0  (74 bytes)
 * uint FUN_100133d0(int param_1)
 */
uint __thiscall FUN_100133d0(void *this,int param_1)

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

/* 10013430  FUN_10013430  (56 bytes)
 * undefined FUN_10013430(ChangeSignal * param_1)
 */
void __thiscall FUN_10013430(void *this,ChangeSignal *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::ChangeSignal*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::ChangeSignal*>::addElement(this,param_1);
  }
  return;
}

/* 10013480  FUN_10013480  (155 bytes)
 * undefined FUN_10013480(ChangeSignal * param_1, int param_2)
 */
void __thiscall FUN_10013480(void *this,ChangeSignal *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::ChangeSignal*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::ChangeSignal*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(ChangeSignal **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 10013550  FUN_10013550  (54 bytes)
 * undefined FUN_10013550(undefined4 param_1, int param_2)
 */
void __thiscall FUN_10013550(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 100135a0  FUN_100135a0  (109 bytes)
 * undefined FUN_100135a0(int param_1)
 */
void __thiscall FUN_100135a0(void *this,int param_1)

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

/* 10013630  FUN_10013630  (82 bytes)
 * undefined FUN_10013630(int param_1)
 */
void __thiscall FUN_10013630(void *this,int param_1)

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
  vgui::Dar<vgui::ChangeSignal*>::removeElementAt(this,local_c);
  return;
}

/* 100136a0  FUN_100136a0  (28 bytes)
 * undefined FUN_100136a0(undefined4 * param_1)
 */
void __fastcall FUN_100136a0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 100136d0  FUN_100136d0  (53 bytes)
 * undefined4 FUN_100136d0(int param_1)
 */
undefined4 __thiscall FUN_100136d0(void *this,int param_1)

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

/* 10013720  FUN_10013720  (61 bytes)
 * Dar<vgui::Panel*> * FUN_10013720(Dar<vgui::Panel*> * param_1)
 */
Dar<vgui::Panel*> * __fastcall FUN_10013720(Dar<vgui::Panel*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::Panel*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 10013770  FUN_10013770  (65 bytes)
 * Dar<vgui::Panel*> * FUN_10013770(int param_1)
 */
Dar<vgui::Panel*> * __thiscall FUN_10013770(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::Panel*>::ensureCapacity(this,param_1);
  return this;
}

/* 100137d0  FUN_100137d0  (225 bytes)
 * undefined FUN_100137d0(int param_1)
 */
void __thiscall FUN_100137d0(void *this,int param_1)

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

/* 100138f0  FUN_100138f0  (48 bytes)
 * undefined FUN_100138f0(int param_1)
 */
void __thiscall FUN_100138f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 10013930  FUN_10013930  (24 bytes)
 * undefined4 FUN_10013930(undefined4 * param_1)
 */
undefined4 __fastcall FUN_10013930(undefined4 *param_1)

{
  return *param_1;
}

/* 10013950  FUN_10013950  (68 bytes)
 * undefined FUN_10013950(undefined4 param_1)
 */
void __thiscall FUN_10013950(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::Panel*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 100139b0  FUN_100139b0  (74 bytes)
 * uint FUN_100139b0(int param_1)
 */
uint __thiscall FUN_100139b0(void *this,int param_1)

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

