/* client.dll - unnamed_1001a710 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001a710  FUN_1001a710  (147 bytes)
 * undefined FUN_1001a710(int param_1, int param_2, int param_3)
 * called by: FUN_1001a070, FUN_1001a0b0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001a710(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_1 != 1) || (param_3 != 0)) {
    if ((DAT_100d590c + -100 <
         (DAT_100cf910 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100cf910 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    piVar1 = (int *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    (*gEngfuncs.pfnGetCvarFloat)(s_hud_drawhistory_time_1009307c);
    lVar2 = __ftol();
    _DAT_10093144 = (int)lVar2;
    *piVar1 = param_1;
    piVar1[3] = param_2;
    piVar1[2] = param_3;
    piVar1[1] = (int)((float)_DAT_10093144 + DAT_100cf944);
  }
  return;
}

/* 1001a7b0  FUN_1001a7b0  (163 bytes)
 * undefined FUN_1001a7b0(int param_1, char * param_2, undefined4 param_3)
 * called by: FUN_1001a0e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001a7b0(void *this,int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 3) {
    if ((DAT_100d590c + -100 <
         (DAT_100cf910 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100cf910 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    puVar2 = (undefined4 *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    iVar1 = FUN_10020670(&DAT_100cf920,param_2);
    if (iVar1 != -1) {
      puVar2[3] = iVar1;
      *puVar2 = 3;
      puVar2[2] = param_3;
      (*gEngfuncs.pfnGetCvarFloat)(s_hud_drawhistory_time_1009307c);
      lVar3 = __ftol();
      _DAT_10093144 = (int)lVar3;
      puVar2[1] = (float)_DAT_10093144 + DAT_100cf944;
    }
  }
  return;
}

/* 1001a860  FUN_1001a860  (26 bytes)
 * undefined FUN_1001a860()
 */
void FUN_1001a860(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a920(&DAT_100cfadc,param_1,param_2,param_3);
  return;
}

/* 1001a880  FUN_1001a880  (51 bytes)
 * undefined4 FUN_1001a880(int param_1)
 */
undefined4 __fastcall FUN_1001a880(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*gEngfuncs.pfnHookUserMsg)(s_Battery_10093148,FUN_1001a860);
  FUN_10020a40(&DAT_100cf920,param_1);
  return 1;
}

/* 1001a8c0  FUN_1001a8c0  (96 bytes)
 * undefined4 FUN_1001a8c0(int param_1)
 */
undefined4 __fastcall FUN_1001a8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_suit_empty_1009315c);
  iVar2 = FUN_10020670(&DAT_100cf920,s_suit_full_10093150);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = iVar1 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar1 = iVar2 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar3 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = iVar1 - iVar2;
  return 1;
}

/* 1001a920  FUN_1001a920  (59 bytes)
 * undefined4 FUN_1001a920(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001a860
 */
undefined4 __thiscall
FUN_1001a920(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_100299b0(param_3,param_2);
  iVar1 = FUN_10029a50();
  if (iVar1 != *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x28) = 0x42c80000;
    *(int *)((int)this + 0x24) = iVar1;
  }
  return 1;
}

/* 1001a960  FUN_1001a960  (10 bytes)
 * undefined FUN_1001a960()
 */
void FUN_1001a960(void)

{
  FUN_1001a970();
  FUN_1001a980();
  return;
}

/* 1001a970  FUN_1001a970  (10 bytes)
 * undefined FUN_1001a970(void)
 * called by: FUN_1001a960
 */
void FUN_1001a970(void)

{
  FUN_1001ab80((undefined4 *)&DAT_100cf920);
  return;
}

/* 1001a980  FUN_1001a980  (12 bytes)
 * undefined FUN_1001a980(void)
 * called by: FUN_1001a960
 */
void FUN_1001a980(void)

{
  FUN_1006af63(0x1001a990);
  return;
}

/* 1001a990  FUN_1001a990  (10 bytes)
 * undefined FUN_1001a990()
 */
void FUN_1001a990(void)

{
  FUN_10020590((int *)&DAT_100cf920);
  return;
}

/* 1001ab80  FUN_1001ab80  (273 bytes)
 * undefined4 * FUN_1001ab80(undefined4 * param_1)
 * called by: FUN_1001a970
 */
undefined4 * __fastcall FUN_1001ab80(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  pcStack_8 = FUN_10077995;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[0x1f] = &PTR_FUN_1007cc88;
  param_1[0x29] = &PTR_FUN_1007cc6c;
  param_1[0x69] = &PTR_FUN_1007cc50;
  param_1[0x6f] = &PTR_FUN_1007cc34;
  param_1[0x7b] = &PTR_FUN_1007cc18;
  param_1[0x82] = &PTR_FUN_1007cbfc;
  param_1[0x92] = &PTR_FUN_1007cbe0;
  param_1[0xcc] = &PTR_FUN_1007cbc4;
  param_1[0x15c] = &PTR_FUN_1007cba8;
  param_1[0x162] = &PTR_FUN_1007cb8c;
  param_1[0x167] = &PTR_FUN_1007cb70;
  param_1[0x170] = &PTR_FUN_1007cb54;
  param_1[0x17b] = &PTR_FUN_1007cb38;
  param_1[0x180] = &PTR_FUN_1007cb1c;
  param_1[0x1b6] = &PTR_FUN_1007c608;
  local_4 = 0xe;
  uStack_3 = 0;
  FUN_100025e0(param_1 + 0x411,0xc,0x40,FUN_10017e90);
  param_1[0x1b6] = &PTR_FUN_1007cb00;
  param_1[0x4e0] = &PTR_FUN_1007cae4;
  _local_4 = CONCAT31(uStack_3,0x10);
  FUN_1001acb0(param_1 + 0x12ab);
  ExceptionList = local_c;
  return param_1;
}

/* 1001aca0  FUN_1001aca0  (7 bytes)
 * undefined FUN_1001aca0(undefined4 * param_1)
 * called by: FUN_1001acc0, Unwind@10077810, Unwind@10077830, Unwind@100778b0, Unwind@100778bb, Unwind@100778c9, Unwind@100778d7, Unwind@100778e5, Unwind@100778f3, Unwind@10077901, Unwind@1007790f, Unwind@1007791d, ... (37 total)
 */
void __fastcall FUN_1001aca0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007c608;
  return;
}

/* 1001acb0  FUN_1001acb0  (9 bytes)
 * undefined FUN_1001acb0(undefined4 * param_1)
 * called by: FUN_1001ab80
 */
void __fastcall FUN_1001acb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007cca4;
  return;
}

/* 1001acc0  FUN_1001acc0  (30 bytes)
 * undefined4 * FUN_1001acc0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001acc0(void *this,byte_conflict param_1)

{
  FUN_1001aca0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001ace0  FUN_1001ace0  (42 bytes)
 * undefined FUN_1001ace0(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_10003680, FUN_10003830
 */
void __cdecl FUN_1001ace0(int param_1,int param_2,int param_3)

{
  if ((DAT_100d5cbc != 0) || (param_3 != 0)) {
    DAT_100d5cb8 = param_1;
    (*gEngfuncs.pfnWeaponAnim)(param_1,param_2);
  }
  return;
}

/* 1001ad10  FUN_1001ad10  (6 bytes)
 * undefined4 FUN_1001ad10(void)
 * called by: FUN_10003830
 */
undefined4 FUN_1001ad10(void)

{
  return DAT_100d5cb8;
}

/* 1001ad20  FUN_1001ad20  (42 bytes)
 * undefined FUN_1001ad20(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10003640
 */
void __cdecl FUN_1001ad20(char *param_1,float param_2)

{
  if ((DAT_100d5cbc != 0) && (DAT_100d5cc0 != 0)) {
    (*gEngfuncs.pfnPlaySoundByNameAtLocation)(param_1,param_2,(float *)(DAT_100d5cc0 + 0x10));
  }
  return;
}

/* 1001ad50  FUN_1001ad50  (150 bytes)
 * undefined FUN_1001ad50()
 */
void FUN_1001ad50(int param_1,edict_s *param_2,ushort param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,float param_7,float param_8,int param_9,int param_10,
                 int param_11,int param_12)

{
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_100d5cbc != 0) && (DAT_100d5cc0 != 0)) {
    fStack_c = *(float *)(DAT_100d5cc0 + 0x10);
    uStack_8 = *(undefined4 *)(DAT_100d5cc0 + 0x14);
    uStack_4 = *(undefined4 *)(DAT_100d5cc0 + 0x18);
    fStack_18 = DAT_10190b50;
    uStack_14 = DAT_10190b54;
    uStack_10 = DAT_10190b58;
    (*gEngfuncs.pfnPlaybackEvent)
              (param_1,param_2,param_3,param_4,&fStack_c,&fStack_18,param_7,param_8,param_9,param_10
               ,param_11,param_12);
  }
  return;
}

/* 1001adf0  FUN_1001adf0  (7 bytes)
 * float10 FUN_1001adf0(void)
 * called by: FUN_100088e0, FUN_10008aa0, FUN_10008ac0, FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_10009e30, FUN_10009ee0, FUN_1000a1f0, FUN_1000a270, FUN_1000a450, FUN_1000a4c0, ... (20 total)
 */
float10 FUN_1001adf0(void)

{
  return (float10)0.0;
}

/* 1001ae00  FUN_1001ae00  (53 bytes)
 * uint FUN_1001ae00(void)
 * called by: FUN_1001ae60, FUN_1001aea0
 */
uint FUN_1001ae00(void)

{
  DAT_100d5cc4 = DAT_100d5cc4 * 0x10dcd + 1 +
                 *(int *)(&DAT_10093168 + (DAT_100d5cc4 * 0x10dcd & 0xff) * 4);
  return DAT_100d5cc4 & 0xfffffff;
}

/* 1001ae40  FUN_1001ae40  (23 bytes)
 * undefined FUN_1001ae40(uint param_1)
 * called by: FUN_1001ae60, FUN_1001aea0
 */
void __cdecl FUN_1001ae40(uint param_1)

{
  DAT_100d5cc4 = *(undefined4 *)(&DAT_10093168 + (param_1 & 0xff) * 4);
  return;
}

/* 1001ae60  FUN_1001ae60  (58 bytes)
 * int FUN_1001ae60(int param_1, int param_2, int param_3)
 * called by: FUN_10051270
 */
int __cdecl FUN_1001ae60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  FUN_1001ae40(param_1 + param_2 + param_3);
  if (param_3 - param_2 == 0) {
    return param_2;
  }
  uVar1 = FUN_1001ae00();
  return uVar1 % ((param_3 - param_2) + 1U) + param_2;
}

/* 1001aea0  FUN_1001aea0  (98 bytes)
 * float10 FUN_1001aea0(int param_1, float param_2, float param_3)
 * called by: FUN_1000ba00, FUN_100450c0, FUN_10051270
 */
float10 __cdecl FUN_1001aea0(int param_1,float param_2,float param_3)

{
  uint uVar1;
  
  FUN_1001ae40((int)param_3 + (int)param_2 + param_1);
  FUN_1001ae00();
  FUN_1001ae00();
  if (param_3 - param_2 == 0.0) {
    return (float10)param_2;
  }
  uVar1 = FUN_1001ae00();
  return (float10)(uVar1 & 0xffff) * (float10)1.52587890625e-05 * (float10)(param_3 - param_2) +
         (float10)param_2;
}

/* 1001af10  FUN_1001af10  (6 bytes)
 * undefined FUN_1001af10()
 */
undefined * FUN_1001af10(void)

{
  return &DAT_1009356c;
}

/* 1001af20  FUN_1001af20  (26 bytes)
 * undefined FUN_1001af20()
 */
void FUN_1001af20(undefined4 param_1,undefined4 param_2,char *param_3)

{
  FUN_1001b360(&DAT_100cfe90,param_1,param_2,param_3);
  return;
}

/* 1001af40  FUN_1001af40  (72 bytes)
 * undefined4 * FUN_1001af40(int param_1)
 * called by: FUN_1001b360, FUN_1002ed00, FUN_1002f480
 */
undefined4 * __cdecl FUN_1001af40(int param_1)

