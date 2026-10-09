/* ts_i386.so - CEnvShooter (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bc930  CEnvShooter::KeyValue  (229 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvShooter::KeyValue(KeyValueData_s *) */

void __thiscall CEnvShooter::KeyValue(CEnvShooter *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"shootmodel");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->model = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"shootsounds");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)(param_1 + 0xc) = 1;
      switch(uVar2) {
      case 0:
        *(undefined4 *)&this->field_0x74 = 0;
        break;
      case 1:
        *(undefined4 *)&this->field_0x74 = 1;
        break;
      case 2:
        *(undefined4 *)&this->field_0x74 = 2;
        break;
      case 3:
        *(undefined4 *)&this->field_0x74 = 3;
        break;
      case 4:
        *(undefined4 *)&this->field_0x74 = 8;
        break;
      default:
        *(undefined4 *)&this->field_0x74 = 9;
      }
    }
    else {
      CGibShooter::KeyValue((CGibShooter *)this,param_1);
    }
  }
  return;
}

/* 000bca44  CEnvShooter::Precache  (75 bytes)
 * undefined Precache(void)
 */
/* CEnvShooter::Precache(void) */

void __thiscall CEnvShooter::Precache(CEnvShooter *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  *(int *)&this->field_0x78 = iVar1;
  CBreakable::MaterialSoundPrecache(*(undefined4 *)&this->field_0x74);
  return;
}

/* 000bca90  CEnvShooter::CreateGib  (274 bytes)
 * CGib * CreateGib(void)
 */
/* CEnvShooter::CreateGib(void) */

CGib * __thiscall CEnvShooter::CreateGib(CEnvShooter *this)

{
  CGib *this_00;
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  this_00 = GetClassPtr<CGib>(0);
  CGib::Spawn(this_00,gpGlobals->pStringBase + this->pev->model);
  iVar1 = 0;
  if (1 < this->pev->body) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,this->pev->body + -1);
  }
  this_00->pev->body = iVar1;
  *(undefined4 *)&this_00->field_0x64 = 0xffffffff;
  *(undefined4 *)&this_00->field_0x6c = *(undefined4 *)&this->field_0x74;
  this_00->pev->rendermode = this->pev->rendermode;
  this_00->pev->renderamt = this->pev->renderamt;
  pvVar2 = this->pev->rendercolor;
  pvVar3 = this_00->pev->rendercolor;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this_00->pev->renderfx = this->pev->renderfx;
  this_00->pev->scale = this->pev->scale;
  this_00->pev->skin = this->pev->skin;
  return this_00;
}

