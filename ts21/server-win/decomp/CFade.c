/* mp.dll - CFade (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019970  CFade::Spawn  (39 bytes)
 * undefined Spawn()
 */
void __fastcall CFade::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  return;
}

/* 100199a0  CFade::KeyValue  (133 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFade::KeyValue(CFade *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  puVar1 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_duration_10092f14;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_take = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_holdtime_10092f2c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_save = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10019a30  CFade::Use  (198 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CFade::Use(CFade *this,int *param_1)

{
  int iVar1;
  
  if ((this->pev->spawnflags & 4U) == 0) {
    __ftol();
    UTIL_ScreenFadeAll();
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xac))();
    if (iVar1 != 0) {
      __ftol();
      UTIL_ScreenFade(param_1);
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,this,3,0);
      return;
    }
  }
  CBaseEntity::SUB_UseTargets((CBaseEntity *)this,this,3,0);
  return;
}

