/* ts_i386.so - CSoundEnt (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e2140  CSoundEnt::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CSoundEnt::Spawn(void) */

void __thiscall CSoundEnt::Spawn(CSoundEnt *this)

{
  this->pev->solid = 0;
  Initialize(this);
  this->pev->nextthink = gpGlobals->time + 1.0;
  return;
}

/* 000e2188  CSoundEnt::Think  (285 bytes)
 * undefined Think(void)
 */
/* CSoundEnt::Think(void) */

void __thiscall CSoundEnt::Think(CSoundEnt *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this->pev->nextthink = gpGlobals->time + 0.3;
  iVar1 = -1;
  iVar2 = *(int *)&this->field_0x68;
  while (iVar2 != -1) {
    if ((gpGlobals->time < *(float *)(&this->field_0x88 + iVar2 * 0x20)) ||
       (*(float *)(&this->field_0x88 + iVar2 * 0x20) == -1.0)) {
      iVar1 = iVar2;
      iVar2 = *(int *)(&this->field_0x8c + iVar2 * 0x20);
    }
    else {
      iVar3 = *(int *)(&this->field_0x8c + iVar2 * 0x20);
      FreeSound(iVar2,iVar1);
      iVar2 = iVar3;
    }
  }
  if (*(int *)&this->field_0x70 != 0) {
    iVar1 = ISoundsInList(this,2);
    iVar1 = iVar1 - *(int *)&this->field_0x6c;
    iVar2 = ISoundsInList(this,1);
    iVar3 = ISoundsInList(this,2);
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"Soundlist: %d / %d  (%d)\n",iVar3,iVar2,iVar1);
    iVar1 = ISoundsInList(this,2);
    *(int *)&this->field_0x6c = iVar1;
  }
  return;
}

/* 000e22a8  CSoundEnt::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CSoundEnt::Precache(void) */

void CSoundEnt::Precache(void)

{
  return;
}

/* 000e22ac  CSoundEnt::FreeSound  (125 bytes)
 * undefined FreeSound(int param_1, int param_2)
 */
/* CSoundEnt::FreeSound(int, int) */

void CSoundEnt::FreeSound(int param_1,int param_2)

{
  if (pSoundEnt != 0) {
    if (param_2 == -1) {
      *(undefined4 *)(pSoundEnt + 0x68) = *(undefined4 *)(param_1 * 0x20 + 0x8c + pSoundEnt);
    }
    else {
      *(undefined4 *)(pSoundEnt + 0x8c + param_2 * 0x20) =
           *(undefined4 *)(pSoundEnt + 0x8c + param_1 * 0x20);
    }
    *(undefined4 *)(param_1 * 0x20 + 0x8c + pSoundEnt) = *(undefined4 *)(pSoundEnt + 100);
    *(int *)(pSoundEnt + 100) = param_1;
  }
  return;
}

/* 000e232c  CSoundEnt::IAllocSound  (92 bytes)
 * int IAllocSound(void)
 */
/* CSoundEnt::IAllocSound(void) */

int __thiscall CSoundEnt::IAllocSound(CSoundEnt *this)

{
  int iVar1;
  
  if (*(int *)&this->field_0x64 == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Free Sound List is full!\n");
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)&this->field_0x64;
    *(undefined4 *)&this->field_0x64 = *(undefined4 *)(&this->field_0x8c + iVar1 * 0x20);
    *(undefined4 *)(&this->field_0x8c + iVar1 * 0x20) = *(undefined4 *)&this->field_0x68;
    *(int *)&this->field_0x68 = iVar1;
  }
  return iVar1;
}

/* 000e238c  CSoundEnt::InsertSound  (179 bytes)
 * undefined InsertSound(undefined4 param_1, undefined4 * param_2, undefined4 param_3, float param_4)
 */
/* CSoundEnt::InsertSound(int, Vector const &, int, float) */

void CSoundEnt::InsertSound(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (pSoundEnt != (CSoundEnt *)0x0) {
    iVar1 = IAllocSound(pSoundEnt);
    if (iVar1 == -1) {
      (*g_engfuncs.pfnAlertMessage)(at_console,"Could not AllocSound() for InsertSound() (DLL)\n");
    }
    else {
      iVar1 = iVar1 * 0x20;
      puVar3 = (undefined4 *)(&pSoundEnt->field_0x74 + iVar1);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(&pSoundEnt->field_0x80 + iVar1) = param_1;
      *(undefined4 *)(&pSoundEnt->field_0x84 + iVar1) = param_3;
      *(float *)(&pSoundEnt->field_0x88 + iVar1) = param_4 + gpGlobals->time;
    }
  }
  return;
}

/* 000e2444  CSoundEnt::Initialize  (340 bytes)
 * undefined Initialize(void)
 */
/* CSoundEnt::Initialize(void) */

