/* client.dll - unnamed_100192f0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100192f0  FUN_100192f0  (47 bytes)
 * undefined FUN_100192f0(int param_1)
 * called by: thunk_FUN_100192f0
 */
void __fastcall FUN_100192f0(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *DAT_102906d4 + 1.0;
  return;
}

/* 10019330  FUN_10019330  (19 bytes)
 * undefined FUN_10019330(void)
 * called by: thunk_FUN_10019330
 */
void FUN_10019330(void)

{
  return;
}

/* 10019350  FUN_10019350  (19 bytes)
 * undefined FUN_10019350(void)
 * called by: thunk_FUN_10019350
 */
void FUN_10019350(void)

{
  return;
}

/* 10019370  FUN_10019370  (31 bytes)
 * undefined FUN_10019370(int param_1)
 * called by: thunk_FUN_10019370
 */
void FUN_10019370(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100193a0  FUN_100193a0  (24 bytes)
 * undefined4 FUN_100193a0(void)
 */
undefined4 FUN_100193a0(void)

{
  return 2;
}

/* 100193c0  FUN_100193c0  (19 bytes)
 * undefined FUN_100193c0(void)
 * called by: thunk_FUN_100193c0
 */
void FUN_100193c0(void)

{
  return;
}

/* 100193e0  FUN_100193e0  (21 bytes)
 * undefined4 FUN_100193e0(void)
 * called by: thunk_FUN_100193e0
 */
undefined4 FUN_100193e0(void)

{
  return 0;
}

/* 10019400  FUN_10019400  (21 bytes)
 * undefined FUN_10019400(void)
 * called by: thunk_FUN_10019400
 */
void FUN_10019400(void)

{
  return;
}

/* 10019420  FUN_10019420  (22 bytes)
 * undefined4 FUN_10019420(void)
 * called by: thunk_FUN_10019420
 */
undefined4 FUN_10019420(void)

{
  return 0xffffffff;
}

/* 10019440  FUN_10019440  (26 bytes)
 * undefined4 FUN_10019440(void)
 * called by: thunk_FUN_10019440
 */
undefined4 FUN_10019440(void)

{
  return 1;
}

/* 10019460  FUN_10019460  (21 bytes)
 * undefined4 FUN_10019460(void)
 * called by: thunk_FUN_10019460
 */
undefined4 FUN_10019460(void)

{
  return 0;
}

/* 10019480  FUN_10019480  (21 bytes)
 * undefined4 FUN_10019480(void)
 * called by: thunk_FUN_10019480
 */
undefined4 FUN_10019480(void)

{
  return 0;
}

/* 100194a0  FUN_100194a0  (21 bytes)
 * undefined4 FUN_100194a0(void)
 * called by: thunk_FUN_100194a0
 */
undefined4 FUN_100194a0(void)

{
  return 0;
}

/* 100194c0  FUN_100194c0  (21 bytes)
 * undefined FUN_100194c0(void)
 * called by: thunk_FUN_100194c0
 */
void FUN_100194c0(void)

{
  return;
}

/* 100194e0  FUN_100194e0  (21 bytes)
 * undefined FUN_100194e0(void)
 * called by: thunk_FUN_100194e0
 */
void FUN_100194e0(void)

{
  return;
}

/* 10019500  FUN_10019500  (23 bytes)
 * undefined4 FUN_10019500(void)
 * called by: thunk_FUN_10019500
 */
undefined4 FUN_10019500(void)

{
  return 0;
}

/* 10019520  FUN_10019520  (23 bytes)
 * undefined4 FUN_10019520(void)
 * called by: thunk_FUN_10019520
 */
undefined4 FUN_10019520(void)

{
  return 0;
}

/* 10019540  FUN_10019540  (24 bytes)
 * undefined4 FUN_10019540(void)
 * called by: thunk_FUN_10019540
 */
undefined4 FUN_10019540(void)

{
  return 0xffffffff;
}

/* 10019560  FUN_10019560  (25 bytes)
 * float10 FUN_10019560(void)
 * called by: thunk_FUN_10019560
 */
float10 FUN_10019560(void)

{
  return (float10)0.0;
}

/* 10019580  FUN_10019580  (38 bytes)
 * undefined FUN_10019580(int param_1)
 * called by: thunk_FUN_10019580
 */
void __fastcall FUN_10019580(int param_1)

{
  thunk_FUN_100195b0((void *)(*(int *)(param_1 + 4) + 0x20),(float *)&DAT_1028ffec);
  return;
}

/* 100195b0  FUN_100195b0  (38 bytes)
 * bool FUN_100195b0(float * param_1)
 */
bool __thiscall FUN_100195b0(void *this,float *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100195e0(this,param_1);
  return (bool)('\x01' - (iVar1 != 0));
}

/* 100195e0  FUN_100195e0  (95 bytes)
 * undefined4 FUN_100195e0(float * param_1)
 */
undefined4 __thiscall FUN_100195e0(void *this,float *param_1)

{
  undefined4 local_4c;
  
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == param_1[2])) {
    local_4c = 1;
  }
  else {
    local_4c = 0;
  }
  return local_4c;
}

/* 10019660  FUN_10019660  (19 bytes)
 * undefined FUN_10019660(void)
 * called by: thunk_FUN_10019660
 */
void FUN_10019660(void)

{
  return;
}

/* 10019680  FUN_10019680  (21 bytes)
 * undefined FUN_10019680(void)
 * called by: thunk_FUN_10019680
 */
void FUN_10019680(void)

{
  return;
}

/* 100196a0  FUN_100196a0  (19 bytes)
 * undefined FUN_100196a0(void)
 * called by: thunk_FUN_100196a0
 */
void FUN_100196a0(void)

{
  return;
}

/* 100196c0  FUN_100196c0  (19 bytes)
 * undefined FUN_100196c0(void)
 * called by: thunk_FUN_100196c0
 */
void FUN_100196c0(void)

{
  return;
}

/* 100196e0  FUN_100196e0  (23 bytes)
 * undefined4 FUN_100196e0(void)
 * called by: thunk_FUN_100196e0
 */
undefined4 FUN_100196e0(void)

{
  return 0;
}

/* 10019700  FUN_10019700  (21 bytes)
 * undefined4 FUN_10019700(void)
 * called by: thunk_FUN_10019700
 */
undefined4 FUN_10019700(void)

{
  return 0;
}

/* 10019720  FUN_10019720  (80 bytes)
 * undefined4 FUN_10019720(int param_1)
 * called by: thunk_FUN_10019720
 */
undefined4 __fastcall FUN_10019720(int param_1)

{
  undefined4 local_4c;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) != 0) ||
     (*(float *)(*(int *)(param_1 + 4) + 0x160) <= 0.0)) {
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  return local_4c;
}

/* 10019790  FUN_10019790  (68 bytes)
 * undefined4 FUN_10019790(int param_1)
 * called by: thunk_FUN_10019790
 */
undefined4 __fastcall FUN_10019790(int param_1)

{
  undefined4 local_4c;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 0x10c) == 4) ||
     (*(int *)(*(int *)(param_1 + 4) + 0x108) == 0xd)) {
    local_4c = 1;
  }
  else {
    local_4c = 0;
  }
  return local_4c;
}

/* 100197f0  FUN_100197f0  (81 bytes)
 * undefined4 FUN_100197f0(int * param_1)
 * called by: thunk_FUN_100197f0
 */
undefined4 __fastcall FUN_100197f0(int *param_1)

{
  int iVar1;
  undefined4 local_4c;
  
  iVar1 = (**(code **)(*param_1 + 0x98))();
  if ((iVar1 == 0) || (*(float *)(param_1[1] + 0x16c) != 0.0)) {
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  return local_4c;
}

/* 10019860  FUN_10019860  (70 bytes)
 * undefined FUN_10019860(int param_1)
 * called by: thunk_FUN_10019860
 */
void __thiscall FUN_10019860(void *this,int param_1)

{
  thunk_FUN_100198c0((char *)(*(int *)(DAT_102906d4 + 0x98) + param_1),
                     (char *)(*(int *)(DAT_102906d4 + 0x98) +
                             *(int *)(*(int *)((int)this + 4) + 0x1cc)));
  return;
}

/* 100198c0  FUN_100198c0  (37 bytes)
 * bool FUN_100198c0(char * param_1, char * param_2)
 */
bool __cdecl FUN_100198c0(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}

/* 100198f0  FUN_100198f0  (21 bytes)
 * undefined4 FUN_100198f0(void)
 * called by: thunk_FUN_100198f0
 */
undefined4 FUN_100198f0(void)

{
  return 0;
}

/* 10019910  FUN_10019910  (21 bytes)
 * undefined4 FUN_10019910(void)
 * called by: thunk_FUN_10019910
 */
undefined4 FUN_10019910(void)

{
  return 0;
}

/* 10019930  FUN_10019930  (24 bytes)
 * char * FUN_10019930(void)
 * called by: thunk_FUN_10019930
 */
char * FUN_10019930(void)

{
  return "";
}

/* 10019950  FUN_10019950  (55 bytes)
 * undefined FUN_10019950(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: thunk_FUN_10019950
 */
void __thiscall
FUN_10019950(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 0x18) != 0) {
    (**(code **)((int)this + 0x18))(param_1,param_2,param_3,param_4);
  }
  return;
}

/* 100199a0  FUN_100199a0  (43 bytes)
 * undefined FUN_100199a0(undefined4 param_1)
 * called by: thunk_FUN_100199a0
 */
void __thiscall FUN_100199a0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    (**(code **)((int)this + 0x1c))(param_1);
  }
  return;
}

/* 100199e0  FUN_100199e0  (21 bytes)
 * undefined4 FUN_100199e0(void)
 * called by: thunk_FUN_100199e0
 */
undefined4 FUN_100199e0(void)

{
  return 0;
}

/* 10019a00  FUN_10019a00  (19 bytes)
 * undefined FUN_10019a00(void)
 * called by: thunk_FUN_10019a00
 */
void FUN_10019a00(void)

{
  return;
}

/* 10019a20  FUN_10019a20  (21 bytes)
 * undefined4 FUN_10019a20(void)
 * called by: thunk_FUN_10019a20
 */
undefined4 FUN_10019a20(void)

{
  return 0;
}

/* 10019a40  FUN_10019a40  (74 bytes)
 * void * FUN_10019a40(void * param_1)
 * called by: thunk_FUN_10019a40
 */
void * __thiscall FUN_10019a40(void *this,void *param_1)

{
  void *this_00;
  void *pvVar1;
  float fVar2;
  undefined1 local_14 [12];
  void *local_8;
  
  fVar2 = 0.5;
  pvVar1 = param_1;
  local_8 = this;
  this_00 = thunk_FUN_1000d970((void *)(*(int *)((int)this + 4) + 0xd0),local_14,
                               (float *)(*(int *)((int)this + 4) + 0xc4));
  thunk_FUN_1000cb20(this_00,pvVar1,fVar2);
  return param_1;
}