{
  cl_entity_s *pcVar1;
  
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  if (param_1 != pcVar1->index) {
    switch((&DAT_101901fc)[param_1 * 0x10]) {
    case 1:
      return (undefined4 *)&DAT_10093578;
    case 2:
      return (undefined4 *)&DAT_10093584;
    case 3:
      return &DAT_1009359c;
    case 4:
      return (undefined4 *)&DAT_10093590;
    default:
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)&DAT_100935a8;
}

/* 1001afa0  FUN_1001afa0  (54 bytes)
 * undefined FUN_1001afa0()
 */
undefined4 __fastcall FUN_1001afa0(int param_1)

{
  FUN_10020a40(&DAT_100cf920,param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_DeathMsg_100935d0,FUN_1001af20);
  (*gEngfuncs.pfnRegisterVariable)(s__hud_deathnotice_time_100935b3 + 1,&DAT_100935cc,0);
  return 1;
}

/* 1001afe0  FUN_1001afe0  (17 bytes)
 * undefined FUN_1001afe0()
 */
void FUN_1001afe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100d5cc8;
  for (iVar1 = 0xeb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 1001b000  FUN_1001b000  (28 bytes)
 * undefined4 FUN_1001b000(int param_1)
 */
undefined4 __fastcall FUN_1001b000(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_d_skull_100935dc);
  *(int *)(param_1 + 0x14) = iVar1;
  return 1;
}

/* 1001b020  FUN_1001b020  (39 bytes)
 * undefined FUN_1001b020()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001b020(int param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int g;
  int iVar5;
  int iVar6;
  int y;
  int iVar7;
  longlong lVar8;
  char *pcStack_38;
  char *pcStack_34;
  undefined4 *puStack_30;
  char *pcStack_2c;
  HSPRITE HStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(float *)(DAT_100df50c + 0xc) != 0.0) {
    return 1;
  }
  iVar6 = 0;
  pcStack_2c = &DAT_100d5d08;
  pcStack_38 = &DAT_100d5d64;
  pcStack_34 = (char *)&DAT_100d5cc8;
  y = 0x14;
  puStack_30 = (undefined4 *)&DAT_100d5d84;
  do {
    iVar7 = DAT_100d5cb0;
    if (*(int *)((int)&DAT_100d5d48 + iVar6) == 0) {
      return 1;
    }
    if (param_2 <= *(float *)((int)&DAT_100d5d58 + iVar6)) {
      fVar1 = (float)_DAT_10093574 + DAT_100cf944;
      if (*(float *)((int)&DAT_100d5d58 + iVar6) < fVar1) {
        fVar1 = *(float *)((int)&DAT_100d5d58 + iVar6);
      }
      *(float *)((int)&DAT_100d5d58 + iVar6) = fVar1;
      if ((iVar7 != 0) && (uVar3 = FUN_10064240(iVar7), (char)uVar3 != '\0')) {
        iVar7 = *(int *)((int)&DAT_100d5d48 + iVar6);
        if (iVar7 == -1) {
          iVar7 = *(int *)(param_1 + 0x14);
        }
        if (*pcStack_38 == '\0') {
          (*gEngfuncs.pfnDrawConsoleStringLen)(pcStack_2c,&iStack_20,&iStack_10);
          iVar4 = ((*(int *)(iVar7 * 0x10 + DAT_100cf990) -
                   *(int *)(iVar7 * 0x10 + DAT_100cf990 + 4)) - iStack_20) + -5 + DAT_100d5908;
        }
        else {
          (*gEngfuncs.pfnDrawConsoleStringLen)(pcStack_2c,&iStack_18,&iStack_c);
          (*gEngfuncs.pfnDrawConsoleStringLen)(pcStack_38,&iStack_1c,&iStack_8);
          iVar4 = ((DAT_100d5908 - iStack_1c) - iStack_18) + -10;
        }
        if (*(int *)((int)&DAT_100d5d4c + iVar6) == 0) {
          (*gEngfuncs.pfnDrawConsoleStringLen)(pcStack_34,&iStack_14,&iStack_4);
          pfVar2 = *(float **)((int)&DAT_100d5d5c + iVar6);
          iVar5 = -5 - iStack_14;
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          iVar4 = (*gEngfuncs.pfnDrawConsoleString)(iVar4 + iVar5,y,pcStack_34);
          iVar4 = iVar4 + 5;
        }
        if (*pcStack_38 == '\0') {
          if (iVar7 < 0) {
            HStack_28 = 0;
          }
          else {
            HStack_28 = *(HSPRITE *)(DAT_100cf98c + iVar7 * 4);
          }
          lVar8 = __ftol();
          iVar5 = (int)lVar8;
          lVar8 = __ftol();
          g = (int)lVar8;
          lVar8 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(HStack_28,(int)lVar8,g,iVar5);
          iVar7 = iVar7 * 0x10;
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar4,y,(wrect_t *)(iVar7 + DAT_100cf990));
          iVar4 = iVar4 + (*(int *)(iVar7 + 4 + DAT_100cf990) - *(int *)(iVar7 + DAT_100cf990));
        }
        else {
          (*gEngfuncs.pfnDrawSetTextColor)(1.0,0.5,0.2);
          iVar4 = (*gEngfuncs.pfnDrawConsoleString)(iVar4,y,pcStack_38);
          iVar4 = iVar4 + 5;
        }
        if (*(int *)((int)&DAT_100d5d54 + iVar6) == 0) {
          pfVar2 = *(float **)((int)&DAT_100d5d60 + iVar6);
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          (*gEngfuncs.pfnDrawConsoleString)(iVar4,y,pcStack_2c);
        }
      }
    }
    else {
      FUN_1006ba20((undefined4 *)pcStack_34,puStack_30,0x2f0 - iVar6);
      puStack_30 = puStack_30 + -0x2f;
      pcStack_38 = pcStack_38 + -0xbc;
      pcStack_34 = pcStack_34 + -0xbc;
      y = y + -0x14;
      iVar6 = iVar6 + -0xbc;
      pcStack_2c = pcStack_2c + -0xbc;
    }
    y = y + 0x14;
    iVar6 = iVar6 + 0xbc;
    puStack_30 = puStack_30 + 0x2f;
    pcStack_34 = pcStack_34 + 0xbc;
    pcStack_38 = pcStack_38 + 0xbc;
    pcStack_2c = pcStack_2c + 0xbc;
  } while (y < 100);
  return 1;
}

/* 1001b047  FUN_1001b047  (790 bytes)
 * undefined4 FUN_1001b047(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001b047(void)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int g;
  int iVar6;
  int iVar7;
  int y;
  char *string;
  int iVar8;
  longlong lVar9;
  char *string_00;
  char *pcStack00000004;
  undefined4 *puStack00000008;
  char *pcStack0000000c;
  HSPRITE HStack00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  float in_stack_0000003c;
  
  iVar7 = 0;
  pcStack0000000c = &DAT_100d5d08;
  string_00 = &DAT_100d5d64;
  pcStack00000004 = (char *)&DAT_100d5cc8;
  y = 0x14;
  puStack00000008 = (undefined4 *)&DAT_100d5d84;
  do {
    string = pcStack0000000c;
    puVar3 = puStack00000008;
    iVar8 = DAT_100d5cb0;
    if (*(int *)((int)&DAT_100d5d48 + iVar7) == 0) {
      return 1;
    }
    if (in_stack_0000003c <= *(float *)((int)&DAT_100d5d58 + iVar7)) {
      fVar1 = (float)_DAT_10093574 + DAT_100cf944;
      if (*(float *)((int)&DAT_100d5d58 + iVar7) < fVar1) {
        fVar1 = *(float *)((int)&DAT_100d5d58 + iVar7);
      }
      *(float *)((int)&DAT_100d5d58 + iVar7) = fVar1;
      if ((iVar8 != 0) && (uVar4 = FUN_10064240(iVar8), (char)uVar4 != '\0')) {
        iVar8 = *(int *)((int)&DAT_100d5d48 + iVar7);
        if (iVar8 == -1) {
          iVar8 = *(int *)(in_stack_00000014 + 0x14);
        }
        if (*string_00 == '\0') {
          (*gEngfuncs.pfnDrawConsoleStringLen)(string,&stack0x00000018,(int *)&stack0x00000028);
          iVar5 = ((*(int *)(iVar8 * 0x10 + DAT_100cf990) -
                   *(int *)(iVar8 * 0x10 + DAT_100cf990 + 4)) - in_stack_00000018) + -5 +
                  DAT_100d5908;
        }
        else {
          (*gEngfuncs.pfnDrawConsoleStringLen)(string,&stack0x00000020,(int *)&stack0x0000002c);
          (*gEngfuncs.pfnDrawConsoleStringLen)(string_00,&stack0x0000001c,(int *)&stack0x00000030);
          iVar5 = ((DAT_100d5908 - in_stack_0000001c) - in_stack_00000020) + -10;
        }
        if (*(int *)((int)&DAT_100d5d4c + iVar7) == 0) {
          (*gEngfuncs.pfnDrawConsoleStringLen)
                    (pcStack00000004,&stack0x00000024,(int *)&stack0x00000034);
          pfVar2 = *(float **)((int)&DAT_100d5d5c + iVar7);
          iVar6 = -5 - in_stack_00000024;
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          iVar5 = (*gEngfuncs.pfnDrawConsoleString)(iVar5 + iVar6,y,pcStack00000004);
          iVar5 = iVar5 + 5;
        }
        if (*string_00 == '\0') {
          if (iVar8 < 0) {
            HStack00000010 = 0;
          }
          else {
            HStack00000010 = *(HSPRITE *)(DAT_100cf98c + iVar8 * 4);
          }
          lVar9 = __ftol();
          iVar6 = (int)lVar9;
          lVar9 = __ftol();
          g = (int)lVar9;
          lVar9 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(HStack00000010,(int)lVar9,g,iVar6);
          iVar8 = iVar8 * 0x10;
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar5,y,(wrect_t *)(iVar8 + DAT_100cf990));
          iVar5 = iVar5 + (*(int *)(iVar8 + 4 + DAT_100cf990) - *(int *)(iVar8 + DAT_100cf990));
        }
        else {
          (*gEngfuncs.pfnDrawSetTextColor)(1.0,0.5,0.2);
          iVar5 = (*gEngfuncs.pfnDrawConsoleString)(iVar5,y,string_00);
          iVar5 = iVar5 + 5;
        }
        string = pcStack0000000c;
        if (*(int *)((int)&DAT_100d5d54 + iVar7) == 0) {
          pfVar2 = *(float **)((int)&DAT_100d5d60 + iVar7);
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          (*gEngfuncs.pfnDrawConsoleString)(iVar5,y,pcStack0000000c);
          string = pcStack0000000c;
        }
      }
    }
    else {
      FUN_1006ba20((undefined4 *)pcStack00000004,puStack00000008,0x2f0 - iVar7);
      puStack00000008 = puVar3 + -0x2f;
      string_00 = string_00 + -0xbc;
      pcStack00000004 = pcStack00000004 + -0xbc;
      y = y + -0x14;
      iVar7 = iVar7 + -0xbc;
      string = string + -0xbc;
    }
    y = y + 0x14;
    iVar7 = iVar7 + 0xbc;
    puStack00000008 = puStack00000008 + 0x2f;
    pcStack00000004 = pcStack00000004 + 0xbc;
    string_00 = string_00 + 0xbc;
    pcStack0000000c = string + 0xbc;
  } while (y < 100);
  return 1;
}

/* 1001b360  FUN_1001b360  (1267 bytes)
 * undefined4 FUN_1001b360(undefined4 param_1, undefined4 param_2, char * param_3)
 * called by: FUN_1001af20
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001b360(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  longlong lVar19;
  size_t _Count;
  byte local_20 [32];
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_100299b0(param_3,param_2);
  uVar3 = FUN_10029a10();
  uVar4 = FUN_10029a10();
  uVar11 = 0xffffffff;
  pcVar5 = &DAT_10093678;
  do {
    pcVar17 = pcVar5;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar17 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar17;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  _Count = 0x20;
  pbVar9 = (byte *)(pcVar17 + -uVar11);
  pbVar15 = local_20;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar15 = pbVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar15 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar15 = pbVar15 + 1;
  }
  pcVar5 = FUN_10029b00();
  _strncat((char *)local_20,pcVar5,_Count);
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10065230(DAT_100d5cb0,uVar3,uVar4);
  }
  FUN_10024a60(&DAT_100cfff8);
  iVar13 = 0;
  piVar6 = &DAT_100d5d48;
  do {
    if (*piVar6 == 0) break;
    piVar6 = piVar6 + 0x2f;
    iVar13 = iVar13 + 1;
  } while ((int)piVar6 < 0x100d6038);
  if (iVar13 == 4) {
    FUN_1006ba20(&DAT_100d5cc8,(undefined4 *)&DAT_100d5d84,0x2f0);
    iVar13 = 3;
  }
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10064880((int)DAT_100d5cb0);
  }
  pcVar5 = *(char **)(&DAT_1018fbd8 + uVar3 * 0x14);
  if (pcVar5 == (char *)0x0) {
    param_3 = (char *)(&DAT_100d5cc8 + iVar13 * 0x2f);
    *param_3 = '\0';
  }
  else {
    puVar7 = FUN_1001af40(uVar3);
    (&DAT_100d5d5c)[iVar13 * 0x2f] = puVar7;
    param_3 = (char *)(&DAT_100d5cc8 + iVar13 * 0x2f);
    _strncpy(param_3,pcVar5,0x20);
    *(undefined1 *)(iVar13 * 0xbc + 0x100d5ce7) = 0;
  }
  iVar10 = iVar13 * 0xbc;
  if (((char)uVar4 == -1) ||
     (pcVar5 = *(char **)(&DAT_1018fbd8 + uVar4 * 0x14), pcVar5 == (char *)0x0)) {
    (&DAT_100d5d08)[iVar10] = 0;
  }
  else {
    puVar7 = FUN_1001af40(uVar4);
    (&DAT_100d5d60)[iVar13 * 0x2f] = puVar7;
    _strncpy(&DAT_100d5d08 + iVar10,pcVar5,0x20);
    *(undefined1 *)(iVar10 + 0x100d5d27) = 0;
  }
  pbVar9 = &DAT_100d5d08 + iVar10;
  if ((char)uVar4 == -1) {
    uVar3 = 0xffffffff;
    (&DAT_100d5d54)[iVar13 * 0x2f] = 1;
    pbVar15 = local_20 + 2;
    do {
      pbVar14 = pbVar15;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar14 = pbVar15 + 1;
      bVar2 = *pbVar15;
      pbVar15 = pbVar14;
    } while (bVar2 != 0);
    uVar3 = ~uVar3;
    pbVar15 = pbVar14 + -uVar3;
    pbVar14 = pbVar9;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar15;
      pbVar15 = pbVar15 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar14 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      pbVar14 = pbVar14 + 1;
    }
  }
  else {
    if ((uVar3 == uVar4) || (uVar3 == 0)) {
      (&DAT_100d5d4c)[iVar13 * 0x2f] = 1;
    }
    pcVar5 = s_d_teammate_1009366c;
    pbVar15 = local_20;
    do {
      bVar2 = *pbVar15;
      bVar18 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_1001b55a:
        iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b55f;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar15[1];
      bVar18 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_1001b55a;
      pbVar15 = pbVar15 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_1001b55f:
    if (iVar8 == 0) {
      (&DAT_100d5d50)[iVar13 * 0x2f] = 1;
    }
  }
  uVar3 = 0xffffffff;
  pbVar15 = &DAT_100d5d64 + iVar10;
  pbVar14 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar2 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar2 != 0);
  (&DAT_100d5d48)[iVar13 * 0x2f] = 0xffffffff;
  *pbVar15 = 0;
  if (2 < ~uVar3 - 1) {
    uVar3 = 0xffffffff;
    pbVar14 = local_20 + 2;
    do {
      pbVar16 = pbVar14;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar16 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar16;
    } while (bVar2 != 0);
    uVar3 = ~uVar3;
    pbVar14 = pbVar16 + -uVar3;
    pbVar16 = pbVar15;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar14;
      pbVar14 = pbVar14 + 4;
      pbVar16 = pbVar16 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar16 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    }
  }
  (*gEngfuncs.pfnGetCvarFloat)(s__hud_deathnotice_time_100935b3 + 1);
  lVar19 = __ftol();
  _DAT_10093574 = (int)lVar19;
  (&DAT_100d5d58)[iVar13 * 0x2f] = (float)_DAT_10093574 + DAT_100cf944;
  if ((&DAT_100d5d54)[iVar13 * 0x2f] != 0) {
    (*gEngfuncs.pfnConsolePrint)(param_3);
    (*gEngfuncs.pfnConsolePrint)(s_killed_a_10093660);
    (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    (*gEngfuncs.pfnConsolePrint)(&DAT_1009365c);
    *pbVar15 = 0;
    return 1;
  }
  if ((&DAT_100d5d4c)[iVar13 * 0x2f] == 0) {
    if ((&DAT_100d5d50)[iVar13 * 0x2f] == 0) {
      (*gEngfuncs.pfnConsolePrint)(param_3);
      (*gEngfuncs.pfnConsolePrint)(s_killed_10093618);
      (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    }
    else {
      (*gEngfuncs.pfnConsolePrint)(param_3);
      (*gEngfuncs.pfnConsolePrint)(s_killed_his_teammate_10093624);
      (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
      *pbVar15 = 0;
    }
  }
  else {
    (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    pbVar14 = &DAT_10093654;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar18 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_1001b66c:
        iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b671;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar18 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_1001b66c;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_1001b671:
    if (iVar10 == 0) {
      (*gEngfuncs.pfnConsolePrint)(s_died_1009364c);
      *pbVar15 = 0;
    }
    else {
      (*gEngfuncs.pfnConsolePrint)(s_killed_self_1009363c);
      *pbVar15 = 0;
    }
  }
  if (((&stack0x00000000 != (undefined1 *)0x20) && (local_20[0] != 0)) && ('\r' < (char)local_20[0])
     ) {
    pbVar15 = &DAT_10093654;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar18 = bVar2 < *pbVar15;
      if (bVar2 != *pbVar15) {
LAB_1001b743:
        iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b748;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar18 = bVar2 < pbVar15[1];
      if (bVar2 != pbVar15[1]) goto LAB_1001b743;
      pbVar9 = pbVar9 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_1001b748:
    if ((iVar10 != 0) && ((&DAT_100d5d50)[iVar13 * 0x2f] == 0)) {
      (*gEngfuncs.pfnConsolePrint)(s_with_10093610);
      pbVar15 = &DAT_10093608;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar18 = bVar2 < *pbVar15;
        if (bVar2 != *pbVar15) {
LAB_1001b79d:
          iVar13 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_1001b7a2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar18 = bVar2 < pbVar15[1];
        if (bVar2 != pbVar15[1]) goto LAB_1001b79d;
        pbVar15 = pbVar15 + 2;
      } while (bVar2 != 0);
      iVar13 = 0;
LAB_1001b7a2:
      if (iVar13 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_gluon_gun_100935fc;
        do {
          pcVar17 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar17 + -uVar3);
        pbVar15 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar15 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      pcVar5 = s_gauss_100935f4;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar18 = bVar2 < (byte)*pcVar5;
        if (bVar2 != *pcVar5) {
LAB_1001b7fb:
          iVar13 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_1001b800;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar18 = bVar2 < (byte)pcVar5[1];
        if (bVar2 != pcVar5[1]) goto LAB_1001b7fb;
        pcVar5 = pcVar5 + 2;
      } while (bVar2 != 0);
      iVar13 = 0;
LAB_1001b800:
      if (iVar13 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_tau_cannon_100935e4;
        do {
          pcVar17 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar17 + -uVar3);
        pbVar15 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar15 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      (*gEngfuncs.pfnConsolePrint)((char *)(local_20 + 2));
    }
  }
  (*gEngfuncs.pfnConsolePrint)(&DAT_1009365c);
  return 1;
}

/* 1001b860  FUN_1001b860  (87 bytes)
 * undefined FUN_1001b860(void)
 * called by: FUN_10003830, FUN_100209f0, FUN_1004fe00
 */
void FUN_1001b860(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_stack_00008008;
  undefined4 *in_stack_0000800c;
  
  FUN_1006b970();
  puVar2 = (undefined4 *)register0x00000010;
  for (uVar1 = in_stack_00008008 >> 2; puVar2 = puVar2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_0000800c;
    in_stack_0000800c = in_stack_0000800c + 1;
  }
  for (uVar1 = in_stack_00008008 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_0000800c;
    in_stack_0000800c = (undefined4 *)((int)in_stack_0000800c + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  (*(gEngfuncs.pDemoAPI)->WriteBuffer)(in_stack_00008008 + 4,&stack0x00000000);
  return;
}

/* 1001bcd0  FUN_1001bcd0  (15 bytes)
 * undefined FUN_1001bcd0(void)
 * called by: HUD_CreateEntities
 */
void FUN_1001bcd0(void)

{
  FUN_10034e80();
  FUN_10029780(0x100dff48);
  return;
}

/* 1001c5a0  FUN_1001c5a0  (31 bytes)
 * undefined4 FUN_1001c5a0(int param_1)
 * called by: FUN_1001c620
 */
undefined4 __cdecl FUN_1001c5a0(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = (*gEngfuncs.GetMaxClients)();
    if (param_1 <= iVar1) {
      return 1;
    }
  }
  return 0;
}

/* 1001c5c0  FUN_1001c5c0  (31 bytes)
 * undefined4 FUN_1001c5c0(int param_1)
 * called by: FUN_1001c5e0, FUN_1001c620, FUN_100425b0, FUN_10042630, FUN_10042690, FUN_10043200, FUN_10043800
 */
undefined4 __cdecl FUN_1001c5c0(int param_1)

{
  if ((DAT_10190b18 == 5) && (DAT_10190b20 == param_1)) {
    return 1;
  }
  return 0;
}

/* 1001c5e0  FUN_1001c5e0  (49 bytes)
 * undefined4 FUN_1001c5e0(int param_1)
 * called by: FUN_1001c620, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100419a0, FUN_10042690, FUN_10043200, FUN_10043800, FUN_10043c90, FUN_10044230
 */
undefined4 __cdecl FUN_1001c5e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(gEngfuncs.pEventAPI)->EV_IsLocal)(param_1 + -1);
  if (iVar1 == 0) {
    uVar2 = FUN_1001c5c0(param_1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* 1001c620  FUN_1001c620  (258 bytes)
 * undefined FUN_1001c620(int param_1, float * param_2, float * param_3)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_10043200, FUN_10043800, FUN_10043c90, FUN_10044230
 */
void __cdecl FUN_1001c620(int param_1,float *param_2,float *param_3)

{
  int idx;
  int iVar1;
  undefined4 uVar2;
  cl_entity_s *pcVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_c [3];
  
  local_30 = 0.0;
  idx = *(int *)(param_1 + 4);
  local_2c = 0.0;
  local_28 = 28.0;
  iVar1 = FUN_1001c5a0(idx);
  if (iVar1 != 0) {
    iVar1 = FUN_1001c5e0(idx);
    if (iVar1 != 0) {
      uVar2 = FUN_1001c5c0(idx);
      if ((char)uVar2 == '\0') {
        (*(gEngfuncs.pEventAPI)->EV_LocalPlayerViewheight)(&local_30);
        goto LAB_1001c6fc;
      }
    }
    FUN_10068e20(idx,param_2,local_c);
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    pcVar3 = (*gEngfuncs.GetEntityByIndex)(idx);
    local_30 = local_24 - pcVar3->origin[0];
    local_2c = local_20 - pcVar3->origin[1];
    local_28 = local_1c - pcVar3->origin[2];
  }
LAB_1001c6fc:
  *param_2 = local_30 + *param_3;
  param_2[1] = local_2c + param_3[1];
  param_2[2] = local_28 + param_3[2];
  return;
}

/* 1001c740  FUN_1001c740  (34 bytes)
 * undefined FUN_1001c740()
 */
undefined4 __fastcall FUN_1001c740(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  FUN_10020a40(&DAT_100cf920,param_1);
  return 1;
}

/* 1001c770  FUN_1001c770  (9 bytes)
 * undefined FUN_1001c770()
 */
void __fastcall FUN_1001c770(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

/* 1001c780  FUN_1001c780  (177 bytes)
 * undefined4 FUN_1001c780(int param_1)
 */
undefined4 __fastcall FUN_1001c780(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_flash_empty_100936e0);
  iVar2 = FUN_10020670(&DAT_100cf920,s_flash_full_100936d4);
  iVar3 = FUN_10020670(&DAT_100cf920,s_flash_beam_100936c8);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar1 * 4);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar2 * 4);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(int *)(param_1 + 0x20) = iVar1 * 0x10 + DAT_100cf990;
  piVar5 = (int *)(iVar2 * 0x10 + DAT_100cf990);
  *(int **)(param_1 + 0x24) = piVar5;
  *(int *)(param_1 + 0x28) = iVar3 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x3c) = piVar5[1] - *piVar5;
  return 1;
}

