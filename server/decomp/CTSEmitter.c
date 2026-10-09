/* ts_i386.so - CTSEmitter (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00073e3c  CTSEmitter::KeyValue  (65 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSEmitter::KeyValue(KeyValueData_s *) */

void __thiscall CTSEmitter::KeyValue(CTSEmitter *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = CTSSharedEmitter::EmitterKeyValue
                    (CTSSharedEmitter::s_Emitter,(int)&this->field_0x68,*(char **)(param_1 + 4),
                     *(char **)(param_1 + 8));
  *(uint *)(param_1 + 0xc) = (uint)((char)uVar1 != '\0');
  return;
}

/* 000740ac  CTSEmitter::CheckValues  (133 bytes)
 * undefined CheckValues(void)
 */
/* CTSEmitter::CheckValues(void) */

void __thiscall CTSEmitter::CheckValues(CTSEmitter *this)

{
  if ((*(float *)&this->field_0xe4 <= 0.0) || (*(float *)&this->field_0xe8 <= 0.0)) {
    (*g_engfuncs.pfnAlertMessage)(at_error,"Emits per second <= 0! Should be greater then zero.\n");
  }
  if ((*(int *)&this->field_0xec < 1) || (*(int *)&this->field_0xf0 < 1)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"Particles per emit <= 0! Should be greater then zero.\n");
  }
  return;
}

/* 000741d4  CTSEmitter::Spawn  (180 bytes)
 * undefined Spawn(void)
 */
/* CTSEmitter::Spawn(void) */

void __thiscall CTSEmitter::Spawn(CTSEmitter *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  this->pev->classname = (int)"ts_emitter" - (int)gpGlobals->pStringBase;
  CheckValues(this);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = InitThink;
  this->pev->nextthink = gpGlobals->time + 0.01;
  pvVar2 = this->pev->origin;
  pvVar3 = (vec_t *)&this->field_0x6c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  if (*(int *)&this->field_0x64 == -1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"Too many emitters! Emitter limit is %d emitters.\n",0x200);
    UTIL_Remove((int *)this);
  }
  UTIL_Remove((int *)this);
  return;
}

/* 00074308  CTSEmitter::InitThink  (157 bytes)
 * undefined InitThink(void)
 */
/* CTSEmitter::InitThink(void) */

void __thiscall CTSEmitter::InitThink(CTSEmitter *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)UTIL_FindEntityByTargetname((int *)0x0,&this->field_0x80);
  if (puVar1 == (undefined4 *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,"Particle \'%s\' does not exist!\n",&this->field_0x80);
  }
  else {
    iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*puVar1,"ts_particle");
    if (iVar2 == 0) {
      return;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"\'%s\' is definitely not a ts_particle.\n",&this->field_0x80);
  }
  UTIL_Remove((int *)this);
  return;
}