/* 10019aa0  FUN_10019aa0  (55 bytes)
 * void * FUN_10019aa0(void * param_1)
 * called by: thunk_FUN_10019aa0
 */
void * __thiscall FUN_10019aa0(void *this,void *param_1)

{
  thunk_FUN_1000d970((void *)(*(int *)((int)this + 4) + 8),param_1,
                     (float *)(*(int *)((int)this + 4) + 0x174));
  return param_1;
}

/* 10019af0  FUN_10019af0  (55 bytes)
 * void * FUN_10019af0(void * param_1)
 * called by: thunk_FUN_10019af0
 */
void * __thiscall FUN_10019af0(void *this,void *param_1)

{
  thunk_FUN_1000d970((void *)(*(int *)((int)this + 4) + 8),param_1,
                     (float *)(*(int *)((int)this + 4) + 0x174));
  return param_1;
}

/* 10019b40  FUN_10019b40  (42 bytes)
 * undefined4 FUN_10019b40(undefined4 param_1)
 * called by: thunk_FUN_10019b40
 */
undefined4 __thiscall FUN_10019b40(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0xd4))(param_1);
  return param_1;
}

/* 10019b80  FUN_10019b80  (44 bytes)
 * undefined FUN_10019b80(void)
 * called by: thunk_FUN_10019b80
 */
void FUN_10019b80(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10019bc0();
  (*DAT_1028fdbc)(uVar1);
  return;
}

/* 10019bc0  FUN_10019bc0  (28 bytes)
 * undefined FUN_10019bc0(void)
 */
void FUN_10019bc0(void)

{
  thunk_FUN_10014bd0();
  return;
}

/* 10019bf0  FUN_10019bf0  (21 bytes)
 * undefined FUN_10019bf0(void)
 * called by: thunk_FUN_10019bf0
 */
void FUN_10019bf0(void)

{
  return;
}

/* 10019c10  FUN_10019c10  (25 bytes)
 * undefined4 FUN_10019c10(int param_1)
 * called by: thunk_FUN_10019c10
 */
undefined4 __fastcall FUN_10019c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

/* 10019c30  FUN_10019c30  (25 bytes)
 * float10 FUN_10019c30(int param_1)
 * called by: thunk_FUN_10019c30
 */
float10 __fastcall FUN_10019c30(int param_1)

{
  return (float10)*(float *)(param_1 + 0x7c);
}

/* 10019c50  FUN_10019c50  (28 bytes)
 * undefined4 FUN_10019c50(int param_1)
 * called by: thunk_FUN_10019c50
 */
undefined4 __fastcall FUN_10019c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}

/* 10019c80  FUN_10019c80  (19 bytes)
 * undefined FUN_10019c80(void)
 * called by: thunk_FUN_10019c80
 */
void FUN_10019c80(void)

{
  return;
}

/* 10019ca0  FUN_10019ca0  (97 bytes)
 * void FUN_10019ca0(local_state_s * from, local_state_s * to, usercmd_t * cmd, int runfuncs, double time, uint random_seed)
 */
/* WARNING: Removing unreachable block (ram,0x10019cdc) */

void __cdecl
FUN_10019ca0(local_state_s *from,local_state_s *to,usercmd_t *cmd,int runfuncs,double time,
            uint random_seed)

{
  DAT_102e2cbc = runfuncs;
  thunk_FUN_10017f70((int)from,(int)to,(int)cmd,time,random_seed);
  DAT_102e7f1c = (to->client).fov;
  return;
}

/* 10019d20  FUN_10019d20  (37 bytes)
 * bool FUN_10019d20(int param_1)
 * called by: thunk_FUN_10019d20
 */
bool __fastcall FUN_10019d20(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x170) != 2;
}

/* 10019d50  FUN_10019d50  (26 bytes)
 * undefined FUN_10019d50(void)
 */
void FUN_10019d50(void)

{
  thunk_FUN_10026210(0x10295dc8);
  return;
}

/* 10019d70  FUN_10019d70  (23 bytes)
 * undefined4 FUN_10019d70(void)
 * called by: thunk_FUN_10019d70
 */
undefined4 FUN_10019d70(void)

{
  return 0;
}

/* 10019d90  FUN_10019d90  (23 bytes)
 * undefined4 FUN_10019d90(void)
 * called by: thunk_FUN_10019d90
 */
undefined4 FUN_10019d90(void)

{
  return 0;
}

/* 10019db0  FUN_10019db0  (24 bytes)
 * undefined4 FUN_10019db0(void)
 * called by: thunk_FUN_10019db0
 */
undefined4 FUN_10019db0(void)

{
  return 1;
}

/* 10019dd0  FUN_10019dd0  (24 bytes)
 * undefined4 FUN_10019dd0(void)
 * called by: thunk_FUN_10019dd0
 */
undefined4 FUN_10019dd0(void)

{
  return 1;
}

/* 10019df0  FUN_10019df0  (24 bytes)
 * undefined4 FUN_10019df0(void)
 * called by: thunk_FUN_10019df0
 */
undefined4 FUN_10019df0(void)

{
  return 1;
}

/* 10019e10  FUN_10019e10  (19 bytes)
 * undefined FUN_10019e10(void)
 * called by: thunk_FUN_10019e10
 */
void FUN_10019e10(void)

{
  return;
}

/* 10019e30  FUN_10019e30  (19 bytes)
 * undefined FUN_10019e30(void)
 * called by: thunk_FUN_10019e30
 */
void FUN_10019e30(void)

{
  return;
}

/* 10019e50  FUN_10019e50  (19 bytes)
 * undefined FUN_10019e50(void)
 * called by: thunk_FUN_10019e50
 */
void FUN_10019e50(void)

{
  return;
}

/* 10019e70  FUN_10019e70  (22 bytes)
 * undefined4 FUN_10019e70(void)
 * called by: thunk_FUN_10019e70
 */
undefined4 FUN_10019e70(void)

{
  return 0xffffffff;
}

/* 10019e90  FUN_10019e90  (22 bytes)
 * undefined4 FUN_10019e90(void)
 * called by: thunk_FUN_10019e90
 */
undefined4 FUN_10019e90(void)

{
  return 0xffffffff;
}

/* 10019eb0  FUN_10019eb0  (23 bytes)
 * undefined4 FUN_10019eb0(void)
 * called by: thunk_FUN_10019eb0
 */
undefined4 FUN_10019eb0(void)

{
  return 0;
}

/* 10019ed0  FUN_10019ed0  (21 bytes)
 * undefined4 FUN_10019ed0(void)
 * called by: thunk_FUN_10019ed0
 */
undefined4 FUN_10019ed0(void)

{
  return 0;
}

/* 10019ef0  FUN_10019ef0  (21 bytes)
 * undefined4 FUN_10019ef0(void)
 * called by: thunk_FUN_10019ef0
 */
undefined4 FUN_10019ef0(void)

{
  return 0;
}

/* 10019f10  FUN_10019f10  (42 bytes)
 * undefined4 FUN_10019f10(int * param_1)
 * called by: thunk_FUN_10019f10
 */
undefined4 __fastcall FUN_10019f10(int *param_1)

{
  (**(code **)(*param_1 + 0x13c))(param_1);
  return 1;
}

/* 10019f50  FUN_10019f50  (19 bytes)
 * undefined FUN_10019f50(void)
 * called by: thunk_FUN_10019f50
 */
void FUN_10019f50(void)

{
  return;
}

/* 10019f70  FUN_10019f70  (19 bytes)
 * undefined FUN_10019f70(void)
 * called by: thunk_FUN_10019f70
 */
void FUN_10019f70(void)

{
  return;
}

/* 10019f90  FUN_10019f90  (19 bytes)
 * undefined FUN_10019f90(void)
 * called by: thunk_FUN_10019f90
 */
void FUN_10019f90(void)

{
  return;
}

/* 10019fb0  FUN_10019fb0  (19 bytes)
 * undefined FUN_10019fb0(void)
 * called by: thunk_FUN_10019fb0
 */
void FUN_10019fb0(void)

{
  return;
}

/* 10019fd0  FUN_10019fd0  (19 bytes)
 * undefined FUN_10019fd0(void)
 * called by: thunk_FUN_10019fd0
 */
void FUN_10019fd0(void)

{
  return;
}

/* 10019ff0  FUN_10019ff0  (19 bytes)
 * undefined FUN_10019ff0(void)
 * called by: thunk_FUN_10019ff0
 */
void FUN_10019ff0(void)

{
  return;
}

/* 1001a010  FUN_1001a010  (21 bytes)
 * undefined4 FUN_1001a010(void)
 * called by: thunk_FUN_1001a010
 */
undefined4 FUN_1001a010(void)

{
  return 0;
}

/* 1001a030  FUN_1001a030  (21 bytes)
 * undefined4 FUN_1001a030(void)
 * called by: thunk_FUN_1001a030
 */
undefined4 FUN_1001a030(void)

{
  return 0;
}

/* 1001a050  FUN_1001a050  (22 bytes)
 * undefined4 FUN_1001a050(undefined4 param_1)
 * called by: thunk_FUN_1001a050
 */
undefined4 __fastcall FUN_1001a050(undefined4 param_1)

{
  return param_1;
}

/* 1001a070  FUN_1001a070  (97 bytes)
 * float * FUN_1001a070(float * param_1)
 * called by: thunk_FUN_1001a070
 */
float * FUN_1001a070(float *param_1)

{
  void *pvVar1;
  float10 fVar2;
  undefined1 *puVar3;
  float *pfVar4;
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int *local_8;
  
  fVar2 = (float10)(*DAT_1028feec)(0x3f000000,0x3f8ccccd);
  pvVar1 = thunk_FUN_1000cb20((void *)(local_8[1] + 0x174),local_20,(float)fVar2);
  puVar3 = local_14;
  pfVar4 = param_1;
  pvVar1 = (void *)(**(code **)(*local_8 + 0xd4))(puVar3,param_1,pvVar1);
  thunk_FUN_1000d970(pvVar1,puVar3,pfVar4);
  return param_1;
}

/* 1001a0f0  FUN_1001a0f0  (41 bytes)
 * undefined FUN_1001a0f0(int param_1)
 * called by: thunk_FUN_1001a0f0
 */
void __fastcall FUN_1001a0f0(int param_1)

{
  *(float *)(param_1 + 0x930) = *DAT_102906d4 - 1.0;
  return;
}

/* 1001a130  FUN_1001a130  (41 bytes)
 * undefined FUN_1001a130(int param_1)
 * called by: thunk_FUN_1001a130
 */
void __fastcall FUN_1001a130(int param_1)