/* 1001c840  FUN_1001c840  (10 bytes)
 * undefined FUN_1001c840()
 */
void __fastcall FUN_1001c840(undefined4 param_1)

{
  FUN_1001c850(param_1);
  FUN_1001c880();
  return;
}

/* 1001c850  FUN_1001c850  (41 bytes)
 * undefined FUN_1001c850(undefined4 param_1)
 * called by: FUN_1001c840
 */
void __fastcall FUN_1001c850(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100db0a0 = local_1;
  DAT_100db0a4 = operator_new(0xc);
  *(void **)DAT_100db0a4 = DAT_100db0a4;
  *(void **)((int)DAT_100db0a4 + 4) = DAT_100db0a4;
  DAT_100db0a8 = 0;
  return;
}

/* 1001c880  FUN_1001c880  (12 bytes)
 * undefined FUN_1001c880(void)
 * called by: FUN_1001c840
 */
void FUN_1001c880(void)

{
  FUN_1006af63(0x1001c890);
  return;
}

/* 1001c890  FUN_1001c890  (88 bytes)
 * undefined FUN_1001c890()
 */
void FUN_1001c890(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_100db0a4;
  piVar2 = (int *)*DAT_100db0a4;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_1006ad4c(piVar2);
    DAT_100db0a8 = DAT_100db0a8 + -1;
    piVar2 = piVar1;
  }
  FUN_1006ad4c(DAT_100db0a4);
  DAT_100db0a4 = (int *)0x0;
  DAT_100db0a8 = 0;
  return;
}

/* 1001c8f0  FUN_1001c8f0  (10 bytes)
 * undefined FUN_1001c8f0()
 */
void __fastcall FUN_1001c8f0(undefined4 param_1)

{
  FUN_1001c900(param_1);
  FUN_1001c930();
  return;
}

/* 1001c900  FUN_1001c900  (41 bytes)
 * undefined FUN_1001c900(undefined4 param_1)
 * called by: FUN_1001c8f0
 */
void __fastcall FUN_1001c900(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100d6090 = local_1;
  DAT_100d6094 = operator_new(0xc);
  *(void **)DAT_100d6094 = DAT_100d6094;
  *(void **)((int)DAT_100d6094 + 4) = DAT_100d6094;
  DAT_100d6098 = 0;
  return;
}

/* 1001c930  FUN_1001c930  (12 bytes)
 * undefined FUN_1001c930(void)
 * called by: FUN_1001c8f0
 */
void FUN_1001c930(void)

{
  FUN_1006af63(0x1001c940);
  return;
}

/* 1001c940  FUN_1001c940  (88 bytes)
 * undefined FUN_1001c940()
 */
void FUN_1001c940(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_100d6094;
  piVar2 = (int *)*DAT_100d6094;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_1006ad4c(piVar2);
    DAT_100d6098 = DAT_100d6098 + -1;
    piVar2 = piVar1;
  }
  FUN_1006ad4c(DAT_100d6094);
  DAT_100d6094 = (int *)0x0;
  DAT_100d6098 = 0;
  return;
}

/* 1001c9a0  FUN_1001c9a0  (142 bytes)
 * undefined FUN_1001c9a0(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001d170, FUN_1001d620, FUN_1001e450, FUN_1001e930
 */
void __cdecl FUN_1001c9a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_1001ca30(param_3,&local_24,&local_c,&local_18);
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = param_1[2];
  fVar7 = param_1[1];
  fVar8 = param_2[2];
  *param_4 = local_c * param_1[1] + local_18 * param_1[2] + local_24 * *param_1 + *param_2;
  param_4[2] = local_4 * fVar7 + local_10 * fVar6 + local_1c * fVar5 + fVar8;
  param_4[1] = local_8 * fVar3 + local_14 * fVar2 + local_20 * fVar1 + fVar4;
  return;
}

/* 1001ca30  FUN_1001ca30  (235 bytes)
 * undefined FUN_1001ca30(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001c9a0, FUN_1001cb20
 */
void __cdecl FUN_1001ca30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar4 * (float10)fVar2 * fVar6 - (float10)fVar5 * (float10)fVar1);
    param_3[1] = (float)((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1);
    param_3[2] = fVar4 * fVar3;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 1001cb20  FUN_1001cb20  (164 bytes)
 * undefined FUN_1001cb20(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001d170, FUN_1001d620, FUN_1001e450, FUN_1001e930
 */
void __cdecl FUN_1001cb20(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  FUN_1001ca30(param_3,&local_24,&local_18,&local_c);
  *param_4 = local_24 * fVar1 + local_20 * fVar2 + local_1c * fVar3;
  param_4[1] = local_18 * fVar1 + local_14 * fVar2 + local_10 * fVar3;
  param_4[2] = local_c * fVar1 + local_8 * fVar2 + local_4 * fVar3;
  return;
}

/* 1001cbd0  FUN_1001cbd0  (32 bytes)
 * uint FUN_1001cbd0(void)
 * called by: FUN_1001cbf0, FUN_1001cc60, FUN_1001cca0, FUN_1001cce0
 */
uint FUN_1001cbd0(void)

{
  if (DAT_100db0b8 == 0) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(*(int *)(DAT_100db0b8 + 0xa4) + 0x20) == 0);
}

/* 1001cbf0  FUN_1001cbf0  (107 bytes)
 * undefined FUN_1001cbf0(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001cbf0(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1001cbd0();
  if (uVar1 == 0) {
    PTR_FUN_100936ec = FUN_1001dfd0;
    FUN_1001dfd0(param_1,param_2,param_3);
    return;
  }
  if (uVar1 != 1) {
    FUN_1001cd50(param_1,param_2,param_3);
    (*(code *)PTR_FUN_100936ec)(param_1,param_2,param_3);
    return;
  }
  PTR_FUN_100936ec = FUN_1001cd50;
  FUN_1001cd50(param_1,param_2,param_3);
  return;
}

/* 1001cc60  FUN_1001cc60  (56 bytes)
 * undefined FUN_1001cc60()
 */
void FUN_1001cc60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_1001cbd0();
  if (uVar1 == 0) {
    pcVar2 = FUN_1001e450;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_1001d170;
  }
  PTR_FUN_100936f0 = pcVar2;
  (*pcVar2)(param_1,param_2,param_3,param_4);
  return;
}

/* 1001cca0  FUN_1001cca0  (56 bytes)
 * undefined FUN_1001cca0()
 */
void FUN_1001cca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_1001cbd0();
  if (uVar1 == 0) {
    pcVar2 = FUN_1001e930;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_1001d620;
  }
  PTR_FUN_100936f4 = pcVar2;
  (*pcVar2)(param_1,param_2,param_3,param_4);
  return;
}

/* 1001cce0  FUN_1001cce0  (46 bytes)
 * undefined FUN_1001cce0()
 */
void FUN_1001cce0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_1001cbd0();
  if (uVar1 == 0) {
    pcVar2 = FUN_1001df80;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_1001cd10;
  }
  PTR_FUN_100936f8 = pcVar2;
  (*pcVar2)(param_1,param_2);
  return;
}

/* 1001cd10  FUN_1001cd10  (63 bytes)
 * undefined FUN_1001cd10(int param_1, undefined4 * param_2)
 * called by: FUN_1001cce0
 */
