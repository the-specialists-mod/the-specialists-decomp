/* mp.dll - CActAnimating (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006cd30  CActAnimating::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CXenPLight::Save, CXenTree::Save
 */
void __thiscall CActAnimating::Save(CActAnimating *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CActAnimating_1009b880,(int)this,0x1009b74c,1);
  return;
}

/* 1006cd60  CActAnimating::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CXenPLight::Restore, CXenTree::Restore
 */
void __thiscall CActAnimating::Restore(CActAnimating *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CActAnimating_1009b880,(int)this,0x1009b74c,1);
  return;
}

/* 1006cd90  CActAnimating::SetActivity  (56 bytes)
 * undefined SetActivity(int param_1)
 * called by: CXenPLight::Spawn, CXenPLight::Think, CXenPLight::Touch, CXenTree::Attack, CXenTree::Spawn, CXenTree::Think
 */
void __thiscall CActAnimating::SetActivity(CActAnimating *this,int param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,param_1);
  if (iVar1 != -1) {
    *(int *)(*(int *)(this + 4) + 0x128) = iVar1;
    *(int *)(this + 0x70) = param_1;
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
    CBaseAnimating::ResetSequenceInfo((int)this);
  }
  return;
}

/* 1006dde0  CActAnimating::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CActAnimating::ObjectCaps(void)

{
  return 0;
}