{
  *(float *)(param_1 + 0x930) = *DAT_102906d4 + 30.0;
  return;
}

/* 1001a170  FUN_1001a170  (62 bytes)
 * bool FUN_1001a170(int param_1)
 * called by: thunk_FUN_1001a170
 */
bool __fastcall FUN_1001a170(int param_1)

{
  return *(float *)(param_1 + 0x930) < *DAT_102906d4 !=
         (*(float *)(param_1 + 0x930) == *DAT_102906d4);
}

/* 1001a1c0  FUN_1001a1c0  (80 bytes)
 * undefined4 FUN_1001a1c0(int param_1)
 * called by: thunk_FUN_1001a1c0
 */
undefined4 __fastcall FUN_1001a1c0(int param_1)

{
  undefined4 local_4c;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) != 0) ||
     (*(float *)(*(int *)(param_1 + 4) + 0x160) <= 0.0)) {
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  return local_4c;
}

/* 1001a230  FUN_1001a230  (21 bytes)
 * undefined4 FUN_1001a230(void)
 * called by: thunk_FUN_1001a230
 */
undefined4 FUN_1001a230(void)

{
  return 0;
}

/* 1001a250  FUN_1001a250  (24 bytes)
 * undefined4 FUN_1001a250(void)
 * called by: thunk_FUN_1001a250
 */
undefined4 FUN_1001a250(void)

{
  return 1;
}

/* 1001a270  FUN_1001a270  (24 bytes)
 * undefined4 FUN_1001a270(void)
 * called by: thunk_FUN_1001a270
 */
undefined4 FUN_1001a270(void)

{
  return 1;
}

/* 1001a290  FUN_1001a290  (29 bytes)
 * uint FUN_1001a290(void)
 * called by: thunk_FUN_1001a290
 */
uint FUN_1001a290(void)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_100193a0();
  return uVar1 & 0xfffffffd;
}

/* 1001a2c0  FUN_1001a2c0  (24 bytes)
 * undefined4 FUN_1001a2c0(void)
 * called by: thunk_FUN_1001a2c0
 */
undefined4 FUN_1001a2c0(void)

{
  return 2;
}

/* 1001a2e0  FUN_1001a2e0  (24 bytes)
 * undefined4 FUN_1001a2e0(void)
 * called by: thunk_FUN_1001a2e0
 */
undefined4 FUN_1001a2e0(void)

{
  return 1;
}

/* 1001a300  FUN_1001a300  (24 bytes)
 * undefined4 FUN_1001a300(void)
 * called by: thunk_FUN_1001a300
 */
undefined4 FUN_1001a300(void)

{
  return 1;
}

/* 1001a320  FUN_1001a320  (61 bytes)
 * undefined4 * FUN_1001a320(undefined4 param_1, undefined4 param_2)
 */
undefined4 * __thiscall FUN_1001a320(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(void **)((int)this + 8) = DAT_1029920c;
  DAT_1029920c = this;
  return this;
}

/* 1001a370  FUN_1001a370  (105 bytes)
 * undefined4 FUN_1001a370(char * param_1, undefined4 * param_2)
 */
undefined4 __cdecl FUN_1001a370(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_8;
  
  local_8 = DAT_1029920c;
  while( true ) {
    if (local_8 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    iVar1 = _strcmp((char *)local_8[1],param_1);
    if (iVar1 == 0) break;
    local_8 = (undefined4 *)local_8[2];
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  uVar2 = (*(code *)*local_8)();
  return uVar2;
}

/* 1001a400  FUN_1001a400  (26 bytes)
 * undefined FUN_1001a400(LPCSTR param_1)
 */
void __cdecl FUN_1001a400(LPCSTR param_1)

{
  LoadLibraryA(param_1);
  return;
}

/* 1001a420  FUN_1001a420  (34 bytes)
 * undefined FUN_1001a420(HMODULE param_1)
 */
void __cdecl FUN_1001a420(HMODULE param_1)

{
  if (param_1 != (HMODULE)0x0) {
    FreeLibrary(param_1);
  }
  return;
}

/* 1001a450  FUN_1001a450  (21 bytes)
 * undefined * FUN_1001a450(void)
 */
undefined * FUN_1001a450(void)

{
  return CreateInterface;
}

/* 1001a470  FUN_1001a470  (41 bytes)
 * FARPROC FUN_1001a470(HMODULE param_1)
 */
FARPROC __cdecl FUN_1001a470(HMODULE param_1)

{
  FARPROC pFVar1;
  
  if (param_1 == (HMODULE)0x0) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    pFVar1 = GetProcAddress(param_1,"CreateInterface");
  }
  return pFVar1;
}

/* 1001a4b0  FUN_1001a4b0  (856 bytes)
 * undefined FUN_1001a4b0(undefined1 * param_1)
 */
void __cdecl FUN_1001a4b0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 6;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xd;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0xd;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)&DAT_10269298);
  param_1[0x84] = 4;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/ak47.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 3000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_ak47.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_ak47.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_ak47.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a4) = 4;
  *(undefined2 *)(param_1 + 0x2a6) = 8;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2b0) = 7;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/ak47/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x15;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 1001a8e0  FUN_1001a8e0  (835 bytes)
 * undefined FUN_1001a8e0(undefined1 * param_1)
 */
void __cdecl FUN_1001a8e0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x406147ae;
  *(undefined4 *)(param_1 + 0x34) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"STEYR-AUG");
  param_1[0x84] = 4;
  param_1[0x85] = 4;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/aug.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 5000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 8;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_aug.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_aug.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_aug_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_aug.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 3;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/aug/aug-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/aug/aug-fire-sil.wav");
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x12;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 1001ad00  FUN_1001ad00  (799 bytes)
 * undefined FUN_1001ad00(undefined1 * param_1)
 */
void __cdecl FUN_1001ad00(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x12;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Barrett M82A1");
  param_1[0x84] = 4;
  param_1[0x85] = 5;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m82.spr");
  param_1[0xca] = 0x46;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd0) = 9000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 8;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/556_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m82.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m82.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m82.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 4;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/barrett/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 7;
  *(undefined4 *)(param_1 + 0x364) = 0x28;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x30;
  *(undefined4 *)(param_1 + 0x370) = 0x10;
  return;
}

/* 1001b0f0  FUN_1001b0f0  (828 bytes)
 * undefined FUN_1001b0f0(undefined1 * param_1)
 */
void __cdecl FUN_1001b0f0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f23d70a;
  *(undefined4 *)(param_1 + 0x28) = 0x3d50e560;
  *(undefined4 *)(param_1 + 0x30) = 0x41380000;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Benelli M3");
  param_1[0x84] = 4;
  param_1[0x85] = 1;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/m3.spr");
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 3000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/shotgun_shell_blue.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_m3.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_m3.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_m3.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"twohanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 2;
  *(undefined2 *)(param_1 + 0x27c) = 3;
  *(undefined2 *)(param_1 + 0x27e) = 4;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x282) = 7;
  *(undefined2 *)(param_1 + 0x284) = 8;
  *(undefined2 *)(param_1 + 0x286) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/m3/m3-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/m3/m3-pump.wav");
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x1c;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 1001b500  FUN_1001b500  (998 bytes)
 * undefined FUN_1001b500(undefined1 * param_1)
 */
void __cdecl FUN_1001b500(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  param_1[0x360] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ce56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Akimbo Berettas");
  param_1[0x84] = 5;
  param_1[0x85] = 1;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/berettas.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x708;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_berettas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_berettas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_berettas_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_berettas.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"akimbo");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x29a) = 4;
  *(undefined2 *)(param_1 + 0x298) = 5;
  *(undefined2 *)(param_1 + 0x29c) = 6;
  *(undefined2 *)(param_1 + 0x29e) = 7;
  *(undefined2 *)(param_1 + 0x2a0) = 8;
  *(undefined2 *)(param_1 + 0x270) = 0x1a;
  *(undefined2 *)(param_1 + 0x272) = 0x1a;
  *(undefined2 *)(param_1 + 0x274) = 0x1a;
  *(undefined2 *)(param_1 + 0x278) = 0xe;
  *(undefined2 *)(param_1 + 0x2a4) = 0xd;
  *(undefined2 *)(param_1 + 0x2a6) = 0x1c;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2d0) = 0x10;
  *(undefined2 *)(param_1 + 0x2d4) = 0x11;
  *(undefined2 *)(param_1 + 0x2d2) = 0x12;
  *(undefined2 *)(param_1 + 0x2d6) = 0x13;
  *(undefined2 *)(param_1 + 0x2d8) = 0x14;
  *(undefined2 *)(param_1 + 0x2da) = 0x15;
  *(undefined2 *)(param_1 + 0x2aa) = 0xd;
  *(undefined2 *)(param_1 + 0x2ac) = 0xd;
  *(undefined2 *)(param_1 + 0x2ae) = 0xd;
  *(undefined2 *)(param_1 + 0x2b2) = 0xf;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/beretta/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/beretta/fire-sil.wav");
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1001b9e0  FUN_1001b9e0  (778 bytes)
 * undefined FUN_1001b9e0(undefined1 * param_1)
 */
void __cdecl FUN_1001b9e0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1f;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41940000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Raging Bull");
  param_1[0x84] = 2;
  param_1[0x85] = 7;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/bull.spr");
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x834;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_bull.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_bull.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_bull.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 3;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x276) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/bull/fire01.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 1001bdb0  FUN_1001bdb0  (883 bytes)
 * undefined FUN_1001bdb0(undefined1 * param_1)
 */
void __cdecl FUN_1001bdb0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 5;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0x40066666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x41100000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x3c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Desert Eagle");
  param_1[0x84] = 2;
  param_1[0x85] = 3;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/desert.spr");
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x41a;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 2;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_desert.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_desert.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_desert_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_desert.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 6;
  *(undefined2 *)(param_1 + 0x2a6) = 0xb;
  *(undefined2 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 10;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/deagle/fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/deagle/fire-sil.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 1001c200  FUN_1001c200  (779 bytes)
 * undefined FUN_1001c200(undefined1 * param_1)
 */
void __cdecl FUN_1001c200(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0x1e;
  *(undefined2 *)(param_1 + 200) = 0xe;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Five-seveN");
  param_1[0x84] = 2;
  param_1[0x85] = 4;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/fnh.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x4e2;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/56_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_fnh.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_fnh.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_fnh_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_fnh.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/fnh/fnh-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/fnh/fnh-fire-sil.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1001c5d0  FUN_1001c5d0  (854 bytes)
 * undefined FUN_1001c5d0(undefined1 * param_1)
 */
void __cdecl FUN_1001c5d0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xe;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40066666;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Akimbo Five-seveN");
  param_1[0x84] = 5;
  param_1[0x85] = 5;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/fnh_akimbo.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x4e2;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/56_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_fnh_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_fnh_akimbo.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_fnh_akimbo_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_fnh.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"akimbo");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x29a) = 2;
  *(undefined2 *)(param_1 + 0x298) = 3;
  *(undefined2 *)(param_1 + 0x29c) = 2;
  *(undefined2 *)(param_1 + 0x29e) = 3;
  *(undefined2 *)(param_1 + 0x2a0) = 2;
  *(undefined2 *)(param_1 + 0x270) = 4;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 4;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/fnh/fnh-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/fnh/fnh-fire-sil.wav");
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1001ca00  FUN_1001ca00  (794 bytes)
 * undefined FUN_1001ca00(undefined1 * param_1)
 */
