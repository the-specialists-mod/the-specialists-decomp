/* ts_i386.so - CShake (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bd4b8  CShake::Spawn  (74 bytes)
 * undefined Spawn(void)
 */
/* CShake::Spawn(void) */

void __thiscall CShake::Spawn(CShake *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  if ((this->pev->spawnflags & 1) != 0) {
    this->pev->dmg = 0.0;
  }
  return;
}

/* 000bd504  CShake::KeyValue  (283 bytes)
 * undefined KeyValue(int param_1)
 */
/* CShake::KeyValue(KeyValueData_s *) */

void __thiscall CShake::KeyValue(CShake *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"amplitude");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    this->pev->scale = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"frequency");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      this->pev->dmg_save = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"duration");
      if (iVar1 == 0) {
        lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        this->pev->dmg_take = (float)lVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"radius");
        if (iVar1 == 0) {
          lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          this->pev->dmg = (float)lVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
      }
    }
  }
  return;
}

/* 000bd624  CShake::Use  (65 bytes)
 * undefined Use(int * param_1)
 */
/* CShake::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CShake::Use(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  UTIL_ScreenShake((float *)(*param_1 + 8),*(float *)(iVar1 + 0x144),*(float *)(iVar1 + 0x1dc),
                   *(float *)(iVar1 + 0x1d8),*(float *)(iVar1 + 0x1e0));
  return;
}

/* 000bf4ec  CShake::Amplitude  (13 bytes)
 * longdouble Amplitude(CShake * this)
 */
/* CShake::Amplitude(void) */

longdouble __thiscall CShake::Amplitude(CShake *this)

{
  return (longdouble)this->pev->scale;
}

/* 000bf4fc  CShake::Frequency  (13 bytes)
 * longdouble Frequency(CShake * this)
 */
/* CShake::Frequency(void) */

longdouble __thiscall CShake::Frequency(CShake *this)

{
  return (longdouble)this->pev->dmg_save;
}

/* 000bf50c  CShake::Duration  (13 bytes)
 * longdouble Duration(CShake * this)
 */
/* CShake::Duration(void) */

longdouble __thiscall CShake::Duration(CShake *this)

{
  return (longdouble)this->pev->dmg_take;
}

/* 000bf51c  CShake::Radius  (13 bytes)
 * longdouble Radius(CShake * this)
 */
/* CShake::Radius(void) */

longdouble __thiscall CShake::Radius(CShake *this)

{
  return (longdouble)this->pev->dmg;
}

/* 000bf52c  CShake::SetAmplitude  (17 bytes)
 * undefined SetAmplitude(undefined4 param_1)
 */
/* CShake::SetAmplitude(float) */

void __thiscall CShake::SetAmplitude(CShake *this,float param_1)

{
  this->pev->scale = param_1;
  return;
}

/* 000bf540  CShake::SetFrequency  (17 bytes)
 * undefined SetFrequency(undefined4 param_1)
 */
/* CShake::SetFrequency(float) */

void __thiscall CShake::SetFrequency(CShake *this,float param_1)

{
  this->pev->dmg_save = param_1;
  return;
}

/* 000bf554  CShake::SetDuration  (17 bytes)
 * undefined SetDuration(undefined4 param_1)
 */
/* CShake::SetDuration(float) */

void __thiscall CShake::SetDuration(CShake *this,float param_1)

{
  this->pev->dmg_take = param_1;
  return;
}

/* 000bf568  CShake::SetRadius  (17 bytes)
 * undefined SetRadius(undefined4 param_1)
 */
/* CShake::SetRadius(float) */

void __thiscall CShake::SetRadius(CShake *this,float param_1)

{
  this->pev->dmg = param_1;
  return;
}