void __cdecl FUN_1001cd10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + param_1 * 0x40) * 0xd + iVar2;
    iVar2 = iVar2 + 1;
    *param_2 = *(undefined4 *)(*(int *)(DAT_100db0b8 + 0xa4) + 8 + iVar1 * 4);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 1001cd50  FUN_1001cd50  (128 bytes)
 * undefined FUN_1001cd50(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001cd50(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 1001cdd0  FUN_1001cdd0  (162 bytes)
 * uint FUN_1001cdd0(float * param_1, float * param_2, undefined4 param_3, int * param_4, int param_5, float param_6)
 * called by: FUN_1001cd50, FUN_1001d170, FUN_1001d620
 */
uint __cdecl
FUN_1001cdd0(float *param_1,float *param_2,undefined4 param_3,int *param_4,int param_5,float param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  DAT_100db0bc = 1;
  uVar4 = FUN_1001ce80(param_1,param_2,param_4,param_5,(float *)0x0,0);
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_5 + 0x30) = param_3;
    fVar1 = *(float *)(param_5 + 0x14) - *param_1;
    fVar3 = *(float *)(param_5 + 0x18) - param_1[1];
    fVar2 = *(float *)(param_5 + 0x1c) - param_1[2];
    if (param_6 == 0.0) {
      *(undefined4 *)(param_5 + 0x10) = 0;
    }
    else {
      *(float *)(param_5 + 0x10) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / param_6;
    }
    *param_2 = *(float *)(param_5 + 0x14);
    fVar1 = *(float *)(param_5 + 0x18);
    param_2[1] = fVar1;
    param_2[2] = *(float *)(param_5 + 0x1c);
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}

/* 1001ce80  FUN_1001ce80  (752 bytes)
 * undefined4 FUN_1001ce80(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_1001cdd0, FUN_1001ce80
 */
undefined4 __cdecl
FUN_1001ce80(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[9];
    fVar2 = (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + pfVar4[1] * param_2[1] + pfVar4[2] * param_2[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_1001ce80(param_1,param_2,(int *)param_3[10],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_1001d02e;
      param_3 = (int *)param_3[0xb];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_18 = *param_2 - *param_1;
        local_14 = param_2[1] - param_1[1];
        local_10 = param_2[2] - param_1[2];
        FUN_1001e3f0(&local_18);
        pfVar4 = (float *)param_3[9];
        fVar3 = (pfVar4[3] - (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]))
                / (local_18 * *pfVar4 + local_14 * pfVar4[1] + local_10 * pfVar4[2]);
        local_c = fVar3 * local_18 + *param_1;
        local_8 = fVar3 * local_14 + param_1[1];
        local_4 = fVar3 * local_10 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_1001ce80(param_1,&local_c,(int *)param_3[0xb],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_1001ce80(&local_c,param_2,(int *)param_3[10],param_4,(float *)param_3[9],0);
          return uVar5;
        }
        uVar5 = FUN_1001ce80(param_1,&local_c,(int *)param_3[10],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_1001ce80(&local_c,param_2,(int *)param_3[0xb],param_4,(float *)param_3[9],1);
        return uVar5;
      }
      param_3 = (int *)param_3[0xb];
    }
    else {
      param_3 = (int *)param_3[10];
    }
    uVar1 = *param_3;
  }
  if (DAT_100db0bc != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100db0bc = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x20) = *param_5;
    *(float *)(param_4 + 0x24) = param_5[1];
    *(float *)(param_4 + 0x28) = param_5[2];
    *(float *)(param_4 + 0x2c) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x20) = -*param_5;
  *(float *)(param_4 + 0x24) = -param_5[1];
  *(float *)(param_4 + 0x28) = -param_5[2];
  *(float *)(param_4 + 0x2c) = -param_5[3];
  pfVar4 = param_5;
LAB_1001d02e:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 1001d170  FUN_1001d170  (1187 bytes)
 * undefined FUN_1001d170(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_1001cc60
 */
void __cdecl FUN_1001d170(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float local_48;
  float local_44;
  float local_40;
  int *local_3c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [6];
  
  pfVar13 = param_2;
  fVar4 = *param_2;
  fVar5 = *param_1;
  fVar6 = param_2[1];
  fVar7 = param_1[1];
  fVar8 = param_2[2];
  fVar9 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar4 = SQRT((fVar4 - fVar5) * (fVar4 - fVar5) +
               (fVar6 - fVar7) * (fVar6 - fVar7) + (fVar8 - fVar9) * (fVar8 - fVar9));
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar4);
    local_24 = *param_2 - *param_1;
    local_3c = (int *)*DAT_100db0a4;
    local_20 = param_2[1] - param_1[1];
    local_1c = param_2[2] - param_1[2];
    if (local_3c != DAT_100db0a4) {
      do {
        piVar11 = (int *)local_3c[2];
        iVar12 = *piVar11;
        if (iVar12 != param_3) {
          pfVar1 = (float *)(piVar11 + 0x2d2);
          iVar15 = iVar12 * 0x14;
          pfVar2 = (float *)(piVar11 + 0x2d5);
          fVar5 = *(float *)(&DAT_100d60b0 + iVar15);
          sVar10 = *(short *)(&DAT_100d60a0 + iVar15);
          fVar6 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
          fVar7 = ((local_24 * *(float *)(&DAT_100d60a4 + iVar15) +
                   local_20 * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_1c * *(float *)(&DAT_100d60ac + iVar15)) -
                  (local_1c * param_1[2] + local_24 * *param_1 + local_20 * param_1[1])) / fVar6;
          if ((fVar7 <= fVar6 + fVar5) && (-fVar5 <= fVar7)) {
            if (0.0 <= fVar7) {
              if (fVar7 <= fVar6) {
                fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar7 * local_24) / fVar6 + *param_1)
                ;
                fVar8 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar7 * local_20) / fVar6 + param_1[1]);
                fVar6 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar7 * local_1c) / fVar6 + param_1[2]);
              }
              else {
                fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar13;
                fVar8 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar13[1];
                fVar6 = *(float *)(&DAT_100d60ac + iVar15) - pfVar13[2];
              }
            }
            else {
              fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - *param_1;
              fVar8 = *(float *)(&DAT_100d60a8 + iVar15) - param_1[1];
              fVar6 = *(float *)(&DAT_100d60ac + iVar15) - param_1[2];
            }
            if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6) <= fVar5) {
              FUN_1001cb20(param_1,pfVar1,pfVar2,local_18 + 3);
              FUN_1001cb20(pfVar13,pfVar1,pfVar2,local_18);
              local_40 = 0.0;
              local_44 = 1.0;
              piVar11 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar10 * 0x40) * 0x34
                               );
              pfVar16 = (float *)(piVar11 + 2);
              param_2 = (float *)0x0;
              iVar15 = (int)local_18 + -(int)pfVar16;
              iVar3 = (int)local_18 + -(int)pfVar16 + 0xc;
              do {
                if (*(float *)(iVar15 + (int)pfVar16) <= *(float *)(iVar3 + (int)pfVar16)) {
                  if ((pfVar16[3] < *(float *)(iVar15 + (int)pfVar16)) ||
                     (*(float *)(iVar3 + (int)pfVar16) < *pfVar16)) goto LAB_1001d5f3;
                  fVar5 = *(float *)(iVar15 + (int)pfVar16) - *(float *)(iVar3 + (int)pfVar16);
                  if (*(float *)(iVar3 + (int)pfVar16) <= pfVar16[3]) {
                    local_48 = 0.0;
                  }
                  else {
                    local_48 = (pfVar16[3] - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                  if (*pfVar16 <= *(float *)(iVar15 + (int)pfVar16)) goto LAB_1001d4ee;
                  fVar5 = (*pfVar16 - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                }
                else {
                  if ((pfVar16[3] < *(float *)(iVar3 + (int)pfVar16)) ||
                     (*(float *)(iVar15 + (int)pfVar16) < *pfVar16)) goto LAB_1001d5f3;
                  fVar5 = *(float *)(iVar15 + (int)pfVar16) - *(float *)(iVar3 + (int)pfVar16);
                  if (*pfVar16 <= *(float *)(iVar3 + (int)pfVar16)) {
                    local_48 = 0.0;
                  }
                  else {
                    local_48 = (*pfVar16 - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                  if (*(float *)(iVar15 + (int)pfVar16) <= pfVar16[3]) {
LAB_1001d4ee:
                    fVar5 = 1.0;
                  }
                  else {
                    fVar5 = (pfVar16[3] - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                }
                if (local_40 < local_48) {
                  local_40 = local_48;
                }
                if (fVar5 < local_44) {
                  local_44 = fVar5;
                }
                if (local_44 < local_40) goto LAB_1001d5f3;
                pfVar16 = pfVar16 + 1;
                param_2 = (float *)((int)param_2 + 1);
              } while ((int)param_2 < 3);
              uVar14 = FUN_1001cdd0(local_18 + 3,local_18,iVar12,piVar11,param_4,fVar4);
              if ((char)uVar14 != '\0') {
                pfVar16 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar16,pfVar1,pfVar2,pfVar16);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,pfVar2,
                             (float *)(param_4 + 0x20));
                *pfVar13 = *pfVar16;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_1c = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_1c;
                local_24 = *pfVar13 - *param_1;
                local_20 = pfVar13[1] - param_1[1];
                local_1c = local_1c - param_1[2];
              }
            }
          }
        }
LAB_1001d5f3:
        local_3c = (int *)*local_3c;
      } while (local_3c != DAT_100db0a4);
    }
  }
  return;
}

/* 1001d620  FUN_1001d620  (1839 bytes)
 * undefined FUN_1001d620(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_1001cca0
 */
void __cdecl FUN_1001d620(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  undefined2 uVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float local_5c;
  float local_54;
  float local_50;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [12];
  
  pfVar13 = param_2;
  pfVar12 = param_1;
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_2[2];
  fVar8 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
               (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8));
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar3);
    local_3c = *param_2 - *param_1;
    local_38 = param_2[1] - param_1[1];
    local_34 = param_2[2] - param_1[2];
    param_1 = (float *)*DAT_100db0a4;
    if ((float *)*DAT_100db0a4 != DAT_100db0a4) {
      do {
        piVar10 = (int *)param_1[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          iVar17 = iVar11 * 0x14;
          pfVar18 = (float *)(piVar10 + 0x2d5);
          fVar4 = *(float *)(&DAT_100d60b0 + iVar17);
          sVar9 = *(short *)(&DAT_100d60a0 + iVar17);
          fVar5 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
          fVar6 = ((local_38 * *(float *)(&DAT_100d60a8 + iVar17) +
                   local_34 * *(float *)(&DAT_100d60ac + iVar17) +
                   local_3c * *(float *)(&DAT_100d60a4 + iVar17)) -
                  (local_34 * pfVar12[2] + local_3c * *pfVar12 + local_38 * pfVar12[1])) / fVar5;
          if ((fVar6 <= fVar5 + fVar4) && (-fVar4 <= fVar6)) {
            if (0.0 <= fVar6) {
              if (fVar6 <= fVar5) {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - ((fVar6 * local_3c) / fVar5 + *pfVar12)
                ;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar17) -
                        ((fVar6 * local_38) / fVar5 + pfVar12[1]);
                fVar5 = *(float *)(&DAT_100d60ac + iVar17) -
                        ((fVar6 * local_34) / fVar5 + pfVar12[2]);
              }
              else {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar13;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar13[1];
                fVar5 = *(float *)(&DAT_100d60ac + iVar17) - pfVar13[2];
              }
            }
            else {
              fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar12;
              fVar7 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar12[1];
              fVar5 = *(float *)(&DAT_100d60ac + iVar17) - pfVar12[2];
            }
            if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) <= fVar4) {
              FUN_1001cb20(pfVar12,pfVar1,pfVar18,local_30 + 3);
              FUN_1001cb20(pfVar13,pfVar1,pfVar18,local_30);
              local_50 = 0.0;
              local_54 = 1.0;
              piVar10 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar9 * 0x40) * 0x34)
              ;
              pfVar16 = (float *)(piVar10 + 2);
              param_2 = (float *)0x0;
              iVar17 = (int)local_30 + -(int)pfVar16;
              iVar2 = (int)local_30 + -(int)pfVar16 + 0xc;
              do {
                if (*(float *)(iVar17 + (int)pfVar16) <= *(float *)(iVar2 + (int)pfVar16)) {
                  if ((pfVar16[3] < *(float *)(iVar17 + (int)pfVar16)) ||
                     (*(float *)(iVar2 + (int)pfVar16) < *pfVar16)) goto LAB_1001daa8;
                  fVar4 = *(float *)(iVar17 + (int)pfVar16) - *(float *)(iVar2 + (int)pfVar16);
                  if (*(float *)(iVar2 + (int)pfVar16) <= pfVar16[3]) {
                    local_5c = 0.0;
                  }
                  else {
                    local_5c = (pfVar16[3] - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                  if (*pfVar16 <= *(float *)(iVar17 + (int)pfVar16)) goto LAB_1001d9a7;
                  fVar4 = (*pfVar16 - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                }
                else {
                  if ((pfVar16[3] < *(float *)(iVar2 + (int)pfVar16)) ||
                     (*(float *)(iVar17 + (int)pfVar16) < *pfVar16)) goto LAB_1001daa8;
                  fVar4 = *(float *)(iVar17 + (int)pfVar16) - *(float *)(iVar2 + (int)pfVar16);
                  if (*pfVar16 <= *(float *)(iVar2 + (int)pfVar16)) {
                    local_5c = 0.0;
                  }
                  else {
                    local_5c = (*pfVar16 - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                  if (*(float *)(iVar17 + (int)pfVar16) <= pfVar16[3]) {
LAB_1001d9a7:
                    fVar4 = 1.0;
                  }
                  else {
                    fVar4 = (pfVar16[3] - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                }
                if (local_50 < local_5c) {
                  local_50 = local_5c;
                }
                if (fVar4 < local_54) {
                  local_54 = fVar4;
                }
                if (local_54 < local_50) goto LAB_1001daa8;
                pfVar16 = pfVar16 + 1;
                param_2 = (float *)((int)param_2 + 1);
              } while ((int)param_2 < 3);
              uVar15 = FUN_1001cdd0(local_30 + 3,local_30,iVar11,piVar10,param_4,fVar3);
              if ((char)uVar15 != '\0') {
                pfVar16 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar16,pfVar1,pfVar18,pfVar16);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,pfVar18,
                             (float *)(param_4 + 0x20));
                *pfVar13 = *pfVar16;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_34 = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_34;
                local_3c = *pfVar13 - *pfVar12;
                local_38 = pfVar13[1] - pfVar12[1];
                local_34 = local_34 - pfVar12[2];
              }
            }
          }
        }
LAB_1001daa8:
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100db0a4);
    }
    param_1 = (float *)*DAT_100d6094;
    if (param_1 != DAT_100d6094) {
      do {
        piVar10 = (int *)param_1[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          pfVar16 = (float *)(piVar10 + 0xcb);
          pfVar18 = local_30 + 6;
          iVar17 = 6;
          do {
            fVar3 = *pfVar16;
            pfVar16 = pfVar16 + 1;
            *pfVar18 = fVar3;
            pfVar18 = pfVar18 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          iVar17 = iVar11 * 0x14;
          fVar3 = *(float *)(&DAT_100d60b0 + iVar17);
          fVar4 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
          fVar5 = ((local_3c * *(float *)(&DAT_100d60a4 + iVar17) +
                   local_38 * *(float *)(&DAT_100d60a8 + iVar17) +
                   local_34 * *(float *)(&DAT_100d60ac + iVar17)) -
                  (local_34 * pfVar12[2] + local_3c * *pfVar12 + local_38 * pfVar12[1])) / fVar4;
          if ((fVar5 <= fVar4 + fVar3) && (-fVar3 <= fVar5)) {
            if (0.0 <= fVar5) {
              if (fVar5 <= fVar4) {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - ((fVar5 * local_3c) / fVar4 + *pfVar12)
                ;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar17) -
                        ((fVar5 * local_38) / fVar4 + pfVar12[1]);
                fVar4 = *(float *)(&DAT_100d60ac + iVar17) -
                        ((fVar5 * local_34) / fVar4 + pfVar12[2]);
              }
              else {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar13;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar13[1];
                fVar4 = *(float *)(&DAT_100d60ac + iVar17) - pfVar13[2];
              }
            }
            else {
              fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar12;
              fVar6 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar12[1];
              fVar4 = *(float *)(&DAT_100d60ac + iVar17) - pfVar12[2];
            }
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) <= fVar3) {
              FUN_1001cb20(pfVar12,pfVar1,(float *)&DAT_100db0c4,local_30);
              FUN_1001cb20(pfVar13,pfVar1,(float *)&DAT_100db0c4,local_30 + 3);
              uVar14 = FUN_1001dd50(local_30,local_30 + 3,iVar11,param_4,local_30 + 6);
              if ((char)uVar14 != '\0') {
                pfVar18 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar18,pfVar1,(float *)&DAT_100db0c4,pfVar18);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,(float *)&DAT_100db0c4
                             ,(float *)(param_4 + 0x20));
                *pfVar13 = *pfVar18;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_34 = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_34;
                local_3c = *pfVar13 - *pfVar12;
                local_38 = pfVar13[1] - pfVar12[1];
                local_34 = local_34 - pfVar12[2];
              }
            }
          }
        }
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100d6094);
    }
  }
  return;
}

/* 1001dd50  FUN_1001dd50  (546 bytes)
 * undefined2 FUN_1001dd50(float * param_1, float * param_2, undefined4 param_3, int param_4, float * param_5)
 * called by: FUN_1001d620
 */
undefined2 __cdecl
FUN_1001dd50(float *param_1,float *param_2,undefined4 param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *local_c;
  float local_8;
  int local_4;
  
  iVar6 = 0;
  iVar7 = (int)param_2 - (int)param_5;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar5 = (int)param_1 - (int)param_5;
  pfVar4 = param_5;
  do {
    if (*(float *)(iVar7 + (int)pfVar4) <= *(float *)(iVar5 + (int)pfVar4)) {
      fVar1 = *(float *)(iVar7 + (int)pfVar4);
      fVar2 = pfVar4[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar5 + (int)pfVar4);
      fVar2 = *pfVar4;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4) - *(float *)(iVar5 + (int)pfVar4);
      if (*(float *)(iVar5 + (int)pfVar4) <= pfVar4[3]) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((pfVar4[3] - *(float *)(iVar5 + (int)pfVar4)) / fVar1);
      }
      if (*pfVar4 <= *(float *)(iVar7 + (int)pfVar4)) goto LAB_1001de4c;
      fVar1 = (*pfVar4 - *(float *)(iVar5 + (int)pfVar4)) / fVar1;
    }
    else {
      fVar1 = *(float *)(iVar5 + (int)pfVar4);
      fVar2 = pfVar4[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4);
      fVar2 = *pfVar4;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4) - *(float *)(iVar5 + (int)pfVar4);
      if (*pfVar4 <= *(float *)(iVar5 + (int)pfVar4)) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((*pfVar4 - *(float *)(iVar5 + (int)pfVar4)) / fVar1);
      }
      if (*(float *)(iVar7 + (int)pfVar4) <= pfVar4[3]) {
LAB_1001de4c:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (pfVar4[3] - *(float *)(iVar5 + (int)pfVar4)) / fVar1;
      }
    }
    if ((float)local_c < (float)param_5) {
      local_c = param_5;
      if (*(float *)(iVar7 + (int)pfVar4) <= *(float *)(iVar5 + (int)pfVar4)) {
        iVar3 = 3;
      }
      else {
        iVar3 = 0;
      }
      local_4 = iVar3 + 1 + iVar6;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    pfVar4 = pfVar4 + 1;
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      *(float **)(param_4 + 0x10) = param_5;
      *(undefined4 *)(param_4 + 0x30) = param_3;
      fVar1 = (*param_2 - *param_1) * (float)param_5 + *param_1;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - param_1[1]) * (float)param_5 + param_1[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - param_1[2]) * (float)param_5 + param_1[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x20) = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x1c + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x10 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x2c) =
           *(float *)(param_4 + 0x14) * *(float *)(param_4 + 0x20) +
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28);
      return (short)CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  } while( true );
}

