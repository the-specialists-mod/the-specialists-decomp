/* ts_i386.so - CGlobalState (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f3de4  CGlobalState::CGlobalState  (33 bytes)
 * undefined CGlobalState(void)
 */
/* CGlobalState::CGlobalState(void) */

void __thiscall CGlobalState::CGlobalState(CGlobalState *this)

{
  Reset(this);
  return;
}

/* 000f3e08  CGlobalState::Reset  (18 bytes)
 * undefined Reset(void)
 */
/* CGlobalState::Reset(void) */

void __thiscall CGlobalState::Reset(CGlobalState *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

/* 000f3e1c  CGlobalState::Find  (86 bytes)
 * char * Find(int param_1)
 */
/* CGlobalState::Find(int) */

char * __thiscall CGlobalState::Find(CGlobalState *this,int param_1)

{
  char *pcVar1;
  char *__s2;
  int iVar2;
  
  __s2 = (char *)0x0;
  if (param_1 != 0) {
    pcVar1 = gpGlobals->pStringBase;
    __s2 = *(char **)this;
    while ((__s2 != (char *)0x0 && (iVar2 = strcmp(pcVar1 + param_1,__s2), iVar2 != 0))) {
      __s2 = *(char **)(__s2 + 100);
    }
  }
  return __s2;
}

/* 000f3e74  CGlobalState::DumpGlobals  (111 bytes)
 * undefined DumpGlobals(void)
 */
/* CGlobalState::DumpGlobals(void) */

void __thiscall CGlobalState::DumpGlobals(CGlobalState *this)

{
  int iVar1;
  
  (*g_engfuncs.pfnAlertMessage)(at_console,"-- Globals --\n");
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 100)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"%s: %s (%s)\n",iVar1,iVar1 + 0x40,
               *(undefined4 *)(estates_1212 + *(int *)(iVar1 + 0x60) * 4));
  }
  return;
}

/* 000f3ee4  CGlobalState::EntityAdd  (123 bytes)
 * undefined EntityAdd(int param_1, int param_2, undefined4 param_3)
 */
/* CGlobalState::EntityAdd(int, int, GLOBALESTATE) */

void __thiscall
CGlobalState::EntityAdd(CGlobalState *this,int param_1,int param_2,undefined4 param_3)

{
  char *__dest;
  
  __dest = calloc(0x68,1);
  *(undefined4 *)(__dest + 100) = *(undefined4 *)this;
  *(char **)this = __dest;
  strcpy(__dest,gpGlobals->pStringBase + param_1);
  strcpy(__dest + 0x40,gpGlobals->pStringBase + param_2);
  *(undefined4 *)(__dest + 0x60) = param_3;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

/* 000f3f60  CGlobalState::EntitySetState  (53 bytes)
 * undefined EntitySetState(int param_1, undefined4 param_2)
 */
/* CGlobalState::EntitySetState(int, GLOBALESTATE) */

void __thiscall CGlobalState::EntitySetState(CGlobalState *this,int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = Find(this,param_1);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)(pcVar1 + 0x60) = param_2;
  }
  return;
}

/* 000f3f98  CGlobalState::EntityFromTable  (37 bytes)
 * undefined EntityFromTable(int param_1)
 */
/* CGlobalState::EntityFromTable(int) */

void __thiscall CGlobalState::EntityFromTable(CGlobalState *this,int param_1)

{
  Find(this,param_1);
  return;
}

/* 000f3fc0  CGlobalState::EntityGetState  (54 bytes)
 * undefined4 EntityGetState(int param_1)
 */
/* CGlobalState::EntityGetState(int) */

undefined4 __thiscall CGlobalState::EntityGetState(CGlobalState *this,int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = Find(this,param_1);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pcVar1 + 0x60);
  }
  return uVar2;
}

/* 000f3ff8  CGlobalState::Save  (136 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGlobalState::Save(CSave &) */

undefined4 __thiscall CGlobalState::Save(CGlobalState *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = CSave::WriteFields(param_1,"GLOBAL",(int)this,(int *)m_SaveData,1);
  if (iVar1 == 0) {
LAB_000f4032:
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    for (iVar1 = *(int *)this; (iVar4 < *(int *)(this + 4) && (iVar1 != 0));
        iVar1 = *(int *)(iVar1 + 100)) {
      iVar3 = CSave::WriteFields(param_1,"GENT",iVar1,(int *)gGlobalEntitySaveData,3);
      if (iVar3 == 0) goto LAB_000f4032;
      iVar4 = iVar4 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* 000f4088  CGlobalState::Restore  (460 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGlobalState::Restore(CRestore &) */

undefined4 __thiscall CGlobalState::Restore(CGlobalState *this,CRestore *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_90;
  undefined1 local_8c [64];
  undefined1 auStack_4c [32];
  undefined4 local_2c;
  
  ClearStates(this);
  iVar2 = CRestore::ReadFields(param_1,"GLOBAL",(int)this,(int)m_SaveData,1);
  if (iVar2 == 0) {
LAB_000f40db:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 4);
    *(undefined4 *)(this + 4) = 0;
    local_90 = 0;
    if (0 < (int)uVar1) {
      if ((0 < (int)uVar1) && ((uVar1 & 1) == 0)) goto LAB_000f418c;
      iVar2 = CRestore::ReadFields(param_1,"GENT",(int)local_8c,(int)gGlobalEntitySaveData,3);
      if (iVar2 == 0) goto LAB_000f40db;
      EntityAdd(this,(int)local_8c - (int)gpGlobals->pStringBase,
                (int)(auStack_4c + -(int)gpGlobals->pStringBase),local_2c);
      for (local_90 = 1; local_90 < (int)uVar1; local_90 = local_90 + 2) {
LAB_000f418c:
        iVar2 = CRestore::ReadFields(param_1,"GENT",(int)local_8c,(int)gGlobalEntitySaveData,3);
        if (iVar2 == 0) goto LAB_000f40db;
        EntityAdd(this,(int)local_8c - (int)gpGlobals->pStringBase,
                  (int)(auStack_4c + -(int)gpGlobals->pStringBase),local_2c);
        iVar2 = CRestore::ReadFields(param_1,"GENT",(int)local_8c,(int)gGlobalEntitySaveData,3);
        if (iVar2 == 0) goto LAB_000f40db;
        EntityAdd(this,(int)local_8c - (int)gpGlobals->pStringBase,
                  (int)(auStack_4c + -(int)gpGlobals->pStringBase),local_2c);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

/* 000f4258  CGlobalState::EntityUpdate  (80 bytes)
 * undefined EntityUpdate(int param_1, int param_2)
 */
/* CGlobalState::EntityUpdate(int, int) */

void __thiscall CGlobalState::EntityUpdate(CGlobalState *this,int param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = Find(this,param_1);
  if (pcVar1 != (char *)0x0) {
    strcpy(pcVar1 + 0x40,gpGlobals->pStringBase + param_2);
  }
  return;
}

/* 000f42a8  CGlobalState::ClearStates  (65 bytes)
 * undefined ClearStates(void)
 */
/* CGlobalState::ClearStates(void) */

void __thiscall CGlobalState::ClearStates(CGlobalState *this)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = *(void **)this;
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((int)__ptr + 100);
    free(__ptr);
    __ptr = pvVar1;
  }
  Reset(this);
  return;
}