void __cdecl FUN_1001ca00(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d5d2f1b;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f2ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3d03126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3be56042;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Glock-18");
  param_1[0x84] = 2;
  param_1[0x85] = 1;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/glock18.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x352;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_glock18.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_glock18.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_glock18_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_glock18.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/glock/glock-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/glock/glock-fire-sil.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 4;
  return;
}

/* 1001cde0  FUN_1001cde0  (779 bytes)
 * undefined FUN_1001cde0(undefined1 * param_1)
 */
void __cdecl FUN_1001cde0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 9;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x16;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d051eb8;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Glock-20C");
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/glock22.spr");
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_glock22.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_glock22.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1aa),(uint *)"models/p_glock22_sil.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_glock22.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"onehanded");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/glock22/glock22-fire.wav");
  FUN_100bba20((uint *)(param_1 + 0x31e),(uint *)"weapons/glock22/glock22-fire-sil.wav");
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1001d1b0  FUN_1001d1b0  (747 bytes)
 * undefined FUN_1001d1b0(undefined1 * param_1)
 */
void __cdecl FUN_1001d1b0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x10;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  param_1[0x360] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x40980000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100bba20((uint *)(param_1 + 0x44),(uint *)"Golden Colts");
  param_1[0x84] = 5;
  param_1[0x85] = 4;
  FUN_100bba20((uint *)(param_1 + 0x86),(uint *)"sprites/weapons/gold.spr");
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0xa28;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_100bba20((uint *)(param_1 + 0xe0),(uint *)"models/9mm_shell.mdl");
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x12a),(uint *)"models/v_gold.mdl");
  FUN_100bba20((uint *)(param_1 + 0x16a),(uint *)"models/p_gold.mdl");
  FUN_100bba20((uint *)(param_1 + 0x1ea),(uint *)"models/w_gold.mdl");
  FUN_100bba20((uint *)(param_1 + 0x22a),(uint *)"akimbo");
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x29a) = 4;
  *(undefined2 *)(param_1 + 0x298) = 3;
  *(undefined2 *)(param_1 + 0x29c) = 4;
  *(undefined2 *)(param_1 + 0x29e) = 5;
  *(undefined2 *)(param_1 + 0x2a0) = 6;
  *(undefined2 *)(param_1 + 0x270) = 7;
  *(undefined2 *)(param_1 + 0x272) = 7;
  *(undefined2 *)(param_1 + 0x274) = 7;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  FUN_100bba20((uint *)(param_1 + 0x2de),(uint *)"weapons/gold/gold-fire.wav");
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 1001d560  FUN_1001d560  (28 bytes)
 * uint FUN_1001d560(int param_1)
 */
uint __cdecl FUN_1001d560(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 1;
}

/* 1001d590  FUN_1001d590  (28 bytes)
 * uint FUN_1001d590(int param_1)
 */
uint __cdecl FUN_1001d590(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 8;
}

/* 1001d5c0  FUN_1001d5c0  (28 bytes)
 * uint FUN_1001d5c0(int param_1)
 */
uint __cdecl FUN_1001d5c0(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 2;
}

/* 1001d5f0  FUN_1001d5f0  (28 bytes)
 * uint FUN_1001d5f0(int param_1)
 */
uint __cdecl FUN_1001d5f0(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 0x10;
}

/* 1001d620  FUN_1001d620  (84 bytes)
 * undefined FUN_1001d620(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined2 param_4, undefined4 param_5)
 */
void __cdecl
FUN_1001d620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  uVar1 = thunk_FUN_10008500(&stack0x00000024);
  uVar2 = thunk_FUN_10008500(&stack0x00000018);
  (*DAT_1028ff6c)(param_2,param_3,CONCAT22(extraout_var,param_4),param_5,uVar2,uVar1);
  return;
}

/* 1001d690  FUN_1001d690  (229 bytes)
 * int FUN_1001d690(int param_1, uint param_2)
 */
int __cdecl FUN_1001d690(int param_1,uint param_2)

{
  int local_8;
  
  local_8 = 0;
  if ((param_2 & 1) != 0) {
    local_8 = (int)*(short *)(&DAT_102a3430 + param_1 * 0x3f4);
  }
  if ((((param_2 & 2) == 0) || ((param_2 & 4) == 0)) ||
     (*(short *)(&DAT_102a3438 + param_1 * 0x3f4) == -1)) {
    if ((param_2 & 2) != 0) {
      local_8 = local_8 + *(short *)(&DAT_102a3432 + param_1 * 0x3f4);
    }
    if ((param_2 & 4) != 0) {
      local_8 = local_8 + *(short *)(&DAT_102a3434 + param_1 * 0x3f4);
    }
  }
  else {
    local_8 = local_8 + *(short *)(&DAT_102a3438 + param_1 * 0x3f4);
  }
  if ((param_2 & 8) != 0) {
    local_8 = local_8 + *(short *)(&DAT_102a3436 + param_1 * 0x3f4);
  }
  return local_8;
}

/* 1001d7b0  FUN_1001d7b0  (49 bytes)
 * undefined * FUN_1001d7b0(int param_1)
 */
undefined * __cdecl FUN_1001d7b0(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < 0) || (0x3f < param_1)) {
    puVar1 = &DAT_102a3310;
  }
  else {
    puVar1 = &DAT_102a3310 + param_1 * 0x3f4;
  }
  return puVar1;
}

/* 1001d7f0  FUN_1001d7f0  (46 bytes)
 * undefined * FUN_1001d7f0(int param_1)
 */
undefined * __cdecl FUN_1001d7f0(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar1 = &DAT_10299308;
  }
  else {
    puVar1 = &DAT_10299308 + param_1 * 0x38;
  }
  return puVar1;
}

/* 1001d830  FUN_1001d830  (191 bytes)
 * undefined FUN_1001d830(void * param_1)
 */
void __fastcall FUN_1001d830(void *param_1)

{
  float10 extraout_ST0;
  void *local_4c;
  void *local_8;
  
  for (local_8 = (void *)0x0; (int)local_8 < 10000; local_8 = (void *)((int)local_8 + 1)) {
    if ((int)local_8 < 1) {
      local_4c = (void *)0x1;
    }
    else {
      local_4c = local_8;
    }
    FUN_100bbfe4(param_1,SUB84((double)((float)(int)local_4c / 10.0),0),
                 (uint)((ulonglong)(double)((float)(int)local_4c / 10.0) >> 0x20));
    *(float *)(&DAT_102996b8 + (int)local_8 * 4) = (float)((float10)1.0 / extraout_ST0);
    if (1.0 < *(float *)(&DAT_102996b8 + (int)local_8 * 4)) {
      *(undefined4 *)(&DAT_102996b8 + (int)local_8 * 4) = 0x3f800000;
    }
    if (*(float *)(&DAT_102996b8 + (int)local_8 * 4) < 0.0) {
      *(undefined4 *)(&DAT_102996b8 + (int)local_8 * 4) = 0;
    }
    param_1 = local_8;
  }
  return;
}

/* 1001d920  FUN_1001d920  (57 bytes)
 * float10 FUN_1001d920(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1001d920(int param_1)

{
  float10 fVar1;
  
  if (param_1 < 0) {
    fVar1 = (float10)_DAT_102996b8;
  }
  else if (param_1 < 10000) {
    fVar1 = (float10)*(float *)(&DAT_102996b8 + param_1 * 4);
  }
  else {
    fVar1 = (float10)_DAT_102a32f4;
  }
  return fVar1;
}

/* 1001d970  FUN_1001d970  (504 bytes)
 * undefined FUN_1001d970(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001d970(int param_1)

{
  if (param_1 == 1) {
    _DAT_1029934c = 0x5a;
    _DAT_1029942c = 0x15;
    _DAT_1029949c = 0x28;
    _DAT_10299384 = 0x30;
    _DAT_1029950c = 0x1e;
    _DAT_102993f4 = 0x3c;
    _DAT_10299464 = 0x3c;
    _DAT_102994d4 = 10;
    _DAT_102993bc = 0x20;
    _DAT_10299544 = 0x22;
    _DAT_102995b4 = 0xf;
  }
  else if (param_1 == 2) {
    _DAT_1029934c = 0x1e;
    _DAT_1029942c = 7;
    _DAT_1029949c = 0x14;
    _DAT_10299384 = 0x10;
    _DAT_1029950c = 0xf;
    _DAT_102993f4 = 0x1e;
    _DAT_10299464 = 0x1e;
    _DAT_102994d4 = 5;
    _DAT_102993bc = 0x10;
    _DAT_10299544 = 0x11;
    _DAT_102995b4 = 5;
  }
  else if (param_1 == 3) {
    _DAT_1029934c = 0;
    _DAT_1029942c = 0;
    _DAT_1029949c = 0;
    _DAT_10299384 = 0;
    _DAT_1029950c = 0;
    _DAT_102993f4 = 0;
    _DAT_10299464 = 0;
    _DAT_102994d4 = 0;
    _DAT_102993bc = 0;
    _DAT_10299544 = 0;
    _DAT_102995b4 = 0;
  }
  else {
    _DAT_1029934c = 0xd2;
    _DAT_1029942c = 0x46;
    _DAT_1029949c = 200;
    _DAT_10299384 = 200;
    _DAT_1029950c = 100;
    _DAT_102993f4 = 0x5a;
    _DAT_10299464 = 0x5a;
    _DAT_102994d4 = 0x14;
    _DAT_102993bc = 0x3c;
    _DAT_10299544 = 0x96;
    _DAT_102995b4 = 0x32;
  }
  return;
}

/* 1001dbf0  FUN_1001dbf0  (1322 bytes)
 * undefined FUN_1001dbf0(void)
 */
void FUN_1001dbf0(void)

