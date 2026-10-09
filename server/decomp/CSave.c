/* ts_i386.so - CSave (19 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ef0e4  CSave::WriteData  (42 bytes)
 * undefined WriteData(char * param_1, size_t param_2, void * param_3)
 */
/* CSave::WriteData(char const *, int, char const *) */

void __thiscall CSave::WriteData(CSave *this,char *param_1,size_t param_2,void *param_3)

{
  BufferField(this,param_1,param_2,param_3);
  return;
}

/* 000ef110  CSave::WriteShort  (45 bytes)
 * undefined WriteShort(char * param_1, void * param_2, int param_3)
 */
/* CSave::WriteShort(char const *, short const *, int) */

void __thiscall CSave::WriteShort(CSave *this,char *param_1,void *param_2,int param_3)

{
  BufferField(this,param_1,param_3 << 1,param_2);
  return;
}

/* 000ef140  CSave::WriteInt  (46 bytes)
 * undefined WriteInt(char * param_1, void * param_2, int param_3)
 */
/* CSave::WriteInt(char const *, int const *, int) */

void __thiscall CSave::WriteInt(CSave *this,char *param_1,void *param_2,int param_3)

{
  BufferField(this,param_1,param_3 << 2,param_2);
  return;
}

/* 000ef170  CSave::WriteFloat  (46 bytes)
 * undefined WriteFloat(char * param_1, void * param_2, int param_3)
 */
/* CSave::WriteFloat(char const *, float const *, int) */

void __thiscall CSave::WriteFloat(CSave *this,char *param_1,void *param_2,int param_3)

{
  BufferField(this,param_1,param_3 << 2,param_2);
  return;
}

/* 000ef1a0  CSave::WriteTime  (451 bytes)
 * undefined WriteTime(char * param_1, float * param_2, int param_3)
 */
/* CSave::WriteTime(char const *, float const *, int) */

void __thiscall CSave::WriteTime(CSave *this,char *param_1,float *param_2,int param_3)