/* 1001df80  FUN_1001df80  (68 bytes)
 * undefined FUN_1001df80(int param_1, float * param_2)
 * called by: FUN_1001cce0
 */
void __cdecl FUN_1001df80(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + param_1 * 0x40) * 0x14;
    iVar2 = iVar2 + 1;
    *param_2 = (float)(int)*(short *)(*(int *)(DAT_100db0b8 + 0xa4) + 8 + iVar1 * 2);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 1001dfd0  FUN_1001dfd0  (128 bytes)
 * undefined FUN_1001dfd0(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001dfd0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 1001e050  FUN_1001e050  (162 bytes)
 * uint FUN_1001e050(float * param_1, float * param_2, undefined4 param_3, int * param_4, int param_5, float param_6)
 * called by: FUN_1001dfd0, FUN_1001e450, FUN_1001e930
 */
uint __cdecl
FUN_1001e050(float *param_1,float *param_2,undefined4 param_3,int *param_4,int param_5,float param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  DAT_100db0bc = 1;
  uVar4 = FUN_1001e100(param_1,param_2,param_4,param_5,(float *)0x0,0);
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_5 + 0x30) = param_3;
    fVar1 = *(float *)(param_5 + 0x14) - *param_1;
    fVar3 = *(float *)(param_5 + 0x18) - param_1[1];
    fVar2 = *(float *)(param_5 + 0x1c) - param_1[2];
    if (param_6 == 0.0) {
      *(undefined4 *)(param_5 + 0x10) = 0;
    }
    else {
      *(float *)(param_5 + 0x10) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / param_6;
    }
    *param_2 = *(float *)(param_5 + 0x14);
    fVar1 = *(float *)(param_5 + 0x18);
    param_2[1] = fVar1;
    param_2[2] = *(float *)(param_5 + 0x1c);
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}

/* 1001e100  FUN_1001e100  (752 bytes)
 * undefined4 FUN_1001e100(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_1001e050, FUN_1001e100
 */
undefined4 __cdecl
FUN_1001e100(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[6];
    fVar2 = (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + pfVar4[1] * param_2[1] + pfVar4[2] * param_2[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_1001e100(param_1,param_2,(int *)param_3[7],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_1001e2ae;
      param_3 = (int *)param_3[8];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_18 = *param_2 - *param_1;
        local_14 = param_2[1] - param_1[1];
        local_10 = param_2[2] - param_1[2];
        FUN_1001e3f0(&local_18);
        pfVar4 = (float *)param_3[6];
        fVar3 = (pfVar4[3] - (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]))
                / (local_18 * *pfVar4 + local_14 * pfVar4[1] + local_10 * pfVar4[2]);
        local_c = fVar3 * local_18 + *param_1;
        local_8 = fVar3 * local_14 + param_1[1];
        local_4 = fVar3 * local_10 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_1001e100(param_1,&local_c,(int *)param_3[8],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_1001e100(&local_c,param_2,(int *)param_3[7],param_4,(float *)param_3[6],0);
          return uVar5;
        }
        uVar5 = FUN_1001e100(param_1,&local_c,(int *)param_3[7],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_1001e100(&local_c,param_2,(int *)param_3[8],param_4,(float *)param_3[6],1);
        return uVar5;
      }
      param_3 = (int *)param_3[8];
    }
    else {
      param_3 = (int *)param_3[7];
    }
    uVar1 = *param_3;
  }
  if (DAT_100db0bc != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100db0bc = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x20) = *param_5;
    *(float *)(param_4 + 0x24) = param_5[1];
    *(float *)(param_4 + 0x28) = param_5[2];
    *(float *)(param_4 + 0x2c) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x20) = -*param_5;
  *(float *)(param_4 + 0x24) = -param_5[1];
  *(float *)(param_4 + 0x28) = -param_5[2];
  *(float *)(param_4 + 0x2c) = -param_5[3];
  pfVar4 = param_5;
LAB_1001e2ae:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 1001e3f0  FUN_1001e3f0  (91 bytes)
 * float10 FUN_1001e3f0(float * param_1)
 * called by: FUN_1001ce80, FUN_1001e100
 */
float10 __cdecl FUN_1001e3f0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)param_1[2] * (float10)param_1[2] +
               (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
  if (fVar1 == (float10)0.0) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    return (float10)0.0;
  }
  *param_1 = (float)((float10)*param_1 / fVar1);
  param_1[1] = (float)((float10)param_1[1] / fVar1);
  param_1[2] = (float)((float10)param_1[2] / fVar1);
  return fVar1;
}

/* 1001e450  FUN_1001e450  (1245 bytes)
 * undefined FUN_1001e450(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_1001cc60
 */
void __cdecl FUN_1001e450(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  float local_44;
  float local_40;
  float local_3c;
  int *local_38;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [6];
  
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_2[2];
  fVar8 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
               (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8));
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar3);
    local_24 = *param_2 - *param_1;
    local_38 = (int *)*DAT_100db0a4;
    local_20 = param_2[1] - param_1[1];
    local_1c = param_2[2] - param_1[2];
    if (local_38 != DAT_100db0a4) {
      do {
        piVar10 = (int *)local_38[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          iVar13 = iVar11 * 0x14;
          pfVar2 = (float *)(piVar10 + 0x2d5);
          fVar4 = *(float *)(&DAT_100d60b0 + iVar13);
          sVar9 = *(short *)(&DAT_100d60a0 + iVar13);
          fVar5 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
          fVar6 = ((local_24 * *(float *)(&DAT_100d60a4 + iVar13) +
                   local_20 * *(float *)(&DAT_100d60a8 + iVar13) +
                   local_1c * *(float *)(&DAT_100d60ac + iVar13)) -
                  (local_1c * param_1[2] + local_24 * *param_1 + local_20 * param_1[1])) / fVar5;
          if ((fVar6 <= fVar5 + fVar4) && (-fVar4 <= fVar6)) {
            if (0.0 <= fVar6) {
              if (fVar6 <= fVar5) {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - ((fVar6 * local_24) / fVar5 + *param_1)
                ;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar13) -
                        ((fVar6 * local_20) / fVar5 + param_1[1]);
                fVar5 = *(float *)(&DAT_100d60ac + iVar13) -
                        ((fVar6 * local_1c) / fVar5 + param_1[2]);
              }
              else {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - *param_2;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar13) - param_2[1];
                fVar5 = *(float *)(&DAT_100d60ac + iVar13) - param_2[2];
              }
            }
            else {
              fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - *param_1;
              fVar7 = *(float *)(&DAT_100d60a8 + iVar13) - param_1[1];
              fVar5 = *(float *)(&DAT_100d60ac + iVar13) - param_1[2];
            }
            if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) <= fVar4) {
              FUN_1001cb20(param_1,pfVar1,pfVar2,local_18);
              FUN_1001cb20(param_2,pfVar1,pfVar2,local_18 + 3);
              local_3c = 0.0;
              local_40 = 1.0;
              iVar15 = 0;
              piVar10 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar9 * 0x40) * 0x28)
              ;
              piVar14 = piVar10 + 2;
              iVar13 = 0;
              do {
                if (*(float *)((int)local_18 + iVar15 + 0xc) <= *(float *)((int)local_18 + iVar15))
                {
                  fVar4 = (float)(int)*(short *)((int)piVar14 + 6);
                  if ((fVar4 < *(float *)((int)local_18 + iVar15 + 0xc)) ||
                     (fVar5 = (float)(int)(short)*piVar14,
                     *(float *)((int)local_18 + iVar15) < fVar5)) goto LAB_1001e90d;
                  fVar6 = *(float *)((int)local_18 + iVar15 + 0xc) -
                          *(float *)((int)local_18 + iVar15);
                  if (*(float *)((int)local_18 + iVar15) <= fVar4) {
                    local_44 = 0.0;
                  }
                  else {
                    local_44 = (fVar4 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                  if (fVar5 <= *(float *)((int)local_18 + iVar15 + 0xc)) goto LAB_1001e81d;
                  fVar6 = (fVar5 - *(float *)((int)local_18 + iVar15)) / fVar6;
                }
                else {
                  fVar4 = (float)(int)*(short *)((int)piVar14 + 6);
                  if ((fVar4 < *(float *)((int)local_18 + iVar15)) ||
                     (fVar5 = (float)(int)(short)*piVar14,
                     *(float *)((int)local_18 + iVar15 + 0xc) < fVar5)) goto LAB_1001e90d;
                  fVar6 = *(float *)((int)local_18 + iVar15 + 0xc) -
                          *(float *)((int)local_18 + iVar15);
                  if (fVar5 <= *(float *)((int)local_18 + iVar15)) {
                    local_44 = 0.0;
                  }
                  else {
                    local_44 = (fVar5 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                  if (*(float *)((int)local_18 + iVar15 + 0xc) <= fVar4) {
LAB_1001e81d:
                    fVar6 = 1.0;
                  }
                  else {
                    fVar6 = (fVar4 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                }
                if (local_3c < local_44) {
                  local_3c = local_44;
                }
                if (fVar6 < local_40) {
                  local_40 = fVar6;
                }
                if (local_40 < local_3c) goto LAB_1001e90d;
                piVar14 = (int *)((int)piVar14 + 2);
                iVar15 = iVar15 + 4;
                iVar13 = iVar13 + 1;
              } while (iVar13 < 3);
              uVar12 = FUN_1001e050(local_18,local_18 + 3,iVar11,piVar10,param_4,fVar3);
              if ((char)uVar12 != '\0') {
                FUN_1001c9a0((float *)(param_4 + 0x14),pfVar1,pfVar2,(float *)(param_4 + 0x14));
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,pfVar2,
                             (float *)(param_4 + 0x20));
                *param_2 = *(float *)(param_4 + 0x14);
                param_2[1] = *(float *)(param_4 + 0x18);
                local_1c = *(float *)(param_4 + 0x1c);
                param_2[2] = local_1c;
                local_24 = *param_2 - *param_1;
                local_20 = param_2[1] - param_1[1];
                local_1c = local_1c - param_1[2];
              }
            }
          }
        }
LAB_1001e90d:
        local_38 = (int *)*local_38;
      } while (local_38 != DAT_100db0a4);
    }
  }
  return;
}

/* 1001e930  FUN_1001e930  (1908 bytes)
 * undefined FUN_1001e930(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_1001cca0
 */
void __cdecl FUN_1001e930(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float local_4c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [3];
  float local_18 [6];
  
  pfVar12 = param_2;
  pfVar11 = param_1;
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_2[1];
  fVar5 = param_1[1];
  fVar6 = param_2[2];
  fVar7 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar2 = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
               (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar6 - fVar7) * (fVar6 - fVar7));
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar2);
    local_30 = *param_2 - *param_1;
    local_2c = param_2[1] - param_1[1];
    local_28 = param_2[2] - param_1[2];
    param_1 = (float *)*DAT_100db0a4;
    if ((float *)*DAT_100db0a4 != DAT_100db0a4) {
      do {
        piVar9 = (int *)param_1[2];
        iVar10 = *piVar9;
        if (iVar10 != param_3) {
          pfVar1 = (float *)(piVar9 + 0x2d2);
          iVar15 = iVar10 * 0x14;
          pfVar19 = (float *)(piVar9 + 0x2d5);
          fVar3 = *(float *)(&DAT_100d60b0 + iVar15);
          sVar8 = *(short *)(&DAT_100d60a0 + iVar15);
          fVar4 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
          fVar5 = ((local_2c * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_28 * *(float *)(&DAT_100d60ac + iVar15) +
                   local_30 * *(float *)(&DAT_100d60a4 + iVar15)) -
                  (local_28 * pfVar11[2] + local_30 * *pfVar11 + local_2c * pfVar11[1])) / fVar4;
          if ((fVar5 <= fVar4 + fVar3) && (-fVar3 <= fVar5)) {
            if (0.0 <= fVar5) {
              if (fVar5 <= fVar4) {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar5 * local_30) / fVar4 + *pfVar11)
                ;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar5 * local_2c) / fVar4 + pfVar11[1]);
                fVar4 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar5 * local_28) / fVar4 + pfVar11[2]);
              }
              else {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - *param_2;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar15) - param_2[1];
                fVar4 = *(float *)(&DAT_100d60ac + iVar15) - param_2[2];
              }
            }
            else {
              fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar11;
              fVar6 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar11[1];
              fVar4 = *(float *)(&DAT_100d60ac + iVar15) - pfVar11[2];
            }
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) <= fVar3) {
              FUN_1001cb20(pfVar11,pfVar1,pfVar19,local_24);
              FUN_1001cb20(param_2,pfVar1,pfVar19,local_18);
              local_44 = 0.0;
              local_48 = 1.0;
              iVar17 = 0;
              piVar9 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                              *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar8 * 0x40) * 0x28);
              piVar16 = piVar9 + 2;
              iVar15 = 0;
              do {
                if (*(float *)((int)local_18 + iVar17) <= *(float *)((int)local_24 + iVar17)) {
                  fVar3 = (float)(int)*(short *)((int)piVar16 + 6);
                  if ((fVar3 < *(float *)((int)local_18 + iVar17)) ||
                     (fVar4 = (float)(int)(short)*piVar16,
                     *(float *)((int)local_24 + iVar17) < fVar4)) goto LAB_1001edfa;
                  fVar5 = *(float *)((int)local_18 + iVar17) - *(float *)((int)local_24 + iVar17);
                  if (*(float *)((int)local_24 + iVar17) <= fVar3) {
                    local_4c = 0.0;
                  }
                  else {
                    local_4c = (fVar3 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                  if (fVar4 <= *(float *)((int)local_18 + iVar17)) goto LAB_1001ecfd;
                  fVar5 = (fVar4 - *(float *)((int)local_24 + iVar17)) / fVar5;
                }
                else {
                  fVar3 = (float)(int)*(short *)((int)piVar16 + 6);
                  if ((fVar3 < *(float *)((int)local_24 + iVar17)) ||
                     (fVar4 = (float)(int)(short)*piVar16,
                     *(float *)((int)local_18 + iVar17) < fVar4)) goto LAB_1001edfa;
                  fVar5 = *(float *)((int)local_18 + iVar17) - *(float *)((int)local_24 + iVar17);
                  if (fVar4 <= *(float *)((int)local_24 + iVar17)) {
                    local_4c = 0.0;
                  }
                  else {
                    local_4c = (fVar4 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                  if (*(float *)((int)local_18 + iVar17) <= fVar3) {
LAB_1001ecfd:
                    fVar5 = 1.0;
                  }
                  else {
                    fVar5 = (fVar3 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                }
                if (local_44 < local_4c) {
                  local_44 = local_4c;
                }
                if (fVar5 < local_48) {
                  local_48 = fVar5;
                }
                if (local_48 < local_44) goto LAB_1001edfa;
                piVar16 = (int *)((int)piVar16 + 2);
                iVar17 = iVar17 + 4;
                iVar15 = iVar15 + 1;
              } while (iVar15 < 3);
              uVar14 = FUN_1001e050(local_24,local_18,iVar10,piVar9,param_4,fVar2);
              if ((char)uVar14 != '\0') {
                pfVar18 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar18,pfVar1,pfVar19,pfVar18);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,pfVar19,
                             (float *)(param_4 + 0x20));
                *param_2 = *pfVar18;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_28 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_28;
                local_30 = *param_2 - *pfVar11;
                local_2c = param_2[1] - pfVar11[1];
                local_28 = local_28 - pfVar11[2];
              }
            }
          }
        }
LAB_1001edfa:
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100db0a4);
    }
    param_1 = (float *)*DAT_100d6094;
    if (param_1 != DAT_100d6094) {
      do {
        iVar10 = *(int *)param_1[2];
        if (iVar10 != param_3) {
          pfVar1 = (float *)((int *)param_1[2] + 0x2d2);
          pfVar19 = local_18;
          param_2 = (float *)0x6;
          do {
            lVar20 = __ftol();
            *(short *)pfVar19 = (short)lVar20;
            pfVar19 = (float *)((int)pfVar19 + 2);
            param_2 = (float *)((int)param_2 + -1);
          } while (param_2 != (float *)0x0);
          iVar15 = iVar10 * 0x14;
          fVar2 = *(float *)(&DAT_100d60b0 + iVar15);
          fVar3 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
          fVar4 = ((local_30 * *(float *)(&DAT_100d60a4 + iVar15) +
                   local_2c * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_28 * *(float *)(&DAT_100d60ac + iVar15)) -
                  (local_28 * pfVar11[2] + local_30 * *pfVar11 + local_2c * pfVar11[1])) / fVar3;
          if ((fVar4 <= fVar3 + fVar2) && (-fVar2 <= fVar4)) {
            if (0.0 <= fVar4) {
              if (fVar4 <= fVar3) {
                fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar4 * local_30) / fVar3 + *pfVar11)
                ;
                fVar5 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar4 * local_2c) / fVar3 + pfVar11[1]);
                fVar3 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar4 * local_28) / fVar3 + pfVar11[2]);
              }
              else {
                fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar12;
                fVar5 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar12[1];
                fVar3 = *(float *)(&DAT_100d60ac + iVar15) - pfVar12[2];
              }
            }
            else {
              fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar11;
              fVar5 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar11[1];
              fVar3 = *(float *)(&DAT_100d60ac + iVar15) - pfVar11[2];
            }
            if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) <= fVar2) {
              FUN_1001cb20(pfVar11,pfVar1,(float *)&DAT_100db0d0,local_18 + 3);
              FUN_1001cb20(pfVar12,pfVar1,(float *)&DAT_100db0d0,local_24);
              uVar13 = FUN_1001f0b0(local_18 + 3,local_24,iVar10,param_4,(short *)local_18);
              if ((char)uVar13 != '\0') {
                pfVar19 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar19,pfVar1,(float *)&DAT_100db0d0,pfVar19);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,(float *)&DAT_100db0d0
                             ,(float *)(param_4 + 0x20));
                *pfVar12 = *pfVar19;
                pfVar12[1] = *(float *)(param_4 + 0x18);
                local_28 = *(float *)(param_4 + 0x1c);
                pfVar12[2] = local_28;
                local_30 = *pfVar12 - *pfVar11;
                local_2c = pfVar12[1] - pfVar11[1];
                local_28 = local_28 - pfVar11[2];
              }
            }
          }
        }
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100d6094);
    }
  }
  return;
}