{
  _memset(&DAT_10299308,0,0x380);
  DAT_10299340 = 0x3ecccccd;
  DAT_10299344 = 0x32;
  DAT_10299348 = 1;
  DAT_10299350 = 0x1e;
  DAT_10299354 = 0x2000;
  DAT_10299358 = 0x3e4ccccd;
  DAT_1029935c = 0x2d;
  DAT_10299360 = 0x50;
  DAT_10299364 = 0x14a;
  FUN_100bba20((uint *)&DAT_10299368,(uint *)"9 x 19mm");
  DAT_10299420 = 0x3e99999a;
  DAT_10299424 = 0x46;
  DAT_10299428 = 1;
  DAT_10299430 = 10;
  DAT_10299434 = 0x2000;
  DAT_10299438 = 0x3f000000;
  DAT_1029943c = 0x4d;
  DAT_10299440 = 0x5a;
  DAT_10299444 = 0x1e0;
  FUN_100bba20((uint *)&DAT_10299448,(uint *)".50AE");
  DAT_10299490 = 0x3f000000;
  DAT_10299494 = 0x78;
  DAT_10299498 = 1;
  DAT_102994a0 = 0x14;
  DAT_102994a4 = 0x2000;
  DAT_102994a8 = 0x3f800000;
  DAT_102994ac = 0x23;
  DAT_102994b0 = 100;
  DAT_102994b4 = 0x2da;
  FUN_100bba20((uint *)&DAT_102994b8,(uint *)"5.7 x 28");
  DAT_10299378 = 0x3ecccccd;
  DAT_1029937c = 0x3c;
  DAT_10299380 = 1;
  DAT_10299388 = 0xc;
  DAT_1029938c = 0x2000;
  DAT_10299390 = 0x3e4ccccd;
  DAT_10299394 = 0x37;
  DAT_10299398 = 0x5a;
  DAT_1029939c = 0x118;
  FUN_100bba20((uint *)&DAT_102993a0,(uint *)".45Acp");
  DAT_10299500 = 0x3e99999a;
  DAT_10299504 = 0x46;
  DAT_10299508 = 1;
  DAT_10299510 = 0xf;
  DAT_10299514 = 0x2000;
  DAT_10299518 = 0x3f000000;
  DAT_1029951c = 0x3c;
  DAT_10299520 = 0x5a;
  DAT_10299524 = 0x1c2;
  FUN_100bba20((uint *)&DAT_10299528,(uint *)"10mm AUTO");
  DAT_102993e8 = 0x3e99999a;
  DAT_102993ec = 0x50;
  DAT_102993f0 = 2;
  DAT_102993f8 = 0x1e;
  DAT_102993fc = 0x2000;
  DAT_10299400 = 0x3f666666;
  DAT_10299404 = 0x3c;
  DAT_10299408 = 0x96;
  DAT_1029940c = 900;
  FUN_100bba20((uint *)&DAT_10299410,(uint *)"5.56 Nato");
  DAT_10299458 = 0x3e4ccccd;
  DAT_1029945c = 100;
  DAT_10299460 = 2;
  DAT_10299468 = 0x1e;
  DAT_1029946c = 0x2000;
  DAT_10299470 = 0x3f333333;
  DAT_10299474 = 0x46;
  DAT_10299478 = 0xaa;
  DAT_1029947c = 0x316;
  FUN_100bba20((uint *)&DAT_10299480,(uint *)"7.62 x 39mm");
  DAT_102994c8 = 0x3dcccccd;
  DAT_102994cc = 500;
  DAT_102994d0 = 2;
  DAT_102994d8 = 5;
  DAT_102994dc = 0x2000;
  DAT_102994e0 = 0x3f800000;
  DAT_102994e4 = 0x96;
  DAT_102994e8 = 200;
  DAT_102994ec = 1000;
  FUN_100bba20((uint *)&DAT_102994f0,(uint *)"50BMG");
  DAT_102993b0 = 0x3e99999a;
  DAT_102993b4 = 0x78;
  DAT_102993b8 = 2;
  DAT_102993c0 = 8;
  DAT_102993c4 = 0x2000;
  DAT_102993c8 = 0;
  DAT_102993cc = 0x12;
  DAT_102993d0 = 0x5a;
  DAT_102993d4 = 0x15e;
  FUN_100bba20((uint *)&DAT_102993d8,(uint *)"SHELLS");
  DAT_10299538 = 0x3f000000;
  DAT_1029953c = 100;
  DAT_10299540 = 1;
  DAT_10299548 = 0x11;
  DAT_1029954c = 0x2000;
  DAT_10299550 = 0x3d4ccccd;
  DAT_10299554 = 0x17;
  DAT_10299558 = 0x46;
  DAT_1029955c = 0x15e;
  FUN_100bba20((uint *)&DAT_10299560,(uint *)".22 LR");
  DAT_102995a8 = 0x3e99999a;
  DAT_102995ac = 0x96;
  DAT_102995b0 = 1;
  DAT_102995b8 = 5;
  DAT_102995bc = 0x2000;
  DAT_102995c0 = 0x3f400000;
  DAT_102995c4 = 0xa0;
  DAT_102995c8 = 0x14;
  DAT_102995cc = 400;
  FUN_100bba20((uint *)&DAT_102995d0,(uint *)".454 Casull");
  thunk_FUN_1001d970(0);
  return;
}

/* 1001e270  FUN_1001e270  (700 bytes)
 * undefined FUN_1001e270(void)
 */
void FUN_1001e270(void)

{
  void *extraout_ECX;
  
  _memset(&DAT_102a3310,0,0xfd00);
  FUN_100bba20((uint *)&DAT_102a3354,(uint *)"Kung-fu");
  thunk_FUN_1001ca00(&DAT_102a3704);
  thunk_FUN_1002b440(&DAT_102a3eec);
  thunk_FUN_1002b860(&DAT_102a7250);
  thunk_FUN_1001b0f0(&DAT_102a42e0);
  thunk_FUN_10026f00(&DAT_102a46d4);
  thunk_FUN_100290d0(&DAT_102a4ac8);
  thunk_FUN_10028c40(&DAT_102a4ebc);
  thunk_FUN_1001b500(&DAT_102a52b0);
  thunk_FUN_10027e90(&DAT_102a56a4);
  thunk_FUN_100282d0(&DAT_102a5a98);
  thunk_FUN_1002b090(&DAT_102a5e8c);
  thunk_FUN_1001bdb0(&DAT_102a6280);
  thunk_FUN_1001a4b0(&DAT_102a6674);
  thunk_FUN_1001c200(&DAT_102a6a68);
  thunk_FUN_1001a8e0(&DAT_102a6e5c);
  thunk_FUN_1002ac60(&DAT_102a7644);
  thunk_FUN_1001ad00(&DAT_102a7a38);
  thunk_FUN_10029510(&DAT_102a7e2c);
  thunk_FUN_1002a480(&DAT_102a8220);
  thunk_FUN_1001d1b0(&DAT_102a8614);
  thunk_FUN_1001cde0(&DAT_102a8a08);
  thunk_FUN_10027a80(&DAT_102a8dfc);
  thunk_FUN_10027740(&DAT_102a91f0);
  thunk_FUN_10026740(&DAT_102a95e4);
  thunk_FUN_100287b0(&DAT_102a99d8);
  thunk_FUN_10026a90(&DAT_102a9dcc);
  thunk_FUN_10029910(&DAT_102aa1c0);
  thunk_FUN_1001c5d0(&DAT_102aa9a8);
  thunk_FUN_1001b9e0(&DAT_102aad9c);
  thunk_FUN_100273a0(&DAT_102ab190);
  thunk_FUN_10029ce0(&DAT_102ab584);
  thunk_FUN_10026400(&DAT_102ab978);
  thunk_FUN_1002a130(&DAT_102abd6c);
  thunk_FUN_1001dbf0();
  thunk_FUN_1001d830(extraout_ECX);
  return;
}

/* 1001e5e0  FUN_1001e5e0  (44 bytes)
 * int FUN_1001e5e0(int param_1)
 */
int __cdecl FUN_1001e5e0(int param_1)

{
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)(param_1 * 0x3f4) >> 8);
  if ((&DAT_102a3670)[param_1 * 0x3f4] == '\x04') {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

/* 1001e620  FUN_1001e620  (44 bytes)
 * int FUN_1001e620(int param_1)
 */
int __cdecl FUN_1001e620(int param_1)

{
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)(param_1 * 0x3f4) >> 8);
  if ((&DAT_102a3670)[param_1 * 0x3f4] == '\x05') {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

/* 1001e660  FUN_1001e660  (397 bytes)
 * undefined FUN_1001e660(float * param_1, float param_2)
 */
void __thiscall FUN_1001e660(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float local_14;
  float local_c;
  
  if ((param_2 < 0.0 == (param_2 == 0.0)) && (DAT_102e2cbc != 0)) {
    thunk_FUN_1001e850((float *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x20));
    local_c = 2.0;
    uVar3 = thunk_FUN_1001d5f0(*(int *)((int)this + 0x70));
    if (uVar3 != 0) {
      local_c = 1.0;
    }
    fVar1 = *DAT_102906d4;
    fVar2 = fVar1 - *(float *)((int)this + 0xd94);
    if (0.0 <= fVar2) {
      *param_1 = *param_1 + *(float *)(*(int *)((int)this + 0x70) + 0x6f4);
      fVar4 = thunk_FUN_100261b0(*(int *)((int)this + 0x70));
      local_14 = (float)((float10)fVar2 / fVar4);
      if (1.0 <= local_14) {
        *(undefined4 *)((int)this + 0xd98) = 0;
        local_14 = 0.5;
      }
      if (local_14 < 1.0) {
        if (0.1 <= (1.0 - local_14) * param_2 * local_c +
                   *(float *)(*(int *)((int)this + 0x70) + 0x6f4)) {
          fVar2 = 0.1;
        }
        else {
          fVar2 = (1.0 - local_14) * param_2 * local_c +
                  *(float *)(*(int *)((int)this + 0x70) + 0x6f4);
        }
        *(float *)(*(int *)((int)this + 0x70) + 0x6f4) = fVar2;
      }
      *(float *)((int)this + 0xd94) = fVar1;
    }
    else {
      *(float *)((int)this + 0xd94) = fVar1;
      *(undefined4 *)((int)this + 0xd98) = 0;
    }
  }
  return;
}

/* 1001e850  FUN_1001e850  (74 bytes)
 * undefined FUN_1001e850(float * param_1)
 */
void __fastcall FUN_1001e850(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  FUN_100bbfe4(param_1,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 1001e8b0  FUN_1001e8b0  (30 bytes)
 * undefined FUN_1001e8b0(void)
 */
void FUN_1001e8b0(void)

{
  return;
}

/* 1001e8e0  FUN_1001e8e0  (351 bytes)
 * undefined FUN_1001e8e0(float param_1, int param_2, char param_3)
 */
void __thiscall FUN_1001e8e0(void *this,float param_1,int param_2,char param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_64;
  undefined4 uStack_60;
  float local_14;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x70) + 0x748);
  if (param_3 == '\0') {
    local_64 = 0;
    uStack_60 = 0x3ff00000;
  }
  else {
    local_64 = 0x9999999a;
    uStack_60 = 0x3fe99999;
  }
  fVar3 = thunk_FUN_1003fcb0(iVar2,-0.5,0.5);
  local_14 = (float)(fVar3 * (float10)(float)(double)CONCAT44(uStack_60,local_64));
  fVar3 = thunk_FUN_1003fcb0(iVar2 + 1,param_1 / 2.0,param_1);
  fVar4 = thunk_FUN_1003fcb0(iVar2 + 2,0.0,0.75);
  if (0.0 <= local_14) {
    local_14 = local_14 + 0.5;
  }
  else {
    local_14 = local_14 - 0.5;
  }
  if (((param_2 == 6) || (param_2 == 1)) || (param_2 == 7)) {
    local_14 = local_14 - (float)fVar4;
  }
  else if (param_2 == 8) {
    local_14 = local_14 + (float)fVar4;
  }
  if ((param_1 < 0.0 == (param_1 == 0.0)) && (DAT_102e2cbc != 0)) {
    pfVar1 = (float *)thunk_FUN_10008500(&DAT_1032183c);
    *pfVar1 = *pfVar1 - (float)(fVar3 * (float10)(float)(double)CONCAT44(uStack_60,local_64));
    iVar2 = thunk_FUN_10008500(&DAT_1032183c);
    *(float *)(iVar2 + 4) = local_14 * param_1 * 0.65 + *(float *)(iVar2 + 4);
  }
  return;
}

/* 1001eaa0  FUN_1001eaa0  (28 bytes)
 * undefined FUN_1001eaa0(undefined4 * param_1)
 */
void __cdecl FUN_1001eaa0(undefined4 *param_1)

{
  thunk_FUN_10025d50(param_1);
  return;
}

/* 1001ead0  FUN_1001ead0  (172 bytes)
 * undefined FUN_1001ead0(int * param_1)
 */
void __fastcall FUN_1001ead0(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  thunk_FUN_1001ebb0((int)param_1);
  *(char **)param_1[1] = "@weapon_tsgun" + (1 - *(int *)(DAT_102906d4 + 0x98));
  (**(code **)(*param_1 + 0x10))();
  pcVar2 = "models/w_glock18.mdl";
  uVar1 = thunk_FUN_10019bc0();
  (*DAT_1028fd88)(uVar1,pcVar2);
  param_1[0x1e] = 0x10;
  param_1[0x29] = 1;
  param_1[0x2d] = 1;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  thunk_FUN_10016070();
  return;
}

/* 1001ebb0  FUN_1001ebb0  (165 bytes)
 * undefined FUN_1001ebb0(int param_1)
 */
void __fastcall FUN_1001ebb0(int param_1)

{
  _memset((void *)(param_1 + 0x104),0,0xc00);
  _memset((void *)(param_1 + 0xc4),0,0x40);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd16) = 0;
  _memset((void *)(param_1 + 0xd18),0,0x30);
  *(undefined4 *)(param_1 + 0xd48) = 0;
  _memset((void *)(param_1 + 0xd4c),0,0x40);
  return;
}

