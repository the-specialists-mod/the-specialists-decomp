/* mp.dll - CXenSporeLarge (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007cd40  CXenSporeLarge::Spawn  (438 bytes)
 * undefined Spawn()
 */
void __fastcall CXenSporeLarge::Spawn(int *param_1)

{
  float *pfVar1;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  Vector VStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  Vector VStack_18;
  Vector VStack_c;
  
  *(undefined4 *)(param_1[1] + 0x110) = 2;
  CXenSpore::Spawn(param_1);
  fStack_90 = 48.0;
  fStack_8c = 48.0;
  fStack_88 = 240.0;
  fStack_84 = -48.0;
  fStack_80 = -48.0;
  fStack_7c = 110.0;
  UTIL_SetSize(param_1[1],&fStack_84,&fStack_90);
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_30,&fStack_48,(float *)0x0);
  pfVar1 = (float *)&DAT_102efbc8;
  do {
    fStack_7c = pfVar1[1];
    fStack_84 = fStack_48 * fStack_7c;
    fStack_80 = fStack_44 * fStack_7c;
    fStack_7c = fStack_40 * fStack_7c;
    Vector::Vector(&VStack_60,&fStack_84);
    fStack_70 = *pfVar1;
    fStack_78 = fStack_30 * fStack_70;
    fStack_90 = VStack_60.x;
    fStack_74 = fStack_2c * fStack_70;
    fStack_88 = VStack_60.z;
    fStack_70 = fStack_28 * fStack_70;
    fStack_8c = VStack_60.y;
    Vector::Vector(&VStack_c,&fStack_78);
    Vector::Vector(&VStack_18,&VStack_c.x);
    fStack_54 = VStack_18.x + fStack_90;
    fStack_68 = VStack_18.y + fStack_8c;
    uStack_3c = 0x41400000;
    uStack_38 = 0x41400000;
    fStack_64 = VStack_18.z + fStack_88;
    uStack_34 = 0x42f00000;
    uStack_24 = 0xc1400000;
    uStack_20 = 0xc1400000;
    uStack_1c = 0;
    fStack_50 = fStack_68;
    fStack_4c = fStack_64;
    CXenHull::CreateHull((int)param_1,&uStack_24,&uStack_3c,&fStack_54);
    pfVar1 = pfVar1 + 3;
  } while ((int)pfVar1 < 0x102efc04);
  return;
}

