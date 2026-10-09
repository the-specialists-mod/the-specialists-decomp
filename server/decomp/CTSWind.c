/* ts_i386.so - CTSWind (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00073ec4  CTSWind::KeyValue  (205 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSWind::KeyValue(KeyValueData_s *) */

void __thiscall CTSWind::KeyValue(CTSWind *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcasecmp(*(char **)(param_1 + 4),"base");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcasecmp(*(char **)(param_1 + 4),"variance");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x68 = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcasecmp(*(char **)(param_1 + 4),"frequency");
      if (iVar1 == 0) {
        lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x6c = (float)lVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 00074288  CTSWind::Spawn  (92 bytes)
 * undefined Spawn(void)
 */
/* CTSWind::Spawn(void) */

void __thiscall CTSWind::Spawn(CTSWind *this)

{
  this->pev->classname = (int)"ts_wind" - (int)gpGlobals->pStringBase;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = BlowThink;
  this->pev->nextthink = gpGlobals->time + 0.01;
  return;
}

/* 000743a8  CTSWind::BlowThink  (259 bytes)
 * undefined BlowThink(void)
 */
/* CTSWind::BlowThink(void) */

void __thiscall CTSWind::BlowThink(CTSWind *this)

{
  int iVar1;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSParticleSystem,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,30000);
  (*g_engfuncs.pfnWriteLong)(iVar1);
  iVar1 = (*g_engfuncs.pfnRandomLong)(-0x2d,0x2d);
  (*g_engfuncs.pfnWriteLong)((int)ROUND((float)iVar1 + this->pev->angles[1]));
  (*g_engfuncs.pfnRandomFloat)(-*(float *)&this->field_0x68,*(float *)&this->field_0x68);
  (*g_engfuncs.pfnWriteCoord)((float)(extraout_ST0 + (longdouble)*(float *)&this->field_0x64));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnRandomFloat)(-*(float *)&this->field_0x6c * 0.5,*(float *)&this->field_0x6c * 0.5)
  ;
  this->pev->nextthink =
       (float)((longdouble)gpGlobals->time + (longdouble)*(float *)&this->field_0x6c +
              extraout_ST0_00);
  return;
}