void __thiscall CSoundEnt::Initialize(CSoundEnt *this)

{
  int iVar1;
  CSound *this_00;
  int iVar2;
  CSoundEnt *pCVar3;
  longdouble extraout_ST0;
  
  *(undefined4 *)&this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  this_00 = (CSound *)&this->field_0x74;
  iVar2 = 0;
  pCVar3 = this;
  do {
    iVar1 = iVar2;
    CSound::Clear(this_00);
    *(int *)&pCVar3->field_0x8c = iVar1 + 1;
    CSound::Clear(this_00 + 0x20);
    *(int *)&pCVar3->field_0xac = iVar1 + 2;
    CSound::Clear(this_00 + 0x40);
    *(int *)&pCVar3->field_0xcc = iVar1 + 3;
    CSound::Clear(this_00 + 0x60);
    iVar2 = iVar1 + 4;
    *(int *)&pCVar3->field_0xec = iVar2;
    this_00 = this_00 + 0x80;
    pCVar3 = (CSoundEnt *)&pCVar3->field_0x80;
  } while (iVar2 < 0x40);
  *(undefined4 *)(&this->field_0xec + iVar1 * 0x20) = 0xffffffff;
  iVar2 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = IAllocSound(pSoundEnt);
      if (iVar1 == -1) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"Could not AllocSound() for Client Reserve! (DLL)\n");
        return;
      }
      *(undefined4 *)(&pSoundEnt->field_0x88 + iVar1 * 0x20) = 0xbf800000;
      iVar2 = iVar2 + 1;
    } while (iVar2 < gpGlobals->maxClients);
  }
  (*g_engfuncs.pfnCVarGetFloat)("displaysoundlist");
  *(uint *)&this->field_0x70 = (uint)(extraout_ST0 == (longdouble)1.0);
  return;
}

/* 000e259c  CSoundEnt::ISoundsInList  (119 bytes)
 * int ISoundsInList(int param_1)
 */
/* CSoundEnt::ISoundsInList(int) */

int __thiscall CSoundEnt::ISoundsInList(CSoundEnt *this,int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  if (param_1 == 1) {
    unaff_ESI = *(int *)&this->field_0x64;
  }
  else if (param_1 == 2) {
    unaff_ESI = *(int *)&this->field_0x68;
  }
  else {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Unknown Sound List Type!\n");
  }
  iVar1 = 0;
  if (unaff_ESI != -1) {
    iVar1 = 0;
    for (; unaff_ESI != -1; unaff_ESI = *(int *)(&this->field_0x8c + unaff_ESI * 0x20)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

/* 000e2618  CSoundEnt::ActiveList  (44 bytes)
 * undefined4 ActiveList(void)
 */
/* CSoundEnt::ActiveList(void) */

undefined4 CSoundEnt::ActiveList(void)

{
  undefined4 uVar1;
  
  if (pSoundEnt == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(pSoundEnt + 0x68);
  }
  return uVar1;
}

/* 000e2648  CSoundEnt::FreeList  (44 bytes)
 * undefined4 FreeList(void)
 */
/* CSoundEnt::FreeList(void) */

undefined4 CSoundEnt::FreeList(void)

{
  undefined4 uVar1;
  
  if (pSoundEnt == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(pSoundEnt + 100);
  }
  return uVar1;
}

/* 000e2678  CSoundEnt::SoundPointerForIndex  (119 bytes)
 * int SoundPointerForIndex(int param_1)
 */
/* CSoundEnt::SoundPointerForIndex(int) */

int CSoundEnt::SoundPointerForIndex(int param_1)

{
  char *szFmt;
  
  if (pSoundEnt != 0) {
    if (param_1 < 0x40) {
      if (-1 < param_1) {
        return param_1 * 0x20 + pSoundEnt + 0x74;
      }
      szFmt = "SoundPointerForIndex() - Index < 0!\n";
    }
    else {
      szFmt = "SoundPointerForIndex() - Index too large!\n";
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  }
  return 0;
}

/* 000e26f8  CSoundEnt::ClientSoundIndex  (41 bytes)
 * int ClientSoundIndex(undefined4 param_1)
 */
/* CSoundEnt::ClientSoundIndex(edict_s *) */

int CSoundEnt::ClientSoundIndex(edict_t *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_1);
  return iVar1 + -1;
}

/* 000e2808  CSoundEnt::IsEmpty  (17 bytes)
 * bool IsEmpty(void)
 */
/* CSoundEnt::IsEmpty(void) */

bool __thiscall CSoundEnt::IsEmpty(CSoundEnt *this)

{
  return *(int *)&this->field_0x68 == -1;
}

/* 000e281c  CSoundEnt::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CSoundEnt::ObjectCaps(void) */

undefined4 CSoundEnt::ObjectCaps(void)

{
  return 0x80000000;
}

