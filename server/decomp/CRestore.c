/* ts_i386.so - CRestore (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f0314  CRestore::ReadField  (1003 bytes)
 * int ReadField(int param_1, int param_2, int param_3, int param_4, undefined4 param_5, char * param_6, char * param_7)
 */
/* CRestore::ReadField(void *, TYPEDESCRIPTION *, int, int, int, char *, void *) */

int __thiscall
CRestore::ReadField(CRestore *this,int param_1,int param_2,int param_3,int param_4,
                   undefined4 param_5,char *param_6,char *param_7)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  edict_t *pEdict;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  EHANDLE *this_00;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  float *pfVar12;
  float local_4c;
  int local_40;
  float local_3c [4];
  float local_2c [7];
  
  local_4c = 0.0;
  local_3c[0] = 0.0;
  local_3c[1] = 0.0;
  local_3c[2] = 0.0;
  pfVar9 = local_3c;
  pfVar10 = local_2c;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 1;
  }
  if (*(int *)this != 0) {
    iVar5 = *(int *)this;
    local_4c = *(float *)(iVar5 + 0x550);
    if (*(int *)(iVar5 + 0x52c) != 0) {
      pfVar9 = (float *)(iVar5 + 0x544);
      pfVar10 = local_2c;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      }
    }
  }
  iVar5 = 0;
  if (0 < param_3) {
    do {
      iVar7 = (param_4 + iVar5) % param_3;
      piVar2 = (int *)(iVar7 * 0x10 + param_2);
      iVar6 = strcasecmp((char *)piVar2[1],param_6);
      if (iVar6 == 0) {
        if ((*(int *)(this + 4) != 0) && (((*(byte *)((int)piVar2 + 0xe) ^ 1) & 1) == 0)) {
          return iVar7;
        }
        local_40 = 0;
        if ((short)piVar2[3] < 1) {
          return iVar7;
        }
        goto LAB_000f03f8;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  return -1;
LAB_000f03f8:
  pfVar9 = (float *)(local_40 * *(int *)(gSizes + *piVar2 * 4) + param_1 + piVar2[2]);
  pfVar10 = (float *)(param_7 + local_40 * *(int *)(gSizes + *piVar2 * 4));
  switch(*piVar2) {
  case 0:
    *pfVar9 = *pfVar10;
    break;
  case 1:
  case 0x10:
  case 0x11:
    pcVar8 = param_7;
    if (0 < local_40) {
      uVar3 = -local_40 & 3;
      iVar5 = local_40;
      if (uVar3 != 0) {
        if (uVar3 < 3) {
          if (uVar3 < 2) {
            cVar1 = *param_7;
            while (cVar1 != '\0') {
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            pcVar8 = pcVar8 + 1;
            iVar5 = local_40 + -1;
          }
          for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
          }
          pcVar8 = pcVar8 + 1;
          iVar5 = iVar5 + -1;
        }
        for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        pcVar8 = pcVar8 + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) goto LAB_000f0504;
      }
      do {
        for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        do {
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        do {
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        do {
          pcVar11 = pcVar8;
          pcVar8 = pcVar11 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = pcVar11 + 2;
        iVar5 = iVar5 + -4;
      } while (iVar5 != 0);
    }
LAB_000f0504:
    iVar5 = -1;
    pcVar11 = pcVar8;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (iVar5 == -2) {
LAB_000f06fd:
      *pfVar9 = 0.0;
    }
    else {
      fVar4 = (float)(*g_engfuncs.pfnAllocString)(pcVar8);
      *pfVar9 = fVar4;
      if ((fVar4 != 0.0) && (*(int *)(this + 8) != 0)) {
        if (*piVar2 == 0x10) {
          (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + (int)fVar4);
        }
        else if (*piVar2 == 0x11) {
          (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + (int)fVar4);
        }
      }
    }
    break;
  case 2:
    pEdict = (edict_t *)
             CSaveRestoreBuffer::EntityFromIndex((CSaveRestoreBuffer *)this,(int)*pfVar10);
    if (pEdict == (edict_t *)0x0) goto LAB_000f06fd;
    fVar4 = (float)(*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    *pfVar9 = fVar4;
    break;
  case 3:
    iVar5 = CSaveRestoreBuffer::EntityFromIndex((CSaveRestoreBuffer *)this,(int)*pfVar10);
    if (iVar5 == 0) goto LAB_000f06fd;
    *pfVar9 = *(float *)(iVar5 + 0x7c);
    break;
  case 4:
    this_00 = (EHANDLE *)((int)pfVar9 + (8 - *(int *)(gSizes + *piVar2 * 4)) * local_40);
    iVar5 = CSaveRestoreBuffer::EntityFromIndex((CSaveRestoreBuffer *)this,(int)*pfVar10);
    if (iVar5 == 0) {
      EHANDLE::operator=(this_00,(int *)0x0);
    }
    else {
      EHANDLE::operator=(this_00,*(int **)(iVar5 + 0x7c));
    }
    break;
  case 5:
    iVar5 = CSaveRestoreBuffer::EntityFromIndex((CSaveRestoreBuffer *)this,(int)*pfVar10);
    if (iVar5 == 0) goto LAB_000f06fd;
    *pfVar9 = (float)(iVar5 + 0x80);
    break;
  case 6:
    fVar4 = (float)CSaveRestoreBuffer::EntityFromIndex((CSaveRestoreBuffer *)this,(int)*pfVar10);
    *pfVar9 = fVar4;
    break;
  case 7:
    *pfVar9 = *pfVar10;
    pfVar9[1] = pfVar10[1];
    pfVar9[2] = pfVar10[2];
    break;
  case 8:
    *pfVar9 = *pfVar10 + local_2c[0];
    pfVar9[1] = pfVar10[1] + local_2c[1];
    pfVar9[2] = pfVar10[2] + local_2c[2];
    break;
  case 9:
  case 10:
  case 0xc:
    *pfVar9 = *pfVar10;
    break;
  case 0xb:
    iVar5 = -1;
    pfVar12 = pfVar10;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *(char *)pfVar12;
      pfVar12 = (float *)((int)pfVar12 + 1);
    } while (cVar1 != '\0');
    if (iVar5 == -2) goto LAB_000f06fd;
    fVar4 = (float)(*g_engfuncs.pfnFunctionFromName)((char *)pfVar10);
    *pfVar9 = fVar4;
    break;
  case 0xd:
    *(undefined2 *)pfVar9 = *(undefined2 *)pfVar10;
    break;
  case 0xe:
    *(undefined1 *)pfVar9 = *(undefined1 *)pfVar10;
    break;
  case 0xf:
    *pfVar9 = local_4c + *pfVar10;
    break;
  default:
    (*g_engfuncs.pfnAlertMessage)(at_error,"Bad field type\n");
  }
  local_40 = local_40 + 1;
  if ((short)piVar2[3] <= local_40) {
    return iVar7;
  }
  goto LAB_000f03f8;
}

/* 000f0770  CRestore::ReadEntVars  (49 bytes)
 * undefined ReadEntVars(char * param_1, int param_2)
 */
/* CRestore::ReadEntVars(char const *, entvars_s *) */

void __thiscall CRestore::ReadEntVars(CRestore *this,char *param_1,int param_2)

{
  ReadFields(this,param_1,param_2,(int)&gEntvarsDescription,0x56);
  return;
}

/* 000f07a4  CRestore::ReadFields  (350 bytes)
 * undefined4 ReadFields(char * param_1, int param_2, int param_3, int param_4)
 */
/* CRestore::ReadFields(char const *, void *, TYPEDESCRIPTION *, int) */

undefined4 __thiscall
CRestore::ReadFields(CRestore *this,char *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort local_1c;
  ushort local_1a;
  char *local_18;
  
  ReadShort(this);
  sVar1 = ReadShort(this);
  iVar2 = CSaveRestoreBuffer::TokenHash((CSaveRestoreBuffer *)this,param_1);
  if (sVar1 == (short)iVar2) {
    iVar2 = ReadInt(this);
    iVar5 = 0;
    if (0 < param_4) {
      uVar6 = 0;
      do {
        if ((*(int *)(this + 4) == 0) ||
           (((*(byte *)(param_3 + 0xe + (uVar6 & 0xffff) * 0x10) ^ 1) & 1) != 0)) {
          iVar4 = (uVar6 & 0xffff) * 0x10;
          memset((void *)(param_2 + *(int *)(param_3 + 8 + iVar4)),0,
                 (int)*(short *)(param_3 + 0xc + iVar4) *
                 *(int *)(gSizes + *(int *)(param_3 + iVar4) * 4));
        }
        uVar6 = uVar6 + 1;
      } while ((int)(uVar6 & 0xffff) < param_4);
    }
    if (0 < iVar2) {
      uVar6 = 0;
      do {
        BufferReadHeader(this,&local_1c);
        iVar5 = ReadField(this,param_2,param_3,param_4,iVar5,(uint)local_1c,
                          *(char **)(*(int *)(*(int *)this + 0x18) + (uint)local_1a * 4),local_18);
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + 1;
      } while ((int)(uVar6 & 0xffff) < iVar2);
    }
    uVar3 = 1;
  }
  else {
    CSaveRestoreBuffer::BufferRewind((CSaveRestoreBuffer *)this,4);
    uVar3 = 0;
  }
  return uVar3;
}

/* 000f0908  CRestore::BufferReadHeader  (78 bytes)
 * undefined BufferReadHeader(ushort * param_1)
 */
/* CRestore::BufferReadHeader(HEADER *) */

void __thiscall CRestore::BufferReadHeader(CRestore *this,ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = ReadShort(this);
  *param_1 = uVar1;
  uVar1 = ReadShort(this);
  param_1[1] = uVar1;
  uVar2 = BufferPointer(this);
  *(undefined4 *)(param_1 + 2) = uVar2;
  BufferSkipBytes(this,(uint)*param_1);
  return;
}

/* 000f0958  CRestore::ReadShort  (53 bytes)
 * undefined2 ReadShort(void)
 */
/* CRestore::ReadShort(void) */

undefined2 __thiscall CRestore::ReadShort(CRestore *this)

{
  undefined2 local_6;
  
  local_6 = 0;
  BufferReadBytes(this,&local_6,2);
  return local_6;
}

/* 000f0990  CRestore::ReadInt  (53 bytes)
 * undefined4 ReadInt(void)
 */
/* CRestore::ReadInt(void) */

undefined4 __thiscall CRestore::ReadInt(CRestore *this)

{
  undefined4 local_8;
  
  local_8 = 0;
  BufferReadBytes(this,&local_8,4);
  return local_8;
}

/* 000f09c8  CRestore::ReadNamedInt  (44 bytes)
 * undefined4 ReadNamedInt(CRestore * param_1)
 */
/* CRestore::ReadNamedInt(char const *) */

undefined4 CRestore::ReadNamedInt(CRestore *param_1)

{
  ushort local_c [2];
  undefined4 *local_8;
  
  BufferReadHeader(param_1,local_c);
  return *local_8;
}

/* 000f09f4  CRestore::ReadNamedString  (42 bytes)
 * undefined4 ReadNamedString(CRestore * param_1)
 */
/* CRestore::ReadNamedString(char const *) */

undefined4 CRestore::ReadNamedString(CRestore *param_1)

{
  ushort local_c [2];
  undefined4 local_8;
  
  BufferReadHeader(param_1,local_c);
  return local_8;
}

/* 000f0a20  CRestore::BufferPointer  (21 bytes)
 * undefined4 BufferPointer(void)
 */
/* CRestore::BufferPointer(void) */

undefined4 __thiscall CRestore::BufferPointer(CRestore *this)

{
  if (*(int *)this == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)this + 4);
}

/* 000f0a38  CRestore::BufferReadBytes  (153 bytes)
 * undefined BufferReadBytes(void * param_1, size_t param_2)
 */
/* CRestore::BufferReadBytes(char *, int) */

void __thiscall CRestore::BufferReadBytes(CRestore *this,void *param_1,size_t param_2)

{
  int *piVar1;
  
  if ((*(int *)this != 0) && (piVar1 = *(int **)this, piVar1[1] - *piVar1 < piVar1[3])) {
    if (*(int *)(*(int *)this + 0xc) < (int)(param_2 + *(int *)(*(int *)this + 8))) {
      (*g_engfuncs.pfnAlertMessage)(at_error,"Restore overflow!");
      *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
    }
    else {
      if (param_1 != (void *)0x0) {
        memcpy(param_1,*(void **)(*(int *)this + 4),param_2);
      }
      *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
    }
  }
  return;
}

/* 000f0ad4  CRestore::BufferSkipBytes  (39 bytes)
 * undefined BufferSkipBytes(size_t param_1)
 */
/* CRestore::BufferSkipBytes(int) */

void __thiscall CRestore::BufferSkipBytes(CRestore *this,size_t param_1)

{
  BufferReadBytes(this,(void *)0x0,param_1);
  return;
}

/* 000f0afc  CRestore::BufferSkipZString  (164 bytes)
 * size_t BufferSkipZString(void)
 */
/* CRestore::BufferSkipZString(void) */

size_t __thiscall CRestore::BufferSkipZString(CRestore *this)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)this == 0) {
    return 0;
  }
  iVar7 = *(int *)this;
  uVar5 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8);
  iVar6 = 0;
  pcVar1 = *(char **)(iVar7 + 4);
  pcVar4 = pcVar1 + 1;
  if ((*pcVar1 != '\0') && (0 < (int)uVar5)) {
    uVar3 = uVar5 & 3;
    if (0 < (int)uVar5) {
      iVar7 = iVar6;
      if (uVar3 == 0) goto LAB_000f0b6c;
      if (1 < uVar3) {
        if (2 < uVar3) {
          iVar6 = 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar1 + 2;
          if (cVar2 == '\0') goto LAB_000f0b8f;
        }
        iVar6 = iVar6 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') goto LAB_000f0b8f;
      }
    }
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    iVar6 = iVar6 + 1;
    while ((cVar2 != '\0' && (iVar7 = iVar6, iVar6 < (int)uVar5))) {
LAB_000f0b6c:
      iVar6 = iVar7 + 1;
      if ((*pcVar4 == '\0') ||
         ((iVar6 = iVar7 + 2, pcVar4[1] == '\0' || (iVar6 = iVar7 + 3, pcVar4[2] == '\0')))) break;
      cVar2 = pcVar4[3];
      pcVar4 = pcVar4 + 4;
      iVar6 = iVar7 + 4;
    }
  }
LAB_000f0b8f:
  BufferSkipBytes(this,iVar6 + 1U);
  return iVar6 + 1U;
}

/* 000f0ba4  CRestore::BufferCheckZString  (101 bytes)
 * undefined4 BufferCheckZString(char * param_1)
 */
/* CRestore::BufferCheckZString(char const *) */

undefined4 __thiscall CRestore::BufferCheckZString(CRestore *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (*(int *)this != 0) {
    iVar2 = *(int *)this;
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (((int)(~uVar3 - 1) <= *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8)) &&
       (iVar2 = strncmp(param_1,*(char **)(iVar2 + 4),~uVar3 - 1), iVar2 == 0)) {
      return 1;
    }
  }
  return 0;
}