/* 1001f0b0  FUN_1001f0b0  (620 bytes)
 * undefined2 FUN_1001f0b0(float * param_1, float * param_2, undefined4 param_3, int param_4, short * param_5)
 * called by: FUN_1001e930
 */
undefined2 __cdecl
FUN_1001f0b0(float *param_1,float *param_2,undefined4 param_3,int param_4,short *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  float *local_c;
  float local_8;
  int local_4;
  
  pfVar4 = param_1;
  iVar8 = 0;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar7 = (int)param_2 - (int)param_1;
  pfVar6 = param_1;
  psVar9 = param_5;
  do {
    iVar5 = (int)psVar9[3];
    if (*(float *)(iVar7 + (int)pfVar6) <= *pfVar6) {
      fVar2 = (float)iVar5;
      fVar1 = *(float *)(iVar7 + (int)pfVar6);
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar9;
      fVar1 = *pfVar6;
      if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
        return (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
               (ushort)(fVar3 == fVar1) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar6) - *pfVar6;
      if (*pfVar6 <= fVar2) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar2 - *pfVar6) / fVar1);
      }
      if (fVar3 <= *(float *)(iVar7 + (int)pfVar6)) goto LAB_1001f1f0;
      fVar1 = (fVar3 - *pfVar6) / fVar1;
    }
    else {
      fVar2 = (float)iVar5;
      fVar1 = *pfVar6;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar9;
      fVar1 = *(float *)(iVar7 + (int)pfVar6);
      if (fVar1 < fVar3) {
        return (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
               (ushort)(fVar1 == fVar3) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar6) - *pfVar6;
      if (fVar3 <= *pfVar6) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar3 - *pfVar6) / fVar1);
      }
      if (*(float *)(iVar7 + (int)pfVar6) <= fVar2) {
LAB_1001f1f0:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (fVar2 - *pfVar6) / fVar1;
      }
    }
    param_5 = (short *)(float)iVar5;
    if ((float)local_c < (float)param_1) {
      local_c = param_1;
      if (*(float *)(iVar7 + (int)pfVar6) <= *pfVar6) {
        iVar5 = 3;
      }
      else {
        iVar5 = 0;
      }
      local_4 = iVar5 + 1 + iVar8;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    psVar9 = psVar9 + 1;
    pfVar6 = pfVar6 + 1;
    iVar8 = iVar8 + 1;
    if (2 < iVar8) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = (short *)local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      *(short **)(param_4 + 0x10) = param_5;
      *(undefined4 *)(param_4 + 0x30) = param_3;
      fVar1 = (*param_2 - *pfVar4) * (float)param_5 + *pfVar4;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - pfVar4[1]) * (float)param_5 + pfVar4[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - pfVar4[2]) * (float)param_5 + pfVar4[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x20) = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x1c + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x10 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x2c) =
           *(float *)(param_4 + 0x14) * *(float *)(param_4 + 0x20) +
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28);
      return (short)CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  } while( true );
}

/* 1001f320  FUN_1001f320  (10 bytes)
 * undefined FUN_1001f320()
 */
void FUN_1001f320(void)

{
  FUN_1001f330();
  FUN_1001f340();
  return;
}

/* 1001f330  FUN_1001f330  (10 bytes)
 * undefined FUN_1001f330(void)
 * called by: FUN_1001f320
 */
void FUN_1001f330(void)

{
  FUN_1001f370((undefined4 *)&DAT_100db0e0);
  return;
}

/* 1001f340  FUN_1001f340  (12 bytes)
 * undefined FUN_1001f340(void)
 * called by: FUN_1001f320
 */
void FUN_1001f340(void)

{
  FUN_1006af63(0x1001f350);
  return;
}

/* 1001f350  FUN_1001f350  (10 bytes)
 * undefined FUN_1001f350()
 */
void FUN_1001f350(void)

{
  thunk_FUN_10030130((undefined4 *)&DAT_100db0e0);
  return;
}

/* 1001f370  FUN_1001f370  (18 bytes)
 * undefined4 * FUN_1001f370(undefined4 * param_1)
 * called by: FUN_1001f330
 */
undefined4 * __fastcall FUN_1001f370(undefined4 *param_1)

{
  FUN_100300b0(param_1);
  *param_1 = &PTR_FUN_1007cd04;
  return param_1;
}

/* 1001f390  FUN_1001f390  (30 bytes)
 * undefined4 * FUN_1001f390(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001f390(void *this,byte_conflict param_1)

{
  thunk_FUN_10030130(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001f3b0  FUN_1001f3b0  (21 bytes)
 * undefined FUN_1001f3b0()
 */
void FUN_1001f3b0(undefined4 param_1,undefined4 param_2)

{
  FUN_10032540(param_1,param_2);
  return;
}

/* 1001f3d0  FUN_1001f3d0  (16 bytes)
 * undefined FUN_1001f3d0()
 */
void FUN_1001f3d0(undefined4 param_1)

{
  FUN_10031ae0(param_1);
  return;
}

/* 1001f3e0  FUN_1001f3e0  (10 bytes)
 * undefined FUN_1001f3e0(void)
 * called by: HUD_GetStudioModelInterface
 */
void FUN_1001f3e0(void)

{
  FUN_10030030(0x100db0e0);
  return;
}

/* 1001f430  FUN_1001f430  (26 bytes)
 * undefined FUN_1001f430()
 */
void FUN_1001f430(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001f4a0(&DAT_100cfac4,param_1,param_2,param_3);
  return;
}

/* 1001f450  FUN_1001f450  (70 bytes)
 * undefined FUN_1001f450()
 */
undefined4 __fastcall FUN_1001f450(int param_1)

{
  DWORD DVar1;
  
  (*gEngfuncs.pfnHookUserMsg)(s_Geiger_1009370c,FUN_1001f430);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10020a40(&DAT_100cf920,param_1);
  DVar1 = FUN_1006c07c((int *)0x0);
  FUN_1006c04d(DVar1);
  return 1;
}

/* 1001f4a0  FUN_1001f4a0  (49 bytes)
 * undefined FUN_1001f4a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001f430
 */
void __thiscall FUN_1001f4a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x14) = uVar1 << 2;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1001f4e0  FUN_1001f4e0  (437 bytes)
 * undefined FUN_1001f4e0()
 */
undefined4 __fastcall FUN_1001f4e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fStack_108;
  int iStack_104;
  char acStack_100 [256];
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (999 < iVar1) {
    return 1;
  }
  if (iVar1 < 1) {
    return 1;
  }
  if (800 < iVar1) {
    uVar4 = 0;
    goto LAB_1001f60c;
  }
  if (iVar1 < 0x259) {
    if (iVar1 < 0x1f5) {
      if (400 < iVar1) {
        uVar4 = 8;
        fStack_108 = 0.6;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (300 < iVar1) {
        uVar4 = 8;
        fStack_108 = 0.7;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (200 < iVar1) {
        uVar4 = 0x1c;
        fStack_108 = 0.78;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (0x96 < iVar1) {
        uVar4 = 0x28;
        fStack_108 = 0.8;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (100 < iVar1) {
        uVar4 = 0x3c;
        fStack_108 = 0.85;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (0x4b < iVar1) {
        uVar4 = 0x50;
        fStack_108 = 0.9;
        iStack_104 = 3;
        goto LAB_1001f60c;
      }
      if (iVar1 < 0x33) {
        uVar4 = 0x5f;
        fStack_108 = 1.0;
      }
      else {
        uVar4 = 0x5a;
        fStack_108 = 0.95;
      }
    }
    else {
      uVar4 = 4;
      fStack_108 = 0.5;
    }
  }
  else {
    uVar4 = 2;
    fStack_108 = 0.4;
  }
  iStack_104 = 2;
LAB_1001f60c:
  uVar2 = _rand();
  uVar3 = _rand();
  if ((uVar4 <= (uVar3 & 0x7f)) && (uVar3 = _rand(), uVar4 <= (uVar3 & 0x7f))) {
    return 1;
  }
  _rand();
  if (2 < iStack_104) {
    _rand();
  }
  FUN_1006ac7a(acStack_100,(byte_conflict *)s_player_geiger_d_wav_10093714);
  (*gEngfuncs.pfnPlaySoundByName)
            (acStack_100,(float)(uVar2 & 0x7f) * fStack_108 * 0.003921569 + 0.25);
  return 1;
}

/* 1001f6a0  FUN_1001f6a0  (26 bytes)
 * undefined FUN_1001f6a0()
 */
void FUN_1001f6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001f7f0(&DAT_100cf9c4,param_1,param_2,param_3);
  return;
}

/* 1001f6c0  FUN_1001f6c0  (26 bytes)
 * undefined FUN_1001f6c0()
 */
void FUN_1001f6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001f830(&DAT_100cf9c4,param_1,param_2,param_3);
  return;
}

/* 1001f6e0  FUN_1001f6e0  (111 bytes)
 * undefined FUN_1001f6e0()
 */
undefined4 __fastcall FUN_1001f6e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  (*gEngfuncs.pfnHookUserMsg)(s_Health_10093760,FUN_1001f6a0);
  (*gEngfuncs.pfnHookUserMsg)(s_Damage_10093758,FUN_1001f6c0);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DAT_100df190 = 0;
  DAT_100df194 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10020a40(&DAT_100cf920,param_1);
  return 1;
}

/* 1001f750  FUN_1001f750  (37 bytes)
 * undefined FUN_1001f750()
 */
void __fastcall FUN_1001f750(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  iVar2 = 0xc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 1001f780  FUN_1001f780  (105 bytes)
 * undefined4 FUN_1001f780(int param_1)
 */
undefined4 __fastcall FUN_1001f780(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_10020670(&DAT_100cf920,s_dmg_bio_10093770);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  iVar1 = FUN_10020670(&DAT_100cf920,s_cross_10093768);
  *(int *)(param_1 + 0x1c) = iVar1;
  piVar2 = (int *)(*(int *)(param_1 + 0x18) * 0x10 + DAT_100cf990);
  DAT_100df190 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x18) * 0x10 + DAT_100cf990;
  DAT_100df194 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  return 1;
}

/* 1001f7f0  FUN_1001f7f0  (61 bytes)
 * undefined4 FUN_1001f7f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001f6a0
 */
undefined4 __thiscall
FUN_1001f7f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  if (uVar1 != *(uint *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x30) = 0x42c80000;
    *(uint *)((int)this + 0x14) = uVar1;
  }
  return 1;
}

/* 1001f830  FUN_1001f830  (151 bytes)
 * undefined4 FUN_1001f830(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001f6c0
 */
undefined4 __thiscall
FUN_1001f830(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_c [3];
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029aa0();
  pfVar4 = local_c;
  iVar5 = 3;
  do {
    fVar6 = FUN_10029b60();
    *pfVar4 = (float)fVar6;
    pfVar4 = pfVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_1001fb90(this,DAT_100cf944,uVar3);
  if ((0 < (int)uVar2) || (0 < (int)uVar1)) {
    FUN_1001f8e0(this,local_c[0],local_c[1],local_c[2]);
  }
  return 1;
}

/* 1001f8d0  FUN_1001f8d0  (8 bytes)
 * undefined FUN_1001f8d0()
 */
undefined4 FUN_1001f8d0(void)

{
  return 1;
}

/* 1001f8e0  FUN_1001f8e0  (653 bytes)
 * undefined FUN_1001f8e0(float param_1, float param_2, float param_3)
 * called by: FUN_1001f830
 */
void __thiscall FUN_1001f8e0(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  float local_c [3];
  
  if (((param_1 == 0.0) && (param_2 == 0.0)) && (param_3 == 0.0)) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    return;
  }
  local_48 = DAT_100cf958;
  fVar1 = param_1 - DAT_100cf958;
  local_44 = DAT_100cf95c;
  local_40 = DAT_100cf960;
  param_2 = param_2 - DAT_100cf95c;
  local_3c = DAT_100cf964;
  local_38 = DAT_100cf968;
  local_34 = DAT_100cf96c;
  param_3 = param_3 - DAT_100cf960;
  fVar3 = SQRT(fVar1 * fVar1 + param_2 * param_2 + param_3 * param_3);
  if (fVar3 == 0.0) {
    puVar4 = (undefined4 *)FUN_1001fb70(local_24,0,0,1);
  }
  else {
    fVar2 = 1.0 / fVar3;
    puVar4 = (undefined4 *)FUN_10009190(local_18,fVar2 * fVar1,param_2 * fVar2,param_3 * fVar2);
  }
  FUN_10002610(&param_1,puVar4);
  (*gEngfuncs.pfnAngleVectors)(&local_3c,&local_30,&local_48,local_c);
  fVar2 = param_1 * local_48 + local_40 * param_3 + local_44 * param_2;
  fVar1 = param_1 * local_30 + fStack_28 * param_3 + fStack_2c * param_2;
  if (50.0 < fVar3) {
    if (fVar1 <= 0.0) {
      fVar1 = -fVar1;
      if (0.3 < fVar1) {
        if (fVar1 < *(float *)((int)this + 0x24)) {
          fVar1 = *(float *)((int)this + 0x24);
        }
        *(float *)((int)this + 0x24) = fVar1;
      }
    }
    else if (0.3 < fVar1) {
      if (*(float *)((int)this + 0x20) <= fVar1) {
        *(float *)((int)this + 0x20) = fVar1;
      }
      else {
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x20);
      }
    }
    if (fVar2 <= 0.0) {
      fVar2 = -fVar2;
      if (0.3 < fVar2) {
        if (fVar2 < *(float *)((int)this + 0x28)) {
          fVar2 = *(float *)((int)this + 0x28);
        }
        *(float *)((int)this + 0x28) = fVar2;
        return;
      }
    }
    else if (0.3 < fVar2) {
      if (*(float *)((int)this + 0x2c) <= fVar2) {
        *(float *)((int)this + 0x2c) = fVar2;
        return;
      }
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
      return;
    }
    return;
  }
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  return;
}

