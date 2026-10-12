/* client.dll - type_info (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100bb900  type_info::operator==  (40 bytes)
 * int operator==(type_info * param_1)
 */
/* Library Function - Single Match
    public: int __thiscall type_info::operator==(class type_info const &)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(iVar1 == 0);
}

/* 100bb960  type_info::before  (44 bytes)
 * int before(type_info * param_1)
 */
/* Library Function - Single Match
    public: int __thiscall type_info::before(class type_info const &)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}

