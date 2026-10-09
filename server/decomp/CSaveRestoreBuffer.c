/* ts_i386.so - CSaveRestoreBuffer (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000eed38  CSaveRestoreBuffer::CSaveRestoreBuffer  (11 bytes)
 * undefined CSaveRestoreBuffer(void)
 */
/* CSaveRestoreBuffer::CSaveRestoreBuffer(void) */

void __thiscall CSaveRestoreBuffer::CSaveRestoreBuffer(CSaveRestoreBuffer *this)

{
  *(undefined4 *)this = 0;
  return;
}

/* 000eed44  CSaveRestoreBuffer::CSaveRestoreBuffer  (11 bytes)
 * undefined CSaveRestoreBuffer(undefined4 param_1)
 */
/* CSaveRestoreBuffer::CSaveRestoreBuffer(saverestore_s *) */

void __thiscall CSaveRestoreBuffer::CSaveRestoreBuffer(CSaveRestoreBuffer *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}

/* 000eed50  CSaveRestoreBuffer::~CSaveRestoreBuffer  (46 bytes)
 * undefined ~CSaveRestoreBuffer(uint param_1)
 */
/* CSaveRestoreBuffer::~CSaveRestoreBuffer(void) */

void __thiscall CSaveRestoreBuffer::~CSaveRestoreBuffer(CSaveRestoreBuffer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 000eed80  CSaveRestoreBuffer::EntityIndex  (53 bytes)
 * int EntityIndex(int * param_1)
 */
/* CSaveRestoreBuffer::EntityIndex(CBaseEntity *) */

int __thiscall CSaveRestoreBuffer::EntityIndex(CSaveRestoreBuffer *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = EntityIndex(this,*param_1);
  }
  return iVar1;
}

/* 000eedb8  CSaveRestoreBuffer::EntityIndex  (57 bytes)
 * int EntityIndex(int param_1)
 */
/* CSaveRestoreBuffer::EntityIndex(entvars_s *) */

int __thiscall CSaveRestoreBuffer::EntityIndex(CSaveRestoreBuffer *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = EntityIndex(this,*(int *)(param_1 + 0x208));
  }
  return iVar1;
}

/* 000eedf4  CSaveRestoreBuffer::EntityIndex  (56 bytes)
 * undefined EntityIndex(undefined4 param_1)
 */
/* CSaveRestoreBuffer::EntityIndex(int) */

void __thiscall CSaveRestoreBuffer::EntityIndex(CSaveRestoreBuffer *this,int param_1)

{
  edict_t *peVar1;
  
  peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(param_1);
  EntityIndex(this,(int)peVar1);
  return;
}

/* 000eee2c  CSaveRestoreBuffer::EntityIndex  (75 bytes)
 * int EntityIndex(int param_1)
 */
/* CSaveRestoreBuffer::EntityIndex(edict_s *) */

int __thiscall CSaveRestoreBuffer::EntityIndex(CSaveRestoreBuffer *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)this != 0) && (param_1 != 0)) {
    iVar3 = 0;
    iVar1 = *(int *)this;
    if (0 < *(int *)(iVar1 + 0x20)) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(iVar1 + 0x28) + iVar2 + 4) == param_1) {
          return iVar3;
        }
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + 1;
        iVar1 = *(int *)this;
      } while (iVar3 < *(int *)(iVar1 + 0x20));
    }
  }
  return -1;
}

/* 000eee7c  CSaveRestoreBuffer::EntityFromIndex  (75 bytes)
 * int EntityFromIndex(int param_1)
 */
/* CSaveRestoreBuffer::EntityFromIndex(int) */

int __thiscall CSaveRestoreBuffer::EntityFromIndex(CSaveRestoreBuffer *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)this != 0) && (-1 < param_1)) {
    iVar4 = 0;
    iVar2 = *(int *)this;
    if (0 < *(int *)(iVar2 + 0x20)) {
      iVar3 = 0;
      do {
        piVar1 = (int *)(*(int *)(iVar2 + 0x28) + iVar3);
        if (*piVar1 == param_1) {
          return piVar1[1];
        }
        iVar3 = iVar3 + 0x18;
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)this;
      } while (iVar4 < *(int *)(iVar2 + 0x20));
    }
  }
  return 0;
}

/* 000eeed0  CSaveRestoreBuffer::EntityFlagsSet  (62 bytes)
 * undefined4 EntityFlagsSet(int param_1, uint param_2)
 */
/* CSaveRestoreBuffer::EntityFlagsSet(int, int) */

undefined4 __thiscall
CSaveRestoreBuffer::EntityFlagsSet(CSaveRestoreBuffer *this,int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  if (((*(int *)this == 0) || (param_1 < 0)) || (*(int *)(*(int *)this + 0x20) < param_1)) {
    uVar2 = 0;
  }
  else {
    puVar1 = (uint *)(*(int *)(*(int *)this + 0x28) + 0x10 + param_1 * 0x18);
    *puVar1 = *puVar1 | param_2;
    uVar2 = *(undefined4 *)(*(int *)(*(int *)this + 0x28) + 0x10 + param_1 * 0x18);
  }
  return uVar2;
}

/* 000eef10  CSaveRestoreBuffer::BufferRewind  (34 bytes)
 * undefined BufferRewind(int param_1)
 */
/* CSaveRestoreBuffer::BufferRewind(int) */

void __thiscall CSaveRestoreBuffer::BufferRewind(CSaveRestoreBuffer *this,int param_1)

{
  if (*(int *)this != 0) {
    if (*(int *)(*(int *)this + 8) < param_1) {
      param_1 = *(int *)(*(int *)this + 8);
    }
    *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) - param_1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) - param_1;
  }
  return;
}

/* 000eefe8  CSaveRestoreBuffer::HashString  (63 bytes)
 * undefined HashString(undefined4 this, char * param_2)
 */
/* CSaveRestoreBuffer::HashString(char const *) */

void __thiscall CSaveRestoreBuffer::HashString(undefined4 this,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    uVar2 = _rotr(uVar2,4);
    uVar2 = uVar2 ^ (int)*param_2;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return;
}

/* 000ef028  CSaveRestoreBuffer::TokenHash  (184 bytes)
 * int TokenHash(char * param_1)
 */
/* CSaveRestoreBuffer::TokenHash(char const *) */

int __thiscall CSaveRestoreBuffer::TokenHash(CSaveRestoreBuffer *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = HashString(this,param_1);
  iVar3 = *(int *)this;
  uVar1 = *(uint *)(iVar3 + 0x14);
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0x14)) {
    do {
      iVar4 = iVar5 + (uVar2 % uVar1 & 0xffff);
      if (*(int *)(iVar3 + 0x14) <= iVar4) {
        iVar4 = iVar4 - *(int *)(iVar3 + 0x14);
      }
      if ((*(int *)(*(int *)(*(int *)this + 0x18) + iVar4 * 4) == 0) ||
         (iVar3 = strcmp(param_1,*(char **)(*(int *)(*(int *)this + 0x18) + iVar4 * 4)), iVar3 == 0)
         ) {
        *(char **)(*(int *)(*(int *)this + 0x18) + iVar4 * 4) = param_1;
        return iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)this;
    } while (iVar5 < *(int *)(iVar3 + 0x14));
  }
  (*g_engfuncs.pfnAlertMessage)(at_error,"CSaveRestoreBuffer :: TokenHash() is COMPLETELY FULL!");
  return 0;
}