/* 1001ec80  FUN_1001ec80  (253 bytes)
 * undefined FUN_1001ec80(int param_1)
 * called by: thunk_FUN_1001ec80
 */
void __fastcall FUN_1001ec80(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (*DAT_1028ff68)(1,"events/fire.sc");
  *(undefined2 *)(param_1 + 0xd04) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/coldcock.sc");
  *(undefined2 *)(param_1 + 0xd06) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/firelinked.sc");
  *(undefined2 *)(param_1 + 0xd0e) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/empty.sc");
  *(undefined2 *)(param_1 + 0xd08) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/pump.sc");
  *(undefined2 *)(param_1 + 0xd0a) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/closecombat.sc");
  *(undefined2 *)(param_1 + 0xd0c) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/reload.sc");
  *(undefined2 *)(param_1 + 0xd10) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/knife.sc");
  *(undefined2 *)(param_1 + 0xd12) = uVar1;
  uVar1 = (*DAT_1028ff68)(1,"events/katana.sc");
  *(undefined2 *)(param_1 + 0xd14) = uVar1;
  return;
}

/* 1001edc0  FUN_1001edc0  (421 bytes)
 * undefined4 FUN_1001edc0(uint param_1)
 */
undefined4 __thiscall FUN_1001edc0(void *this,uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xd8) & param_1) == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xdc) & param_1) == 0) {
    if ((*(uint *)(*(int *)((int)this + 0xbc) + 0x10) & param_1) == 0) {
      *(uint *)(*(int *)((int)this + 0xbc) + 0x10) =
           *(uint *)(*(int *)((int)this + 0xbc) + 0x10) | param_1;
      uVar3 = thunk_FUN_1001e5e0((uint)*(byte *)((int)this + 0xb8));
      if ((uVar3 & 0xff) == 0) {
        if ((*(short *)(*(int *)((int)this + 0xc0) + 0xc6) != -1) &&
           (*(char *)((int)this + *(short *)(*(int *)((int)this + 0xc0) + 0xc6) * 0x30 + 0x104) !=
            '\0')) {
          *(uint *)((int)this + *(short *)(*(int *)((int)this + 0xc0) + 0xc6) * 0x30 + 0x114) =
               *(uint *)((int)this + *(short *)(*(int *)((int)this + 0xc0) + 0xc6) * 0x30 + 0x114) |
               param_1;
        }
      }
      else {
        *(uint *)((int)this + *(short *)(*(int *)((int)this + 0xc0) + 200) * 0x30 + 0x114) =
             *(uint *)((int)this + *(short *)(*(int *)((int)this + 0xc0) + 200) * 0x30 + 0x114) |
             param_1;
      }
      bVar1 = *(byte *)((int)this + 0xb8);
      *(undefined1 *)((int)this + 0xb8) = 0;
      iVar4 = thunk_FUN_1001fa30(this,(uint)bVar1);
      if (iVar4 != 0) {
        (**(code **)(*(int *)this + 0x104))();
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 1001efd0  FUN_1001efd0  (186 bytes)
 * undefined4 FUN_1001efd0(byte.conflict param_1, int param_2)
 */
undefined4 __thiscall FUN_1001efd0(void *this,byte_conflict param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x10) && (0 < param_2)) {
    if (*(int *)((int)this + (uint)param_1 * 4 + 0xc4) <
        *(int *)(&DAT_10299314 + (uint)param_1 * 0x38)) {
      *(int *)((int)this + (uint)param_1 * 4 + 0xc4) =
           *(int *)((int)this + (uint)param_1 * 4 + 0xc4) + param_2;
      if (*(int *)(&DAT_10299314 + (uint)param_1 * 0x38) <
          *(int *)((int)this + (uint)param_1 * 4 + 0xc4)) {
        *(undefined4 *)((int)this + (uint)param_1 * 4 + 0xc4) =
             *(undefined4 *)(&DAT_10299314 + (uint)param_1 * 0x38);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 1001f0c0  FUN_1001f0c0  (186 bytes)
 * undefined4 FUN_1001f0c0(uint param_1, char param_2)
 */
undefined4 __thiscall FUN_1001f0c0(void *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((int)param_1 < 1) || (0x3f < (int)param_1)) {
    uVar1 = 0;
  }
  else if (*(char *)((int)this + param_1 * 0x30 + 0x104) == '\0') {
    uVar1 = 0;
  }
  else {
    _memset((void *)((int)this + param_1 * 0x30 + 0x104),0,0x30);
    if ((*(int *)((int)this + 0x70) != 0) &&
       (iVar2 = (**(code **)(**(int **)((int)this + 0x70) + 0x94))(), iVar2 == 0)) {
      return 0;
    }
    if (param_1 == *(byte *)((int)this + 0xb8)) {
      if (param_2 == '\0') {
        thunk_FUN_10024230((int)this);
      }
      else {
        thunk_FUN_1001f900(this,param_1);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 1001f1b0  FUN_1001f1b0  (1496 bytes)
 * undefined4 FUN_1001f1b0(int param_1, undefined4 * param_2, uint param_3)
 */
undefined4 __thiscall FUN_1001f1b0(void *this,int param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short local_a;
  
  if ((param_1 < 0) || (0x3f < param_1)) {
    uVar2 = 0;
  }
  else if ((&DAT_102a3310)[param_1 * 0x3f4] == '\0') {
    uVar2 = 0;
  }
  else {
    local_a = (short)param_1;
    if (*(char *)((int)this + param_1 * 0x30 + 0x104) == '\0') {
      if (*(short *)(&DAT_102a33d6 + param_1 * 0x3f4) != -1) {
        if ((&DAT_102a3310)[*(short *)(&DAT_102a33d6 + param_1 * 0x3f4) * 0x3f4] == '\0') {
          return 0;
        }
        if (*(char *)((int)this + *(short *)(&DAT_102a33d6 + param_1 * 0x3f4) * 0x30 + 0x104) !=
            '\0') {
          return 0;
        }
      }
    }
    else if ((&DAT_102a33e4)[param_1 * 0x3f4] == '\0') {
      if (*(short *)(&DAT_102a33d6 + param_1 * 0x3f4) == -1) {
        return 0;
      }
      if ((&DAT_102a3310)[*(short *)(&DAT_102a33d6 + param_1 * 0x3f4) * 0x3f4] == '\0') {
        return 0;
      }
      if (*(char *)((int)this + *(short *)(&DAT_102a33d6 + param_1 * 0x3f4) * 0x30 + 0x104) != '\0')
      {
        return 0;
      }
      local_a = *(short *)(&DAT_102a33d6 + param_1 * 0x3f4);
    }
    else if (*(int *)(&DAT_102a3334 + param_1 * 0x3f4) <=
             *(int *)((int)this + param_1 * 0x30 + 0x108)) {
      return 0;
    }
    pcVar1 = (char *)((int)this + local_a * 0x30 + 0x104);
    iVar3 = local_a * 0x3f4;
    if (((&DAT_102a33e4)[iVar3] == '\0') || (*pcVar1 == '\0')) {
      if (param_2 == (undefined4 *)0x0) {
        *pcVar1 = '\x01';
        pcVar1[1] = (&DAT_102a3318)[iVar3];
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        if ((*(uint *)(&DAT_102a331c + iVar3) & 1) == 0) {
          if ((*(uint *)(&DAT_102a331c + iVar3) & 8) == 0) {
            if ((*(uint *)(&DAT_102a331c + iVar3) & 2) == 0) {
              pcVar1[2] = '\x02';
            }
            else {
              pcVar1[2] = '\x01';
            }
          }
          else {
            pcVar1[2] = '\x03';
          }
        }
        else {
          pcVar1[2] = '\0';
        }
        uVar4 = thunk_FUN_1001e5e0((int)local_a);
        if ((uVar4 & 0xff) == 0) {
          uVar4 = thunk_FUN_1001e620((int)local_a);
          if ((uVar4 & 0xff) == 0) {
            *(undefined4 *)(pcVar1 + 4) = *(undefined4 *)(&DAT_102a3314 + iVar3);
            *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_102a33ec + iVar3) | param_3;
            pcVar1[0x14] = '\0';
            pcVar1[0x15] = '\0';
            pcVar1[0x16] = '\0';
            pcVar1[0x17] = '\0';
          }
          else {
            *(int *)(pcVar1 + 0x1c) = *(int *)(&DAT_102a3314 + iVar3) / 2;
            *(int *)(pcVar1 + 0x20) = *(int *)(&DAT_102a3314 + iVar3) / 2;
            *(undefined4 *)(pcVar1 + 4) = *(undefined4 *)(&DAT_102a3314 + iVar3);
            *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_102a33ec + iVar3) | param_3;
            pcVar1[0x14] = '\0';
            pcVar1[0x15] = '\0';
            pcVar1[0x16] = '\0';
            pcVar1[0x17] = '\0';
          }
        }
        else {
          *(undefined4 *)(pcVar1 + 0x1c) =
               *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x108);
          *(undefined4 *)(pcVar1 + 0x20) =
               *(undefined4 *)(&DAT_102a3314 + *(short *)(&DAT_102a33d8 + iVar3) * 0x3f4);
          *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 0x1c) + *(int *)(pcVar1 + 0x20);
          *(uint *)(pcVar1 + 0x10) =
               *(uint *)(pcVar1 + 0x10) |
               *(uint *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x114) | param_3;
          *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x114) =
               *(undefined4 *)(pcVar1 + 0x10);
          *(uint *)(pcVar1 + 0x14) =
               *(uint *)(pcVar1 + 0x14) |
               *(uint *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x118);
          *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x118) =
               *(undefined4 *)(pcVar1 + 0x14);
        }
        pcVar1[0x18] = '\0';
        pcVar1[0x19] = '\0';
        pcVar1[0x1a] = '\0';
        pcVar1[0x1b] = '\0';
        pcVar1[0x24] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        *(int *)(pcVar1 + 0x28) = iVar3 + 0x102a357a;
        *(uint *)(pcVar1 + 0x10) = *(uint *)(pcVar1 + 0x10) & *(uint *)(&DAT_102a33e8 + iVar3);
        if ((*(uint *)(pcVar1 + 0x10) & 2) != 0) {
          *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 2;
        }
        if ((*(uint *)(pcVar1 + 0x10) & 4) != 0) {
          *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 4;
        }
        uVar2 = 1;
      }
      else {
        FUN_100bc090((undefined4 *)pcVar1,param_2,0x30);
        *pcVar1 = '\x01';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        uVar4 = thunk_FUN_1001e5e0((int)local_a);
        if ((uVar4 & 0xff) != 0) {
          *(int *)(pcVar1 + 4) =
               *(int *)(pcVar1 + 4) +
               *(int *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x108);
          *(undefined4 *)(pcVar1 + 0x1c) =
               *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x108);
          *(int *)(pcVar1 + 0x20) = *(int *)(pcVar1 + 4) - *(int *)(pcVar1 + 0x1c);
          *(uint *)(pcVar1 + 0x10) =
               *(uint *)(pcVar1 + 0x10) |
               *(uint *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x114) | param_3;
          *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x114) =
               *(undefined4 *)(pcVar1 + 0x10);
          *(uint *)(pcVar1 + 0x14) =
               *(uint *)(pcVar1 + 0x14) |
               *(uint *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x118);
          *(undefined4 *)((int)this + *(short *)(&DAT_102a33d8 + iVar3) * 0x30 + 0x118) =
               *(undefined4 *)(pcVar1 + 0x14);
          if ((*(uint *)(&DAT_102a331c + iVar3) & 1) == 0) {
            if ((*(uint *)(&DAT_102a331c + iVar3) & 8) == 0) {
              if ((*(uint *)(&DAT_102a331c + iVar3) & 2) == 0) {
                pcVar1[2] = '\x02';
              }
              else {
                pcVar1[2] = '\x01';
              }
            }
            else {
              pcVar1[2] = '\x03';
            }
          }
          else {
            pcVar1[2] = '\0';
          }
        }
        *(uint *)(pcVar1 + 0x10) = *(uint *)(pcVar1 + 0x10) & *(uint *)(&DAT_102a33e8 + iVar3);
        uVar2 = 1;
      }
    }
    else {
      *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* 1001f900  FUN_1001f900  (242 bytes)
 * undefined FUN_1001f900(uint param_1)
 */
void __thiscall FUN_1001f900(void *this,uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  for (local_14 = 1; (int)local_14 < 0x40; local_14 = local_14 + 1) {
    if ((*(char *)((int)this + local_14 * 0x30 + 0x104) != '\0') && (param_1 != local_14)) {
      puVar1 = thunk_FUN_1001d7b0(local_14);
      uVar2 = thunk_FUN_1001e5e0(local_14);
      iVar3 = *(int *)(puVar1 + 0xd0) * (((uVar2 & 0xff) != 0) + 1);
      if (iVar3 - local_10 != 0 && local_10 <= iVar3) {
        local_c = local_14;
        puVar1 = thunk_FUN_1001d7b0(local_14);
        uVar2 = thunk_FUN_1001e5e0(local_14);
        local_10 = *(int *)(puVar1 + 0xd0) * (((uVar2 & 0xff) != 0) + 1);
      }
    }
  }
  iVar3 = thunk_FUN_1001fa30(this,local_c);
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 0x104))();
  }
  return;
}

