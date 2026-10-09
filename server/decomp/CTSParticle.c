/* ts_i386.so - CTSParticle (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00073e80  CTSParticle::KeyValue  (65 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSParticle::KeyValue(KeyValueData_s *) */

void __thiscall CTSParticle::KeyValue(CTSParticle *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = CTSSharedEmitter::ParticleKeyValue
                    (CTSSharedEmitter::s_Emitter,(int)&this->field_0x68,*(char **)(param_1 + 4),
                     *(char **)(param_1 + 8));
  *(uint *)(param_1 + 0xc) = (uint)((char)uVar1 != '\0');
  return;
}

/* 00073f98  CTSParticle::CheckValues  (273 bytes)
 * undefined CheckValues(void)
 */
/* CTSParticle::CheckValues(void) */

void __thiscall CTSParticle::CheckValues(CTSParticle *this)

{
  if (*(float *)&this->field_0x74 < 0.0) {
    *(undefined4 *)&this->field_0x74 = 0;
  }
  if (*(float *)&this->field_0x78 < 0.0) {
    *(undefined4 *)&this->field_0x78 = 0;
  }
  if (*(float *)&this->field_0x84 < 0.0) {
    *(undefined4 *)&this->field_0x84 = 0;
  }
  if (*(float *)&this->field_0x88 < 0.0) {
    *(undefined4 *)&this->field_0x88 = 0;
  }
  if (1.0 < *(float *)&this->field_0x84) {
    *(undefined4 *)&this->field_0x84 = 0x3f800000;
  }
  if (1.0 < *(float *)&this->field_0x88) {
    *(undefined4 *)&this->field_0x88 = 0x3f800000;
  }
  if (*(float *)&this->field_0x94 < 0.0) {
    *(undefined4 *)&this->field_0x94 = 0;
  }
  if (*(float *)&this->field_0x98 < 0.0) {
    *(undefined4 *)&this->field_0x98 = 0;
  }
  if (*(int *)&this->field_0xa4 < 0) {
    *(undefined4 *)&this->field_0xa4 = 0;
  }
  if (*(int *)&this->field_0xa8 < 0) {
    *(undefined4 *)&this->field_0xa8 = 0;
  }
  return;
}

/* 00074134  CTSParticle::Spawn  (160 bytes)
 * undefined Spawn(void)
 */
/* CTSParticle::Spawn(void) */

void __thiscall CTSParticle::Spawn(CTSParticle *this)

{
  int iVar1;
  
  this->pev->classname = (int)"ts_particle" - (int)gpGlobals->pStringBase;
  CheckValues(this);
  iVar1 = CTSSharedEmitter::AddParticle
                    ((CTSSharedEmitter *)CTSSharedEmitter::s_Emitter,(int *)&this->field_0x68);
  *(int *)&this->field_0x64 = iVar1;
  if (iVar1 == -1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"Too many particles! Particle limit is %d particles.\n",0x200);
    UTIL_Remove((int *)this);
  }
  if (this->field_0x1c0 != '\0') {
    (*g_engfuncs.pfnPrecacheSound)(&this->field_0x1c0);
  }
  return;
}