/* 1001fb70  FUN_1001fb70  (25 bytes)
 * undefined FUN_1001fb70(int param_1, int param_2, int param_3)
 * called by: FUN_1001f8e0, FUN_1003bb00, FUN_1003f090, FUN_100481b0, FUN_10050080, FUN_10051270, FUN_10052720, FUN_10052c80, FUN_10057790
 */
void __thiscall FUN_1001fb70(void *this,int param_1,int param_2,int param_3)

{
  *(float *)this = (float)param_1;
  *(float *)((int)this + 4) = (float)param_2;
  *(float *)((int)this + 8) = (float)param_3;
  return;
}

/* 1001fb90  FUN_1001fb90  (214 bytes)
 * undefined FUN_1001fb90(float param_1, uint param_2)
 * called by: FUN_1001f830
 */
void __thiscall FUN_1001fb90(void *this,float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  
  uVar1 = *(uint *)((int)this + 0xfc);
  iVar6 = 0;
  puVar5 = &DAT_10093728;
  pfVar8 = (float *)((int)this + 0x40);
  do {
    if (((*(uint *)((int)this + 0xfc) & *puVar5) != 0) &&
       (pfVar8[-1] = param_1 + 2.0, *pfVar8 == 0.0)) {
      *pfVar8 = param_1;
    }
    if ((*puVar5 & ~uVar1 & param_2) != 0) {
      pfVar8[1] = (float)((int)(DAT_100df194 + (DAT_100df194 >> 0x1f & 7U)) >> 3);
      iVar3 = DAT_100df190;
      iVar2 = DAT_100d590c;
      pfVar8[-1] = param_1 + 2.0;
      iVar7 = 0;
      pfVar8[2] = (float)(iVar2 + iVar3 * -2);
      piVar4 = (int *)((int)this + 0x48);
      do {
        if ((iVar7 != iVar6) && (*piVar4 != 0)) {
          *piVar4 = *piVar4 - DAT_100df190;
        }
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar7 < 0xc);
    }
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + 1;
    pfVar8 = pfVar8 + 4;
  } while ((int)puVar5 < 0x10093758);
  *(uint *)((int)this + 0xfc) = *(uint *)((int)this + 0xfc) | param_2;
  return;
}

/* 1001fc70  FUN_1001fc70  (10 bytes)
 * undefined FUN_1001fc70()
 */
void FUN_1001fc70(void)

{
  FUN_1001fc80();
  FUN_1001fc90();
  return;
}

/* 1001fc80  FUN_1001fc80  (10 bytes)
 * undefined FUN_1001fc80(void)
 * called by: FUN_1001fc70
 */
void FUN_1001fc80(void)

{
  FUN_1001fcc0((undefined4 *)&DAT_100df198);
  return;
}

/* 1001fc90  FUN_1001fc90  (12 bytes)
 * undefined FUN_1001fc90(void)
 * called by: FUN_1001fc70
 */
void FUN_1001fc90(void)

{
  FUN_1006af63(0x1001fca0);
  return;
}

/* 1001fca0  FUN_1001fca0  (10 bytes)
 * undefined FUN_1001fca0()
 */
void FUN_1001fca0(void)

{
  FUN_1001fcb0((undefined4 *)&DAT_100df198);
  return;
}

/* 1001fcb0  FUN_1001fcb0  (7 bytes)
 * undefined FUN_1001fcb0(undefined4 * param_1)
 * called by: FUN_1001fca0, FUN_1001fd90
 */
void __fastcall FUN_1001fcb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007cd88;
  return;
}

/* 1001fcc0  FUN_1001fcc0  (9 bytes)
 * undefined FUN_1001fcc0(undefined4 * param_1)
 * called by: FUN_1001fc80
 */
void __fastcall FUN_1001fcc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007cd9c;
  return;
}

/* 1001fcd0  FUN_1001fcd0  (88 bytes)
 * undefined FUN_1001fcd0()
 */
void FUN_1001fcd0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_2[2] = 0xff;
  param_2[1] = 0xff;
  *param_2 = 0xff;
  if ((-1 < (int)param_1) && (param_1 < 0x41)) {
    iVar1 = (int)(short)(&DAT_101901fc)[param_1 * 0x10];
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = iVar1 % DAT_10096970;
    *param_2 = (&DAT_10096974)[iVar1 * 3];
    param_2[1] = (&DAT_10096978)[iVar1 * 3];
    param_2[2] = (&DAT_1009697c)[iVar1 * 3];
  }
  return;
}

/* 1001fd30  FUN_1001fd30  (11 bytes)
 * undefined FUN_1001fd30()
 */
void FUN_1001fd30(void)

{
  FUN_10064790(DAT_100d5cb0);
  return;
}

/* 1001fd40  FUN_1001fd40  (19 bytes)
 * undefined FUN_1001fd40()
 */
int FUN_1001fd40(void)

{
  return DAT_100d590c - (DAT_100cf988 * 3 + 6);
}

/* 1001fd60  FUN_1001fd60  (33 bytes)
 * undefined FUN_1001fd60()
 */
uint FUN_1001fd60(void)

{
  char cVar1;
  
  if ((DAT_100d5cb0 != 0) && (*(int **)(DAT_100d5cb0 + 0xaa8) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(DAT_100d5cb0 + 0xaa8) + 0x28))();
    return (uint)(cVar1 == '\0');
  }
  return DAT_100d5cb0 & 0xffffff00;
}

/* 1001fd90  FUN_1001fd90  (30 bytes)
 * undefined4 * FUN_1001fd90(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001fd90(void *this,byte_conflict param_1)

{
  FUN_1001fcb0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001fdb0  FUN_1001fdb0  (29 bytes)
 * undefined FUN_1001fdb0()
 */
void FUN_1001fdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100209c0(0x100cf920,param_1,param_2,param_3);
  return;
}

/* 1001fdd0  FUN_1001fdd0  (29 bytes)
 * undefined FUN_1001fdd0()
 */
void FUN_1001fdd0(void)

{
  FUN_100219a0((undefined4 *)&DAT_100cf920);
  return;
}

/* 1001fdf0  FUN_1001fdf0  (34 bytes)
 * undefined FUN_1001fdf0()
 */
undefined4 FUN_1001fdf0(void)

{
  FUN_100219e0((undefined4 *)&DAT_100cf920);
  return 1;
}

/* 1001fe20  FUN_1001fe20  (29 bytes)
 * undefined FUN_1001fe20()
 */
void FUN_1001fe20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10049570(0x100cf920,param_1,param_2,param_3);
  return;
}

/* 1001fe40  FUN_1001fe40  (29 bytes)
 * undefined FUN_1001fe40()
 */
void FUN_1001fe40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10021a40(0x100cf920,param_1,param_2,param_3);
  return;
}

/* 1001fe60  FUN_1001fe60  (29 bytes)
 * undefined FUN_1001fe60()
 */
void FUN_1001fe60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10021a10(0x100cf920,param_1,param_2,param_3);
  return;
}

/* 1001fe80  FUN_1001fe80  (16 bytes)
 * undefined FUN_1001fe80()
 */
void FUN_1001fe80(void)

{
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_100635e0(DAT_100d5cb0);
    return;
  }
  return;
}

/* 1001fe90  FUN_1001fe90  (16 bytes)
 * undefined FUN_1001fe90(void)
 * called by: FUN_10025f40
 */
void FUN_1001fe90(void)

{
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_100637a0(DAT_100d5cb0);
    return;
  }
  return;
}

/* 1001fea0  FUN_1001fea0  (16 bytes)
 * undefined FUN_1001fea0()
 */
void FUN_1001fea0(void)

{
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_100636a0(DAT_100d5cb0);
    return;
  }
  return;
}

/* 1001feb0  FUN_1001feb0  (16 bytes)
 * undefined FUN_1001feb0()
 */
void FUN_1001feb0(void)

{
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_100636d0(DAT_100d5cb0);
    return;
  }
  return;
}

/* 1001fec0  FUN_1001fec0  (16 bytes)
 * undefined FUN_1001fec0()
 */
void FUN_1001fec0(void)

{
  if (DAT_100d5cb0 != 0) {
    FUN_10063590(DAT_100d5cb0);
    return;
  }
  return;
}

/* 1001fed0  FUN_1001fed0  (34 bytes)
 * undefined FUN_1001fed0()
 */
undefined4 FUN_1001fed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064da0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001ff00  FUN_1001ff00  (34 bytes)
 * undefined FUN_1001ff00()
 */
undefined4 FUN_1001ff00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064df0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001ff30  FUN_1001ff30  (34 bytes)
 * undefined FUN_1001ff30()
 */
undefined4 FUN_1001ff30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064ea0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001ff60  FUN_1001ff60  (34 bytes)
 * undefined FUN_1001ff60()
 */
undefined4 FUN_1001ff60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064ed0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001ff90  FUN_1001ff90  (34 bytes)
 * undefined FUN_1001ff90()
 */
undefined4 FUN_1001ff90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064f00(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001ffc0  FUN_1001ffc0  (34 bytes)
 * undefined FUN_1001ffc0()
 */
undefined4 FUN_1001ffc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064f60(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 1001fff0  FUN_1001fff0  (34 bytes)
 * undefined FUN_1001fff0()
 */
undefined4 FUN_1001fff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10064ff0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020020  FUN_10020020  (34 bytes)
 * undefined FUN_10020020()
 */
undefined4 FUN_10020020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10065020(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020050  FUN_10020050  (34 bytes)
 * undefined FUN_10020050()
 */
undefined4 FUN_10020050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10065050(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020080  FUN_10020080  (34 bytes)
 * undefined FUN_10020080()
 */
undefined4 FUN_10020080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10065090(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 100200b0  FUN_100200b0  (34 bytes)
 * undefined FUN_100200b0()
 */
undefined4 FUN_100200b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_10065120(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 100200e0  FUN_100200e0  (34 bytes)
 * undefined FUN_100200e0()
 */
undefined4 FUN_100200e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_100651c0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020110  FUN_10020110  (34 bytes)
 * undefined FUN_10020110()
 */
undefined4 FUN_10020110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != 0) {
    uVar1 = FUN_10065250(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020140  FUN_10020140  (34 bytes)
 * undefined FUN_10020140()
 */
undefined4 FUN_10020140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100d5cb0 != (void *)0x0) {
    uVar1 = FUN_100653a0(DAT_100d5cb0,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* 10020170  FUN_10020170  (1048 bytes)
 * undefined FUN_10020170(int * param_1)
 * called by: HUD_Init
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020170(int *param_1)

{
  cvar_s *pcVar1;
  LPVOID pvVar2;
  int *piVar3;
  char acStack_10 [16];
  
  (*gEngfuncs.pfnHookUserMsg)(&DAT_10093960,FUN_1001fdb0);
  (*gEngfuncs.pfnHookUserMsg)(s_ResetHUD_10093954,FUN_1001fdd0);
  (*gEngfuncs.pfnHookUserMsg)(s_GameMode_10093948,FUN_1001fe60);
  (*gEngfuncs.pfnHookUserMsg)(s_InitHUD_10093940,FUN_1001fdf0);
  (*gEngfuncs.pfnHookUserMsg)(s_SetFOV_10093938,FUN_1001fe20);
  (*gEngfuncs.pfnHookUserMsg)(s_Concuss_10093930,FUN_1001fe40);
  (*gEngfuncs.pfnAddCommand)(s__commandmenu_10093920,FUN_1001fe80);
  (*gEngfuncs.pfnAddCommand)(s__commandmenu_10093910,FUN_1001fea0);
  (*gEngfuncs.pfnAddCommand)(s_ForceCloseCommandMenu_100938f8,FUN_1001feb0);
  (*gEngfuncs.pfnAddCommand)(s_special_100938f0,FUN_1001fe90);
  (*gEngfuncs.pfnAddCommand)(s_togglebrowser_100938e0,FUN_1001fec0);
  (*gEngfuncs.pfnHookUserMsg)(s_ValClass_100938d4,FUN_1001fed0);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamNames_100938c8,FUN_1001ff00);
  (*gEngfuncs.pfnHookUserMsg)(s_Feign_100938c0,FUN_1001ff30);
  (*gEngfuncs.pfnHookUserMsg)(s_Detpack_100938b8,FUN_1001ff60);
  (*gEngfuncs.pfnHookUserMsg)(&DAT_100938b0,FUN_1001ffc0);
  (*gEngfuncs.pfnHookUserMsg)(s_BuildSt_100938a8,FUN_1001fff0);
  (*gEngfuncs.pfnHookUserMsg)(s_RandomPC_1009389c,FUN_10020020);
  (*gEngfuncs.pfnHookUserMsg)(s_ServerName_10093890,FUN_10020050);
  (*gEngfuncs.pfnHookUserMsg)(s_ScoreInfo_10093884,FUN_10020080);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamScore_10093878,FUN_100200b0);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamInfo_1009386c,FUN_100200e0);
  (*gEngfuncs.pfnHookUserMsg)(s_Spectator_10093860,FUN_10020110);
  (*gEngfuncs.pfnHookUserMsg)(s_AllowSpec_10093854,FUN_10020140);
  (*gEngfuncs.pfnHookUserMsg)(s_VGUIMenu_10093848,FUN_1001ff90);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_classautokill_10093834,&DAT_10092c08,3);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_takesshots_10093824,&DAT_10092bf4,1);
  DAT_100987ac = (*gEngfuncs.pfnRegisterVariable)(s_r_paintball_10093818,&DAT_10092bf4,1);
  param_1[2] = 0;
  param_1[0x16] = 0;
  (*gEngfuncs.pfnRegisterVariable)(s_zoom_sensitivity_ratio_100937fc,&DAT_10093814,0);
  _DAT_100df19c = (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_100937f4,&DAT_10092bf4,1);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_start_100937e4,&DAT_10092bf4,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_end_100937d0,&DAT_100937dc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_red_100937c0,&DAT_100937cc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_green_100937b0,&DAT_100937cc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_blue_100937a4,&DAT_100937cc,0);
  FUN_1006ac7a(acStack_10,&DAT_100937a0);
  pcVar1 = (*gEngfuncs.pfnRegisterVariable)(s_default_fov_10093794,acStack_10,0);
  param_1[0x1e] = (int)pcVar1;
  pcVar1->value = 80.0;
  pcVar1 = (*gEngfuncs.pfnRegisterVariable)(s_hud_capturemouse_10093780,&DAT_10092c08,1);
  param_1[0x19] = (int)pcVar1;
  DAT_100df1a0 = (*gEngfuncs.pfnGetCvarPointer)(s_cl_lw_10093778);
  pvVar2 = (LPVOID)*param_1;
  param_1[3] = 0;
  if (pvVar2 != (LPVOID)0x0) {
    do {
      *param_1 = *(int *)((int)pvVar2 + 4);
      FUN_1006c158(pvVar2);
      pvVar2 = (LPVOID)*param_1;
    } while (pvVar2 != (LPVOID)0x0);
    *param_1 = 0;
  }
  param_1[9] = 0x3f800000;
  (**(code **)(param_1[0x1f] + 4))();
  (**(code **)(param_1[0x29] + 4))();
  (**(code **)(param_1[0x69] + 4))();
  (**(code **)(param_1[0x7b] + 4))();
  (**(code **)(param_1[0x6f] + 4))();
  (**(code **)(param_1[0x82] + 4))();
  (**(code **)(param_1[0x92] + 4))();
  (**(code **)(param_1[0xcc] + 4))();
  (**(code **)(param_1[0x15c] + 4))();
  (**(code **)(param_1[0x170] + 4))();
  (**(code **)(param_1[0x17b] + 4))();
  (**(code **)(param_1[0x180] + 4))();
  piVar3 = (int *)FUN_10017570();
  (**(code **)(*piVar3 + 0x1c))(&DAT_100df198,&DAT_100d5cb0);
  (**(code **)(param_1[0x1b6] + 4))();
  (**(code **)(param_1[0x4e0] + 4))();
  (**(code **)(param_1[0x12ab] + 4))();
  (**(code **)(param_1[0x162] + 4))();
  (**(code **)(param_1[0x167] + 4))();
  FUN_10022b80();
  FUN_100219a0(param_1);
  return;
}

/* 10020590  FUN_10020590  (220 bytes)
 * undefined FUN_10020590(int * param_1)
 * called by: FUN_1001a990
 */
void __fastcall FUN_10020590(int *param_1)

{
  LPVOID pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_10077a8b;
  local_c = ExceptionList;
  local_4 = 0x10;
  ExceptionList = &local_c;
  FUN_1006ad4c((LPVOID)param_1[0x1b]);
  FUN_1006ad4c((LPVOID)param_1[0x1c]);
  FUN_1006ad4c((LPVOID)param_1[0x1d]);
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    do {
      *param_1 = *(int *)((int)pvVar1 + 4);
      FUN_1006c158(pvVar1);
      pvVar1 = (LPVOID)*param_1;
    } while (pvVar1 != (LPVOID)0x0);
    *param_1 = 0;
  }
  FUN_10022b50();
  param_1[0x12ab] = (int)&PTR_FUN_1007c608;
  param_1[0x4e0] = (int)&PTR_FUN_1007c608;
  param_1[0x1b6] = (int)&PTR_FUN_1007c608;
  param_1[0x180] = (int)&PTR_FUN_1007c608;
  param_1[0x17b] = (int)&PTR_FUN_1007c608;
  param_1[0x170] = (int)&PTR_FUN_1007c608;
  param_1[0x167] = (int)&PTR_FUN_1007c608;
  param_1[0x162] = (int)&PTR_FUN_1007c608;
  param_1[0x15c] = (int)&PTR_FUN_1007c608;
  param_1[0xcc] = (int)&PTR_FUN_1007c608;
  param_1[0x92] = (int)&PTR_FUN_1007c608;
  param_1[0x82] = (int)&PTR_FUN_1007c608;
  param_1[0x7b] = (int)&PTR_FUN_1007c608;
  param_1[0x6f] = (int)&PTR_FUN_1007c608;
  param_1[0x69] = (int)&PTR_FUN_1007c608;
  param_1[0x29] = (int)&PTR_FUN_1007c608;
  param_1[0x1f] = (int)&PTR_FUN_1007c608;
  ExceptionList = local_c;
  return;
}

/* 10020670  FUN_10020670  (74 bytes)
 * int FUN_10020670(char * param_1)
 * called by: FUN_10019f40, FUN_1001a650, FUN_1001a7b0, FUN_1001a8c0, FUN_1001b000, FUN_1001c780, FUN_1001f780, FUN_100206c0, FUN_10028940, FUN_1002f210
 */
int __thiscall FUN_10020670(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = _strncmp(param_1,(char *)(iVar3 + *(int *)((int)this + 0x74)),0x18);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  return -1;
}

/* 100206c0  FUN_100206c0  (767 bytes)
 * undefined FUN_100206c0(void * param_1)
 * called by: HUD_Reset, HUD_VidInit
 */
void __fastcall FUN_100206c0(void *param_1)

{
  client_sprite_t *pcVar1;
  void *pvVar2;
  HSPRITE HVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *_Source;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  char acStack_100 [256];
  
  ((SCREENINFO *)((int)param_1 + 0x5fe4))->iSize = 0x214;
  (*gEngfuncs.pfnGetScreenInfo)((SCREENINFO *)((int)param_1 + 0x5fe4));
  iVar8 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (DAT_100d5908 < 0x280) {
    *(undefined4 *)((int)param_1 + 0x60) = 0x140;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x60) = 0x280;
  }
  if (*(int *)((int)param_1 + 0xc) == 0) {
    pcVar1 = (*gEngfuncs.pfnSPR_GetList)(s_sprites_hud_txt_10093974,(int *)((int)param_1 + 0x14));
    *(client_sprite_t **)((int)param_1 + 0xc) = pcVar1;
    if (pcVar1 != (client_sprite_t *)0x0) {
      iVar6 = *(int *)((int)param_1 + 0x14);
      *(undefined4 *)((int)param_1 + 0x10) = 0;
      if (0 < iVar6) {
        piVar5 = &pcVar1->iRes;
        do {
          if (*piVar5 == *(int *)((int)param_1 + 0x60)) {
            *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
          }
          piVar5 = piVar5 + 0x26;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) << 2);
      *(void **)((int)param_1 + 0x6c) = pvVar2;
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) << 4);
      *(void **)((int)param_1 + 0x70) = pvVar2;
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) * 0x18);
      _Source = *(char **)((int)param_1 + 0xc);
      *(void **)((int)param_1 + 0x74) = pvVar2;
      iStack_104 = 0;
      if (0 < *(int *)((int)param_1 + 0x14)) {
        iStack_10c = 0;
        iStack_108 = 0;
        pcVar9 = _Source + 0x40;
        do {
          if (*(int *)(pcVar9 + 0x44) == *(int *)((int)param_1 + 0x60)) {
            FUN_1006ac7a(acStack_100,(byte_conflict *)s_sprites__s_spr_10093040);
            HVar3 = (*gEngfuncs.pfnSPR_Load)(acStack_100);
            *(HSPRITE *)(*(int *)((int)param_1 + 0x6c) + iVar8) = HVar3;
            puVar4 = (undefined4 *)(iStack_108 + *(int *)((int)param_1 + 0x70));
            *puVar4 = *(undefined4 *)(pcVar9 + 0x48);
            puVar4[1] = *(undefined4 *)(pcVar9 + 0x4c);
            puVar4[2] = *(undefined4 *)(pcVar9 + 0x50);
            puVar4[3] = *(undefined4 *)(pcVar9 + 0x54);
            _strncpy((char *)(iStack_10c + *(int *)((int)param_1 + 0x74)),_Source,0x18);
            iVar8 = iVar8 + 4;
            iStack_108 = iStack_108 + 0x10;
            iStack_10c = iStack_10c + 0x18;
          }
          _Source = _Source + 0x98;
          pcVar9 = pcVar9 + 0x98;
          iStack_104 = iStack_104 + 1;
        } while (iStack_104 < *(int *)((int)param_1 + 0x14));
      }
    }
  }
  else if (0 < *(int *)((int)param_1 + 0x14)) {
    iVar7 = 0;
    iVar6 = *(int *)((int)param_1 + 0xc) + 0x40;
    do {
      if (*(int *)(iVar6 + 0x44) == *(int *)((int)param_1 + 0x60)) {
        FUN_1006ac7a(acStack_100,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar3 = (*gEngfuncs.pfnSPR_Load)(acStack_100);
        *(HSPRITE *)(*(int *)((int)param_1 + 0x6c) + iVar7) = HVar3;
        iVar7 = iVar7 + 4;
      }
      iVar6 = iVar6 + 0x98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x14));
  }
  iVar8 = FUN_10020670(param_1,s_number_0_10093968);
  *(int *)((int)param_1 + 0x6204) = iVar8;
  iVar8 = iVar8 * 0x10 + *(int *)((int)param_1 + 0x70);
  *(int *)((int)param_1 + 0x68) = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
  DAT_100963e8 = 0x3f800000;
  (**(code **)(*(int *)((int)param_1 + 0x7c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0xa4) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1a4) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1ec) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1bc) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x208) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x248) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x330) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x570) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x588) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x59c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5c0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5ec) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x600) + 8))();
  piVar5 = (int *)FUN_10017570();
  (**(code **)(*piVar5 + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x6d8) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1380) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x4aac) + 8))();
  return;
}