/* 1001fa30  FUN_1001fa30  (135 bytes)
 * undefined4 FUN_1001fa30(uint param_1)
 */
undefined4 __thiscall FUN_1001fa30(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == *(byte *)((int)this + 0xb8)) {
    uVar1 = 0;
  }
  else if (((int)param_1 < 0) || (0x3f < (int)param_1)) {
    uVar1 = 0;
  }
  else if (((*(char *)((int)this + param_1 * 0x30 + 0x104) == '\0') ||
           ((&DAT_102a3310)[param_1 * 0x3f4] == '\0')) && (param_1 != 0)) {
    uVar1 = 0;
  }
  else {
    thunk_FUN_10024230((int)this);
    *(undefined1 *)((int)this + 0xb8) = (undefined1)param_1;
    uVar1 = 1;
  }
  return uVar1;
}

/* 1001fae0  FUN_1001fae0  (533 bytes)
 * undefined4 FUN_1001fae0(void * param_1)
 * called by: thunk_FUN_1001fae0
 */
undefined4 __fastcall FUN_1001fae0(void *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0xb8) == '\0') {
    thunk_FUN_10024230((int)param_1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0xd8c) = 0;
    *(uint *)((int)param_1 + 0xbc) =
         (int)param_1 + (uint)*(byte *)((int)param_1 + 0xb8) * 0x30 + 0x104;
    *(undefined **)((int)param_1 + 0xc0) =
         &DAT_102a3310 + (uint)*(byte *)((int)param_1 + 0xb8) * 0x3f4;
    *(int *)(*(int *)((int)param_1 + 0xbc) + 0x28) = *(int *)((int)param_1 + 0xc0) + 0x26a;
    iVar1 = thunk_FUN_1001d690((uint)*(byte *)((int)param_1 + 0xb8),
                               *(uint *)(*(int *)((int)param_1 + 0xbc) + 0x10));
    *(int *)(*(int *)((int)param_1 + 0xbc) + 0x18) = iVar1;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) =
         *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x18);
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 8) = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x2c) = 0;
    thunk_FUN_10017330(param_1,*(int *)((int)param_1 + 0xc0) + 0x12a);
    if (*(char *)(*(int *)((int)param_1 + 0x70) + 0x41e + (uint)*(byte *)((int)param_1 + 0xb8)) <
        '\x01') {
      *(char *)(*(int *)((int)param_1 + 0x70) + 0x41e + (uint)*(byte *)((int)param_1 + 0xb8)) =
           *(char *)(*(int *)((int)param_1 + 0xbc) + 2) + '\x01';
    }
    else {
      *(char *)(*(int *)((int)param_1 + 0xbc) + 2) =
           *(char *)(*(int *)((int)param_1 + 0x70) + 0x41e + (uint)*(byte *)((int)param_1 + 0xb8)) +
           -1;
    }
  }
  return 1;
}

/* 1001fd80  FUN_1001fd80  (126 bytes)
 * uint FUN_1001fd80(int param_1)
 */
uint __fastcall FUN_1001fd80(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xbc) + 0x14);
    uVar2 = thunk_FUN_1001e5e0((uint)*(byte *)(param_1 + 0xb8));
    if (((uVar2 & 0xff) != 0) ||
       (uVar2 = thunk_FUN_1001e620((uint)*(byte *)(param_1 + 0xb8)), (uVar2 & 0xff) != 0)) {
      uVar1 = uVar1 | 0x40;
    }
  }
  return uVar1;
}

/* 1001fe20  FUN_1001fe20  (564 bytes)
 * undefined FUN_1001fe20(int param_1)
 */
void __fastcall FUN_1001fe20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (((*(uint *)(*(int *)(param_1 + 0xbc) + 0x10) & 2) == 0) ||
       ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x10) & 4) == 0)) {
      if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x10) & 2) == 0) {
        if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x10) & 4) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x14) = 0;
          return;
        }
        if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 4) == 0) {
          *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) =
               *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) | 4;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x14) = 0;
        }
      }
      else if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 2) == 0) {
        *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) = *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) | 2;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x14) = 0;
      }
    }
    else if (((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 2) == 0) ||
            ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 4) == 0)) {
      if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 2) == 0) {
        if ((*(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 4) == 0) {
          *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) =
               *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) | 2;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) =
               *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) | 2;
        }
      }
      else {
        *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) = *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) | 4;
        *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) =
             *(uint *)(*(int *)(param_1 + 0xbc) + 0x14) & 0xfffffffd;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x14) = 0;
    }
    iVar1 = (*DAT_1028fee8)(0,3);
    (*DAT_1028feec)(0x3f6b851f,0x3f800000,0x3fa00000,0,iVar1 + 0x62);
    thunk_FUN_10019bc0();
    thunk_FUN_10014910();
  }
  return;
}

/* 100200f0  FUN_100200f0  (181 bytes)
 * undefined FUN_100200f0(int param_1)
 */
void __fastcall FUN_100200f0(int param_1)

