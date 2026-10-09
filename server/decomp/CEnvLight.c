/* ts_i386.so - CEnvLight (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cbdb0  CEnvLight::KeyValue  (637 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvLight::KeyValue(KeyValueData_s *) */

void __thiscall CEnvLight::KeyValue(CEnvLight *this,int param_1)

{
  int iVar1;
  undefined2 in_FPUControlWord;
  double dVar2;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined2 local_60;
  undefined2 uStack_5e;
  char local_5c [76];
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"_light");
  if (iVar1 == 0) {
    iVar1 = sscanf(*(char **)(param_1 + 8),"%d %d %d %d\n",&local_74,&local_70,&local_6c,&local_68);
    if (iVar1 == 1) {
      local_6c = local_74;
      local_70 = local_74;
    }
    else if (iVar1 == 4) {
      dVar2 = (double)local_68 * 0.00392156862745098;
      local_74 = (int)ROUND(dVar2 * (double)local_74);
      local_70 = (int)ROUND(dVar2 * (double)local_70);
      _local_60 = CONCAT22(uStack_5e,in_FPUControlWord);
      local_6c = (int)ROUND(dVar2 * (double)local_6c);
      local_64 = local_6c;
    }
    dVar2 = pow((double)local_74 * 0.008771929824561403,0.6);
    local_74 = (int)ROUND(dVar2 * 264.0);
    local_64 = local_74;
    dVar2 = pow((double)local_70 * 0.008771929824561403,0.6);
    local_70 = (int)ROUND(dVar2 * 264.0);
    local_64 = local_70;
    dVar2 = pow((double)local_6c * 0.008771929824561403,0.6);
    _local_60 = CONCAT22(uStack_5e,in_FPUControlWord);
    local_6c = (int)ROUND(dVar2 * 264.0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_64 = local_6c;
    sprintf(local_5c,"%d",local_74);
    (*g_engfuncs.pfnCVarSetString)("sv_skycolor_r",local_5c);
    sprintf(local_5c,"%d",local_70);
    (*g_engfuncs.pfnCVarSetString)("sv_skycolor_g",local_5c);
    sprintf(local_5c,"%d",local_6c);
    (*g_engfuncs.pfnCVarSetString)("sv_skycolor_b",local_5c);
  }
  else {
    CLight::KeyValue((CLight *)this,param_1);
  }
  return;
}

/* 000cc030  CEnvLight::Spawn  (206 bytes)
 * undefined Spawn(void)
 */
/* CEnvLight::Spawn(void) */

void __thiscall CEnvLight::Spawn(CEnvLight *this)

{
  char local_5c [76];
  
  UTIL_MakeAimVectors((uint *)this->pev->angles);
  sprintf(local_5c,"%f",(double)gpGlobals->v_forward[0]);
  (*g_engfuncs.pfnCVarSetString)("sv_skyvec_x",local_5c);
  sprintf(local_5c,"%f",(double)gpGlobals->v_forward[1]);
  (*g_engfuncs.pfnCVarSetString)("sv_skyvec_y",local_5c);
  sprintf(local_5c,"%f",(double)gpGlobals->v_forward[2]);
  (*g_engfuncs.pfnCVarSetString)("sv_skyvec_z",local_5c);
  CLight::Spawn((CLight *)this);
  return;
}