/* 100209c0  FUN_100209c0  (36 bytes)
 * undefined4 FUN_100209c0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_1001fdb0
 */
undefined4 __cdecl
FUN_100209c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 8) = uVar1;
  return 1;
}

/* 100209f0  FUN_100209f0  (79 bytes)
 * float10 FUN_100209f0(void)
 * called by: FUN_10049760
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100209f0(void)

{
  int iVar1;
  
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsRecording)();
  if (iVar1 != 0) {
    FUN_1001b860();
  }
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar1 != 0) {
    DAT_100df1a4 = _DAT_100d6074;
    return (float10)_DAT_100d6074;
  }
  return (float10)DAT_100df1a4;
}

/* 10020a40  FUN_10020a40  (74 bytes)
 * undefined FUN_10020a40(int param_1)
 * called by: FUN_100178c0, FUN_10019de0, FUN_1001a5e0, FUN_1001a880, FUN_1001afa0, FUN_1001c740, FUN_1001f450, FUN_1001f6e0, FUN_10022c70, FUN_100285a0, FUN_10028900, FUN_1002ea50, ... (18 total)
 */
void __thiscall FUN_10020a40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (piVar3 = _malloc(8), piVar3 != (int *)0x0)) {
    *piVar3 = 0;
    piVar3[1] = 0;
    *piVar3 = param_1;
    iVar1 = *(int *)this;
    if (iVar1 == 0) {
      *(int **)this = piVar3;
      return;
    }
    for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar2;
    }
    *(int **)(iVar1 + 4) = piVar3;
  }
  return;
}

/* 10020a90  FUN_10020a90  (4 bytes)
 * float10 FUN_10020a90(int param_1)
 * called by: CAM_Think, FUN_100255d0, FUN_10025680, FUN_100274d0
 */
float10 __fastcall FUN_10020a90(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}

/* 10020aa0  FUN_10020aa0  (32 bytes)
 * undefined FUN_10020aa0()
 */
undefined4 * __thiscall FUN_10020aa0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1007cd88;
  if ((param_2 & 1) != 0) {
    FUN_1006ad4c(param_1);
  }
  return param_1;
}

/* 100219a0  FUN_100219a0  (52 bytes)
 * undefined4 FUN_100219a0(undefined4 * param_1)
 * called by: FUN_1001fdd0, FUN_10020170
 */
undefined4 __cdecl FUN_100219a0(undefined4 *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x14))();
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  return 1;
}

/* 100219e0  FUN_100219e0  (47 bytes)
 * undefined FUN_100219e0(undefined4 * param_1)
 * called by: FUN_1001fdf0
 */
void __cdecl FUN_100219e0(undefined4 *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x18))();
    }
  }
  DAT_10098700 = 0;
  DAT_10098704 = 0;
  return;
}

/* 10021a10  FUN_10021a10  (36 bytes)
 * undefined4 FUN_10021a10(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_1001fe60
 */
undefined4 __cdecl
FUN_10021a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 0x5c) = uVar1;
  return 1;
}

/* 10021a40  FUN_10021a40  (90 bytes)
 * undefined4 FUN_10021a40(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_1001fe40
 */
undefined4 __cdecl
FUN_10021a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (uVar1 != 0) {
    FUN_1002f210((void *)(param_1 + 0x600),(byte_conflict *)s_dmg_concuss_10093984,0xff,0xa0,0);
    return 1;
  }
  FUN_1002f330((void *)(param_1 + 0x600),(byte_conflict *)s_dmg_concuss_10093984);
  return 1;
}

/* 10021aa0  FUN_10021aa0  (445 bytes)
 * undefined4 FUN_10021aa0(float param_1, int param_2)
 * called by: HUD_Redraw
 */
undefined4 __thiscall FUN_10021aa0(void *this,float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  ulonglong uVar9;
  wrect_t *prc;
  
  uVar4 = *(undefined4 *)((int)this + 0x24);
  *(float *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = uVar4;
  fVar3 = param_1 - *(float *)((int)this + 0x28);
  *(double *)((int)this + 0x30) = (double)fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (DAT_100d5cb0 == (void *)0x0) goto LAB_10021b62;
  if (*(int *)((int)this + 0x6200) != 0) {
    if (param_2 == 0) {
      *(undefined4 *)((int)this + 0x6200) = 0;
      FUN_100636d0(DAT_100d5cb0);
      FUN_10063760((int)DAT_100d5cb0);
      goto LAB_10021b62;
    }
    if (*(int *)((int)this + 0x6200) != 0) goto LAB_10021b62;
  }
  if (param_2 != 0) {
    FUN_100636d0(DAT_100d5cb0);
    FUN_100641e0((int)DAT_100d5cb0);
    FUN_10063710((int)DAT_100d5cb0);
    fVar7 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_takesshots_10093824);
    if (fVar7 != (float10)0.0) {
      lVar8 = __ftol();
      DAT_100df1a8 = (int)lVar8;
    }
  }
LAB_10021b62:
  if ((DAT_100df1a8 != 0) && ((float)DAT_100df1a8 < param_1)) {
    (*gEngfuncs.pfnClientCmd)(s_snapshot_10093a84);
    DAT_100df1a8 = 0;
  }
  piVar1 = *(int **)this;
  *(int *)((int)this + 0x6200) = param_2;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if (param_2 == 0) {
      if (((*(byte *)(piVar2 + 4) & 1) != 0) && ((*(byte *)((int)this + 0x54) & 4) == 0)) {
        (**(code **)(*piVar2 + 0xc))(param_1);
      }
    }
    else if ((*(byte *)(piVar2 + 4) & 2) != 0) {
      (**(code **)(*piVar2 + 0xc))(param_1);
    }
  }
  if (*(int *)((int)this + 8) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      uVar4 = FUN_10058450((byte_conflict *)s_sprites__d_logo_spr_10093a70);
      *(undefined4 *)((int)this + 4) = uVar4;
    }
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)this + 4),0xfa,0xfa,0xfa);
    iVar5 = (*gEngfuncs.pfnSPR_Width)(*(HSPRITE *)((int)this + 4),0);
    iVar5 = DAT_100d5908 - iVar5;
    iVar6 = (*gEngfuncs.pfnSPR_Height)(*(HSPRITE *)((int)this + 4),0);
    prc = (wrect_t *)0x0;
    iVar6 = iVar6 / 2;
    uVar9 = __ftol();
    (*gEngfuncs.pfnSPR_DrawAdditive)
              (*(int *)(&DAT_10093990 +
                       (int)((longlong)
                             ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
                            0x38) * 4) + -1,iVar5,iVar6,prc);
  }
  return 1;
}

/* 10021c60  FUN_10021c60  (60 bytes)
 * undefined FUN_10021c60(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1004e030
 */
void __cdecl FUN_10021c60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *param_1 = (int)lVar1;
  lVar1 = __ftol();
  *param_2 = (int)lVar1;
  lVar1 = __ftol();
  *param_3 = (int)lVar1;
  return;
}

/* 10021ca0  FUN_10021ca0  (60 bytes)
 * int FUN_10021ca0(int param_1, int param_2, char * param_3)
 * called by: FUN_1004b0e0, FUN_1004b520
 */
int FUN_10021ca0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_3;
  iVar2 = param_1;
  while (((cVar1 != '\0' && (cVar1 != '\n')) &&
         (iVar3 = (int)cVar1, *(short *)(&DAT_100d5918 + iVar3 * 2) + iVar2 <= param_2))) {
    param_3 = param_3 + 1;
    cVar1 = *param_3;
    iVar2 = *(short *)(&DAT_100d5918 + iVar3 * 2) + iVar2;
  }
  return iVar2 - param_1;
}

/* 10021ce0  FUN_10021ce0  (103 bytes)
 * int FUN_10021ce0(int param_1, undefined4 param_2, int param_3, char * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_10011a60, FUN_100285f0, FUN_10036af0, FUN_10038180, FUN_10049fc0, FUN_1004a130, FUN_1004a2e0, FUN_1004a3e0, FUN_1004acc0, FUN_1004af40, FUN_1004b0e0, FUN_1004d700, ... (16 total)
 */
int FUN_10021ce0(int param_1,int param_2,int param_3,char *param_4,int param_5,int param_6,
                int param_7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    while (cVar1 != '\n') {
      iVar2 = *(short *)(&DAT_100d5918 + cVar1 * 2) + param_1;
      if (param_3 < iVar2) {
        return param_1;
      }
      (*gEngfuncs.pfnDrawCharacter)(param_1,param_2,(int)cVar1,param_5,param_6,param_7);
      cVar1 = param_4[1];
      param_4 = param_4 + 1;
      param_1 = iVar2;
      if (cVar1 == '\0') {
        return iVar2;
      }
    }
  }
  return param_1;
}

/* 10021d50  FUN_10021d50  (21 bytes)
 * undefined FUN_10021d50()
 */
void FUN_10021d50(int *param_1)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_10021d90(DAT_100df2b0,param_1);
  }
  return;
}