{
  bool bVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    local_c = *(byte *)(*(int *)(param_1 + 0xbc) + 2) + 1;
    bVar1 = false;
    while (!bVar1) {
      if ((*(uint *)(*(int *)(param_1 + 0xc0) + 0xc) & 1 << ((byte)local_c & 0x1f)) != 0) {
        *(byte *)(*(int *)(param_1 + 0xbc) + 2) = (byte)local_c;
        bVar1 = true;
      }
      local_c = local_c + 1;
      if (5 < local_c) {
        local_c = 0;
      }
    }
    *(char *)(*(int *)(param_1 + 0x70) + 0x41e + (uint)*(byte *)(param_1 + 0xb8)) =
         *(char *)(*(int *)(param_1 + 0xbc) + 2) + '\x01';
  }
  return;
}

/* 100201e0  FUN_100201e0  (323 bytes)
 * undefined FUN_100201e0(int * param_1)
 * called by: thunk_FUN_100201e0
 */
void __fastcall FUN_100201e0(int *param_1)

{
  uint uVar1;
  float10 fVar2;
  
  if (param_1[0x2f] == 0) {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) {
      thunk_FUN_10024890((int)param_1);
    }
  }
  else if (*(char *)(param_1[0x30] + 0x360) == '\x02') {
    *(undefined1 *)(param_1[0x2f] + 0x24) = 1;
    thunk_FUN_10022c10((int)param_1);
  }
  else if (*(char *)(param_1[0x30] + 0x360) == '\x03') {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) {
      *(undefined1 *)(param_1[0x2f] + 0x24) = 1;
      thunk_FUN_100231c0(param_1);
    }
  }
  else if (*(char *)(param_1[0x2f] + 2) == '\x04') {
    if (((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) ||
       (uVar1 = thunk_FUN_1001d5f0(param_1[0x1c]), uVar1 != 0)) {
      thunk_FUN_10020750(param_1);
    }
  }
  else if (*(char *)(param_1[0x2f] + 2) == '\x05') {
    thunk_FUN_10020750(param_1);
  }
  else {
    fVar2 = thunk_FUN_1003fb80();
    param_1[0x24] = (int)(float)(fVar2 + (float10)0.3);
    fVar2 = thunk_FUN_1003fb80();
    param_1[0x26] = (int)(float)(fVar2 + (float10)1.0);
  }
  return;
}

/* 10020380  FUN_10020380  (488 bytes)
 * undefined FUN_10020380(int * param_1)
 * called by: thunk_FUN_10020380
 */
void __fastcall FUN_10020380(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x2f] == 0) {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 1) != 0) {
      thunk_FUN_10024890((int)param_1);
    }
  }
  else if (*(char *)(param_1[0x30] + 0x360) == '\x02') {
    *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
    thunk_FUN_10022c10((int)param_1);
  }
  else if (*(char *)(param_1[0x30] + 0x360) == '\x03') {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 1) != 0) {
      *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
      thunk_FUN_100231c0(param_1);
    }
  }
  else if (*(char *)(param_1[0x30] + 0x360) == '\n') {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 1) != 0) {
      thunk_FUN_10022cc0((int)param_1);
    }
  }
  else if ((*(char *)(param_1[0x2f] + 2) == '\x01') || (*(char *)(param_1[0x2f] + 2) == '\x04')) {
    if (((*(uint *)(param_1[0x1c] + 0x770) & 1) != 0) ||
       (uVar1 = thunk_FUN_1001d5f0(param_1[0x1c]), uVar1 != 0)) {
      thunk_FUN_10020750(param_1);
    }
  }
  else if ((*(char *)(param_1[0x2f] + 2) == '\0') || (*(char *)(param_1[0x2f] + 2) == '\x05')) {
    thunk_FUN_10020750(param_1);
  }
  else if (*(char *)(param_1[0x2f] + 2) == '\x02') {
    if (((*(uint *)(param_1[0x1c] + 0x770) & 1) != 0) && (*(int *)(param_1[0x2f] + 8) == 0)) {
      *(undefined4 *)(param_1[0x2f] + 8) = 3;
    }
  }
  else if ((*(char *)(param_1[0x2f] + 2) == '\x03') &&
          ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0)) {
    thunk_FUN_10020750(param_1);
  }
  return;
}

/* 100205f0  FUN_100205f0  (59 bytes)
 * undefined FUN_100205f0(int * param_1)
 * called by: thunk_FUN_100205f0
 */
void __fastcall FUN_100205f0(int *param_1)

{
  if ((param_1[0x2f] != 0) && (*(char *)(param_1[0x30] + 0x10) != '\0')) {
    thunk_FUN_10020900(param_1);
  }
  return;
}

/* 10020640  FUN_10020640  (178 bytes)
 * undefined FUN_10020640(int param_1)
 */
void __fastcall FUN_10020640(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_90 = 0x10020667;
  thunk_FUN_10015740(auStack_88,&DAT_1028ffec);
  thunk_FUN_10015740(auStack_94,&DAT_1028ffec);
  uVar5 = 0;
  uVar4 = *(undefined2 *)(param_1 + 0xd08);
  uVar1 = thunk_FUN_10020720();
  thunk_FUN_1001d620(*(undefined4 *)(param_1 + 0x70),1,uVar1,uVar4,uVar5);
  uStack_68 = 0x100206a5;
  fVar2 = thunk_FUN_1003fb80();
  uStack_68 = 0x100206b3;
  fVar3 = thunk_FUN_100261b0(*(int *)(param_1 + 0x70));
  *(float *)(param_1 + 0x90) = (float)(fVar3 * (float10)0.1 + (float10)(double)fVar2);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
  uStack_68 = 0x100206dc;
  fVar2 = thunk_FUN_1003fb80();
  *(float *)(param_1 + 0x98) = (float)(fVar2 + (float10)0.5);
  return;
}

/* 10020720  FUN_10020720  (34 bytes)
 * undefined FUN_10020720(void)
 */
void FUN_10020720(void)

{
  thunk_FUN_10019bc0();
  return;
}

/* 10020750  FUN_10020750  (337 bytes)
 * undefined FUN_10020750(void * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020750(void *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)param_1 + 0xbc) != 0) {
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x1c0) == 3) {
      thunk_FUN_10020640((int)param_1);
    }
    else if ((*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1) &&
            (((*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) == '\0' ||
              (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) != '\x03')) ||
             (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) != '\x01')))) {
      thunk_FUN_10020640((int)param_1);
    }
    else {
      _DAT_10299268 = -1;
      thunk_FUN_10097d70(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x74);
      if ((*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) == '\x04') ||
         (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) == '\x05')) {
        uVar1 = thunk_FUN_10021c40(param_1);
        if ((uVar1 & 0xff) != 0) {
          _DAT_10299268 = (*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') + 8;
        }
      }
      else if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) == '\x01') {
        thunk_FUN_10020cc0(param_1);
        _DAT_10299268 = 0;
      }
      else {
        thunk_FUN_100213a0(param_1);
        _DAT_10299268 = 0;
      }
    }
  }
  return;
}

/* 10020900  FUN_10020900  (684 bytes)
 * undefined FUN_10020900(int * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020900(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((DAT_102996a8 & 1) == 0) {
    DAT_102996a8 = DAT_102996a8 | 1;
    thunk_FUN_10007fe0(&DAT_102a32f8);
    uStack_74 = 0x1002093c;
    FUN_100bc490(0x10020ca0);
  }
  if ((DAT_102996a8 & 2) == 0) {
    DAT_102996a8 = DAT_102996a8 | 2;
    thunk_FUN_10007fe0(&DAT_102992cc);
    uStack_74 = 0x1002096f;
    FUN_100bc490(0x10020c80);
  }
  if ((DAT_102996a8 & 4) == 0) {
    DAT_102996a8 = DAT_102996a8 | 4;
    thunk_FUN_10007fe0(&DAT_102992d8);
    uStack_74 = 0x100209a2;
    FUN_100bc490(0x10020c60);
  }
  if (param_1[0x2f] != 0) {
    _DAT_10299230 = 0xffffffff;
    uStack_74 = 0x100209d9;
    thunk_FUN_10097d70(*(int *)(param_1[0x1c] + 4) + 0x74);
    if ((param_1[0x2f] != 0) && (param_1[0x30] != 0)) {
      if (*(char *)(param_1[0x30] + 0x360) == '\x02') {
        uStack_74 = 0x10020a14;
        thunk_FUN_10023d90(param_1,1);
      }
      *(undefined4 *)(param_1[0x2f] + 0xc) = 0;
      *(undefined4 *)(param_1[0x2f] + 8) = 0;
    }
    _DAT_10299694 = 0.725;
    uStack_74 = 0x10020a4a;
    uVar1 = thunk_FUN_1001d590(param_1[0x1c]);
    if (uVar1 == 0) {
      fVar4 = thunk_FUN_100261b0(param_1[0x1c]);
      _DAT_10299694 = (float)(fVar4 * (float10)_DAT_10299694);
    }
    else {
      _DAT_10299694 = _DAT_10299694 / 0.15;
    }
    fVar4 = thunk_FUN_1003fb80();
    param_1[0x25] = (int)(float)(fVar4 + (float10)_DAT_10299694);
    param_1[0x24] = param_1[0x25];
    param_1[0x23] = param_1[0x24];
    fVar4 = thunk_FUN_1003fb80();
    param_1[0x26] = (int)(float)(fVar4 + (float10)2.0);
    uStack_74 = 0x10020ae0;
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0x1c] + 0x144))();
    _DAT_102a32f8 = *puVar2;
    _DAT_102a32fc = puVar2[1];
    _DAT_102a3300 = puVar2[2];
    _DAT_102992cc = *(undefined4 *)(DAT_102906d4 + 0x28);
    _DAT_102992d0 = *(undefined4 *)(DAT_102906d4 + 0x2c);
    _DAT_102992d4 = *(undefined4 *)(DAT_102906d4 + 0x30);
    uStack_74 = *(undefined4 *)(param_1[1] + 0x114);
    uStack_78 = 0;
    iStack_7c = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x38);
    uStack_80 = 0x10020b48;
    (**(code **)(*param_1 + 0x150))();
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = DAT_102992dc;
    uStack_94 = DAT_102992d8;
    uStack_a8 = 0x10020b6c;
    thunk_FUN_10015740(auStack_a0,&DAT_1028ffec);
    thunk_FUN_10015740(auStack_ac,&DAT_1028ffec);
    uVar6 = 0;
    uVar5 = *(undefined2 *)((int)param_1 + 0xd06);
    uVar3 = thunk_FUN_10020720();
    thunk_FUN_1001d620(param_1[0x1c],1,uVar3,uVar5,uVar6);
  }
  return;
}

/* 10020c60  FUN_10020c60  (16 bytes)
 * undefined FUN_10020c60(void)
 */
void FUN_10020c60(void)

{
  return;
}

/* 10020c80  FUN_10020c80  (16 bytes)
 * undefined FUN_10020c80(void)
 */
void FUN_10020c80(void)

{
  return;
}