{
  uint uVar1;
  float local_40 [12];
  
  BufferHeader(this,param_1,param_3 * 4);
  if (0 < param_3) {
    uVar1 = -param_3 & 3;
    if (uVar1 != 0) {
      if (uVar1 < 3) {
        if (uVar1 < 2) {
          local_40[0] = *param_2;
          if (*(int *)this != 0) {
            local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
          }
          BufferData(this,local_40,4);
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
        local_40[0] = *param_2;
        if (*(int *)this != 0) {
          local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
        }
        BufferData(this,local_40,4);
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      }
      local_40[0] = *param_2;
      if (*(int *)this != 0) {
        local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
      }
      BufferData(this,local_40,4);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return;
      }
    }
    do {
      local_40[0] = *param_2;
      if (*(int *)this != 0) {
        local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
      }
      BufferData(this,local_40,4);
      local_40[0] = param_2[1];
      if (*(int *)this != 0) {
        local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
      }
      BufferData(this,local_40,4);
      local_40[0] = param_2[2];
      if (*(int *)this != 0) {
        local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
      }
      BufferData(this,local_40,4);
      local_40[0] = param_2[3];
      if (*(int *)this != 0) {
        local_40[0] = local_40[0] - *(float *)(*(int *)this + 0x550);
      }
      BufferData(this,local_40,4);
      param_2 = param_2 + 4;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}

/* 000ef364  CSave::WriteString  (54 bytes)
 * undefined WriteString(char * param_1, char * param_2)
 */
/* CSave::WriteString(char const *, char const *) */

void __thiscall CSave::WriteString(CSave *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  BufferField(this,param_1,~uVar2,param_2);
  return;
}

/* 000ef39c  CSave::WriteString  (748 bytes)
 * undefined WriteString(char * param_1, int * param_2, uint param_3)
 */
/* CSave::WriteString(char const *, int const *, int) */

void __thiscall CSave::WriteString(CSave *this,char *param_1,int *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar6 = 0;
  iVar7 = 0;
  if (0 < (int)param_3) {
    pcVar9 = gpGlobals->pStringBase;
    uVar2 = param_3 & 3;
    if ((int)param_3 < 1) {
LAB_000ef421:
      uVar2 = 0xffffffff;
      pcVar8 = pcVar9 + param_2[iVar7];
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = uVar6 + ~uVar2;
      iVar7 = iVar7 + 1;
      if ((int)param_3 <= iVar7) goto LAB_000ef4a9;
    }
    else if (uVar2 != 0) {
      if (1 < uVar2) {
        if (2 < uVar2) {
          uVar6 = 0xffffffff;
          pcVar8 = pcVar9 + *param_2;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar7 = 1;
        }
        uVar2 = 0xffffffff;
        pcVar8 = pcVar9 + param_2[iVar7];
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar6 = uVar6 + ~uVar2;
        iVar7 = iVar7 + 1;
      }
      goto LAB_000ef421;
    }
    do {
      uVar2 = 0xffffffff;
      pcVar8 = pcVar9 + param_2[iVar7];
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar8 = pcVar9 + param_2[iVar7 + 1];
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar8 = pcVar9 + param_2[iVar7 + 2];
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar8 = pcVar9 + param_2[iVar7 + 3];
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = uVar6 + ~uVar2 + ~uVar3 + ~uVar4 + ~uVar5;
      iVar7 = iVar7 + 4;
    } while (iVar7 < (int)param_3);
  }
LAB_000ef4a9:
  BufferHeader(this,param_1,uVar6);
  iVar7 = 0;
  if ((int)param_3 < 1) {
    return;
  }
  uVar6 = param_3 & 3;
  if (0 < (int)param_3) {
    if (uVar6 == 0) goto LAB_000ef5a4;
    if (1 < uVar6) {
      if (2 < uVar6) {
        uVar6 = 0xffffffff;
        pcVar9 = gpGlobals->pStringBase + *param_2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        BufferData(this,gpGlobals->pStringBase + *param_2,~uVar6);
        iVar7 = 1;
      }
      uVar6 = 0xffffffff;
      pcVar9 = gpGlobals->pStringBase + param_2[iVar7];
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      BufferData(this,gpGlobals->pStringBase + param_2[iVar7],~uVar6);
      iVar7 = iVar7 + 1;
    }
  }
  uVar6 = 0xffffffff;
  pcVar9 = gpGlobals->pStringBase + param_2[iVar7];
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  BufferData(this,gpGlobals->pStringBase + param_2[iVar7],~uVar6);
  iVar7 = iVar7 + 1;
  if ((int)param_3 <= iVar7) {
    return;
  }
LAB_000ef5a4:
  do {
    uVar6 = 0xffffffff;
    pcVar9 = gpGlobals->pStringBase + param_2[iVar7];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    BufferData(this,gpGlobals->pStringBase + param_2[iVar7],~uVar6);
    uVar6 = 0xffffffff;
    pcVar9 = gpGlobals->pStringBase + param_2[iVar7 + 1];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    BufferData(this,gpGlobals->pStringBase + param_2[iVar7 + 1],~uVar6);
    uVar6 = 0xffffffff;
    pcVar9 = gpGlobals->pStringBase + param_2[iVar7 + 2];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    BufferData(this,gpGlobals->pStringBase + param_2[iVar7 + 2],~uVar6);
    uVar6 = 0xffffffff;
    pcVar9 = gpGlobals->pStringBase + param_2[iVar7 + 3];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    BufferData(this,gpGlobals->pStringBase + param_2[iVar7 + 3],~uVar6);
    iVar7 = iVar7 + 4;
    if ((int)param_3 <= iVar7) {
      return;
    }
  } while( true );
}

/* 000ef688  CSave::WriteVector  (40 bytes)
 * undefined WriteVector(char * param_1, void * param_2)
 */
/* CSave::WriteVector(char const *, Vector const &) */

void __thiscall CSave::WriteVector(CSave *this,char *param_1,void *param_2)

{
  WriteVector(this,param_1,param_2,1);
  return;
}

/* 000ef6b0  CSave::WriteVector  (70 bytes)
 * undefined WriteVector(char * param_1, void * param_2, int param_3)
 */
/* CSave::WriteVector(char const *, float const *, int) */

void __thiscall CSave::WriteVector(CSave *this,char *param_1,void *param_2,int param_3)

{
  BufferHeader(this,param_1,param_3 * 0xc);
  BufferData(this,param_2,param_3 * 0xc);
  return;
}

/* 000ef6f8  CSave::WritePositionVector  (121 bytes)
 * undefined WritePositionVector(char * param_1, float * param_2)
 */
/* CSave::WritePositionVector(char const *, Vector const &) */

void __thiscall CSave::WritePositionVector(CSave *this,char *param_1,float *param_2)

{
  int iVar1;
  float local_2c;
  float local_28;
  float local_24;
  
  if ((*(int *)this != 0) && (iVar1 = *(int *)this, *(int *)(iVar1 + 0x52c) != 0)) {
    local_2c = *param_2 - *(float *)(iVar1 + 0x544);
    local_28 = param_2[1] - *(float *)(iVar1 + 0x548);
    local_24 = param_2[2] - *(float *)(iVar1 + 0x54c);
    WriteVector(this,param_1,&local_2c);
  }
  WriteVector(this,param_1,param_2);
  return;
}

/* 000ef774  CSave::WritePositionVector  (521 bytes)
 * undefined WritePositionVector(char * param_1, float * param_2, uint param_3)
 */
/* CSave::WritePositionVector(char const *, float const *, int) */

void __thiscall CSave::WritePositionVector(CSave *this,char *param_1,float *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  
  BufferHeader(this,param_1,param_3 * 0xc);
  if (0 < (int)param_3) {
    local_60 = param_3;
    if ((param_3 & 1) != 0) {
      local_4c = *param_2;
      local_48 = param_2[1];
      local_44 = param_2[2];
      if ((*(int *)this != 0) && (iVar1 = *(int *)this, *(int *)(iVar1 + 0x52c) != 0)) {
        local_5c = local_4c - *(float *)(iVar1 + 0x544);
        local_58 = local_48 - *(float *)(iVar1 + 0x548);
        local_54 = local_44 - *(float *)(iVar1 + 0x54c);
        pfVar2 = &local_5c;
        pfVar3 = &local_4c;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      BufferData(this,&local_4c,0xc);
      param_2 = param_2 + 3;
      local_60 = param_3 - 1;
      if (local_60 == 0) {
        return;
      }
    }
    do {
      local_4c = *param_2;
      local_48 = param_2[1];
      local_44 = param_2[2];
      if ((*(int *)this != 0) && (iVar1 = *(int *)this, *(int *)(iVar1 + 0x52c) != 0)) {
        local_5c = local_4c - *(float *)(iVar1 + 0x544);
        local_58 = local_48 - *(float *)(iVar1 + 0x548);
        local_54 = local_44 - *(float *)(iVar1 + 0x54c);
        pfVar2 = &local_5c;
        pfVar3 = &local_4c;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      BufferData(this,&local_4c,0xc);
      local_4c = param_2[3];
      local_48 = param_2[4];
      local_44 = param_2[5];
      if ((*(int *)this != 0) && (iVar1 = *(int *)this, *(int *)(iVar1 + 0x52c) != 0)) {
        local_5c = local_4c - *(float *)(iVar1 + 0x544);
        local_58 = local_48 - *(float *)(iVar1 + 0x548);
        local_54 = local_44 - *(float *)(iVar1 + 0x54c);
        pfVar2 = &local_5c;
        pfVar3 = &local_4c;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      BufferData(this,&local_4c,0xc);
      param_2 = param_2 + 6;
      local_60 = local_60 - 2;
    } while (local_60 != 0);
  }
  return;
}

/* 000ef980  CSave::WriteFunction  (109 bytes)
 * undefined WriteFunction(CSave * param_1, char * param_2, undefined4 * param_3)
 */
/* CSave::WriteFunction(char const *, int const *, int) */

void CSave::WriteFunction(CSave *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar2 = (*g_engfuncs.pfnNameForFunction)(*param_3);
  if (pcVar2 == (char *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,"Invalid function pointer in entity!");
  }
  else {
    uVar3 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    BufferField(param_1,param_2,~uVar3,pcVar2);
  }
  return;
}

/* 000efb44  CSave::WriteEntVars  (49 bytes)
 * undefined WriteEntVars(char * param_1, int param_2)
 */
/* CSave::WriteEntVars(char const *, entvars_s *) */

void __thiscall CSave::WriteEntVars(CSave *this,char *param_1,int param_2)

{
  WriteFields(this,param_1,param_2,&gEntvarsDescription,0x56);
  return;
}

/* 000efb78  CSave::WriteFields  (1340 bytes)
 * undefined4 WriteFields(char * param_1, int param_2, int * param_3, uint param_4)
 */
/* CSave::WriteFields(char const *, void *, TYPEDESCRIPTION *, int) */

undefined4 __thiscall
CSave::WriteFields(CSave *this,char *param_1,int param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  uint local_128;
  uint local_124;
  int local_120;
  int local_11c [67];
  
  local_128 = 0;
  local_124 = 0;
  if ((int)param_4 < 1) goto LAB_000efdf3;
  iVar6 = 0;
  uVar1 = param_4 & 3;
  if ((int)param_4 < 1) {
LAB_000efc77:
    iVar2 = DataEmpty(this,(char *)(param_2 + *(int *)((int)param_3 + iVar6 + 8)),
                      (int)*(short *)((int)param_3 + iVar6 + 0xc) *
                      *(int *)(gSizes + *(int *)((int)param_3 + iVar6) * 4));
    if (iVar2 != 0) {
      local_128 = local_128 + 1;
    }
    iVar6 = iVar6 + 0x10;
    local_124 = local_124 + 1;
    if ((int)param_4 <= (int)local_124) goto LAB_000efdf3;
  }
  else if (uVar1 != 0) {
    if (1 < uVar1) {
      if (2 < uVar1) {
        iVar6 = DataEmpty(this,(char *)(param_2 + param_3[2]),
                          (int)(short)param_3[3] * *(int *)(gSizes + *param_3 * 4));
        local_128 = (uint)(iVar6 != 0);
        iVar6 = 0x10;
      }
      local_124 = (uint)(2 < uVar1);
      iVar2 = DataEmpty(this,(char *)(param_2 + *(int *)((int)param_3 + iVar6 + 8)),
                        (int)*(short *)((int)param_3 + iVar6 + 0xc) *
                        *(int *)(gSizes + *(int *)((int)param_3 + iVar6) * 4));
      if (iVar2 != 0) {
        local_128 = local_128 + 1;
      }
      iVar6 = iVar6 + 0x10;
      local_124 = local_124 + 1;
    }
    goto LAB_000efc77;
  }
  piVar4 = (int *)((int)param_3 + iVar6);
  piVar3 = piVar4;
  piVar7 = piVar4;
  do {
    iVar6 = DataEmpty(this,(char *)(param_2 + piVar7[2]),
                      (int)(short)piVar3[3] * *(int *)(gSizes + *piVar4 * 4));
    if (iVar6 != 0) {
      local_128 = local_128 + 1;
    }
    iVar6 = DataEmpty(this,(char *)(param_2 + piVar7[6]),
                      (int)(short)piVar3[7] * *(int *)(gSizes + piVar4[4] * 4));
    if (iVar6 != 0) {
      local_128 = local_128 + 1;
    }
    iVar6 = DataEmpty(this,(char *)(param_2 + piVar7[10]),
                      (int)(short)piVar3[0xb] * *(int *)(gSizes + piVar4[8] * 4));
    if (iVar6 != 0) {
      local_128 = local_128 + 1;
    }
    iVar6 = DataEmpty(this,(char *)(param_2 + piVar7[0xe]),
                      (int)(short)piVar3[0xf] * *(int *)(gSizes + piVar4[0xc] * 4));
    if (iVar6 != 0) {
      local_128 = local_128 + 1;
    }
    piVar4 = piVar4 + 0x10;
    piVar3 = piVar3 + 0x10;
    piVar7 = piVar7 + 0x10;
    local_124 = local_124 + 4;
  } while ((int)local_124 < (int)param_4);
LAB_000efdf3:
  local_120 = param_4 - local_128;
  WriteInt(this,param_1,&local_120,1);
  local_124 = 0;
  if (0 < (int)param_4) {
    do {
      piVar4 = param_3 + local_124 * 4;
      pfVar5 = (float *)(param_2 + piVar4[2]);
      iVar6 = DataEmpty(this,(char *)pfVar5,(int)(short)piVar4[3] * *(int *)(gSizes + *piVar4 * 4));
      if (iVar6 == 0) {
        switch(*piVar4) {
        case 0:
          WriteFloat(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        case 1:
        case 0x10:
        case 0x11:
          WriteString(this,(char *)piVar4[1],(int *)pfVar5,(int)(short)piVar4[3]);
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          if (0x40 < (short)piVar4[3]) {
            (*g_engfuncs.pfnAlertMessage)
                      (at_error,"Can\'t save more than %d entities in an array!!!\n",0x40);
          }
          iVar6 = 0;
          if (0 < (short)piVar4[3]) {
            do {
              switch(*piVar4) {
              case 2:
                iVar2 = CSaveRestoreBuffer::EntityIndex((CSaveRestoreBuffer *)this,pfVar5[iVar6]);
                break;
              case 3:
                piVar3 = (int *)pfVar5[iVar6];
                goto LAB_000efff9;
              case 4:
                piVar3 = (int *)_((EHANDLE *)(pfVar5 + iVar6 * 2));
LAB_000efff9:
                iVar2 = CSaveRestoreBuffer::EntityIndex((CSaveRestoreBuffer *)this,piVar3);
                break;
              case 5:
                iVar2 = CSaveRestoreBuffer::EntityIndex
                                  ((CSaveRestoreBuffer *)this,(int)pfVar5[iVar6]);
                break;
              case 6:
                iVar2 = CSaveRestoreBuffer::EntityIndex
                                  ((CSaveRestoreBuffer *)this,(int)pfVar5[iVar6]);
                break;
              default:
                goto switchD_000eff7d_default;
              }
              local_11c[iVar6] = iVar2;
switchD_000eff7d_default:
              iVar6 = iVar6 + 1;
            } while (iVar6 < (short)piVar4[3]);
          }
          WriteInt(this,(char *)piVar4[1],local_11c,(int)(short)piVar4[3]);
          break;
        case 7:
          WriteVector(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        case 8:
          WritePositionVector(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        case 9:
          WriteInt(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        case 10:
        case 0xc:
          WriteInt(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        case 0xb:
          WriteFunction(this,(char *)piVar4[1],pfVar5);
          break;
        case 0xd:
          WriteData(this,(char *)piVar4[1],(int)(short)piVar4[3] << 1,pfVar5);
          break;
        case 0xe:
          WriteData(this,(char *)piVar4[1],(int)(short)piVar4[3],pfVar5);
          break;
        case 0xf:
          WriteTime(this,(char *)piVar4[1],pfVar5,(int)(short)piVar4[3]);
          break;
        default:
          (*g_engfuncs.pfnAlertMessage)(at_error,"Bad field type\n");
        }
      }
      local_124 = local_124 + 1;
    } while ((int)local_124 < (int)param_4);
  }
  return 1;
}

/* 000f0130  CSave::BufferString  (67 bytes)
 * undefined BufferString(void * param_1, size_t param_2)
 */
/* CSave::BufferString(char *, int) */

void __thiscall CSave::BufferString(CSave *this,void *param_1,size_t param_2)

{
  undefined1 local_9;
  
  local_9 = 0;
  BufferData(this,param_1,param_2);
  BufferData(this,&local_9,1);
  return;
}

/* 000f0174  CSave::DataEmpty  (116 bytes)
 * undefined4 DataEmpty(undefined4 this, char * param_2, uint param_3)
 */
/* CSave::DataEmpty(char const *, int) */

undefined4 __thiscall CSave::DataEmpty(undefined4 this,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if ((int)param_3 < 1) {
    return 1;
  }
  uVar2 = param_3 & 3;
  if (0 < (int)param_3) {
    if (uVar2 == 0) goto LAB_000f01b8;
    if (1 < uVar2) {
      if (2 < uVar2) {
        if (*param_2 != '\0') {
          return 0;
        }
        iVar1 = 1;
      }
      if (param_2[iVar1] != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    }
  }
  if (param_2[iVar1] != '\0') {
    return 0;
  }
  iVar1 = iVar1 + 1;
  if ((int)param_3 <= iVar1) {
    return 1;
  }
LAB_000f01b8:
  while( true ) {
    if (param_2[iVar1] != '\0') {
      return 0;
    }
    if (param_2[iVar1 + 1] != '\0') {
      return 0;
    }
    if (param_2[iVar1 + 2] != '\0') {
      return 0;
    }
    if (param_2[iVar1 + 3] != '\0') break;
    iVar1 = iVar1 + 4;
    if ((int)param_3 <= iVar1) {
      return 1;
    }
  }
  return 0;
}

/* 000f01ec  CSave::BufferField  (64 bytes)
 * undefined BufferField(char * param_1, size_t param_2, void * param_3)
 */
/* CSave::BufferField(char const *, int, char const *) */

void __thiscall CSave::BufferField(CSave *this,char *param_1,size_t param_2,void *param_3)

{
  BufferHeader(this,param_1,param_2);
  BufferData(this,param_3,param_2);
  return;
}

/* 000f022c  CSave::BufferHeader  (117 bytes)
 * undefined BufferHeader(char * param_1, int param_2)
 */
/* CSave::BufferHeader(char const *, int) */

void __thiscall CSave::BufferHeader(CSave *this,char *param_1,int param_2)

{
  int iVar1;
  undefined2 local_a;
  
  iVar1 = CSaveRestoreBuffer::TokenHash((CSaveRestoreBuffer *)this,param_1);
  local_a = (undefined2)iVar1;
  if (0x10000 < param_2) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"CSave :: BufferHeader() size parameter exceeds \'short\'!");
  }
  BufferData(this,&param_2,2);
  BufferData(this,&local_a,2);
  return;
}

/* 000f02a4  CSave::BufferData  (109 bytes)
 * undefined BufferData(void * param_1, size_t param_2)
 */
/* CSave::BufferData(char const *, int) */

void __thiscall CSave::BufferData(CSave *this,void *param_1,size_t param_2)

{
  if (*(int *)this != 0) {
    if (*(int *)(*(int *)this + 0xc) < (int)(param_2 + *(int *)(*(int *)this + 8))) {
      (*g_engfuncs.pfnAlertMessage)(at_error,"Save/Restore overflow!");
      *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
    }
    else {
      memcpy(*(void **)(*(int *)this + 4),param_1,param_2);
      *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
    }
  }
  return;
}

