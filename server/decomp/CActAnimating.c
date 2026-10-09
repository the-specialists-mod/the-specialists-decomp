/* ts_i386.so - CActAnimating (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f5064  CActAnimating::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CActAnimating::Save(CSave &) */

undefined4 __thiscall CActAnimating::Save(CActAnimating *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CActAnimating",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000f50b4  CActAnimating::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CActAnimating::Restore(CRestore &) */

undefined4 __thiscall CActAnimating::Restore(CActAnimating *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CActAnimating",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000f5104  CActAnimating::SetActivity  (85 bytes)
 * undefined SetActivity(int param_1)
 */
/* CActAnimating::SetActivity(Activity) */

void __thiscall CActAnimating::SetActivity(CActAnimating *this,int param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,param_1);
  if (iVar1 != -1) {
    this->pev->sequence = iVar1;
    *(int *)&this[1].field_0x1c = param_1;
    this->pev->frame = 0.0;
    CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  }
  return;
}

/* 000f6a78  CActAnimating::global.constructors.keyed.to.m_SaveData  (19 bytes)
 * undefined global.constructors.keyed.to.m_SaveData(void)
 */
/* global constructors keyed to CActAnimating::m_SaveData */

void CActAnimating::global_constructors_keyed_to_m_SaveData(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000f6fd4  CActAnimating::GetActivity  (11 bytes)
 * undefined4 GetActivity(void)
 */
/* CActAnimating::GetActivity(void) */

undefined4 __thiscall CActAnimating::GetActivity(CActAnimating *this)

{
  return *(undefined4 *)&this[1].field_0x1c;
}

/* 000f6fe0  CActAnimating::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CActAnimating::ObjectCaps(void) */

undefined4 CActAnimating::ObjectCaps(void)

{
  return 0;
}

