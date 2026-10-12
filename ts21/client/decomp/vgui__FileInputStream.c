/* client.dll - vgui__FileInputStream (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000198d  vgui::FileInputStream::FileInputStream  (5 bytes)
 * undefined FileInputStream(FileInputStream * param_1)
 */
/* public: __thiscall vgui::FileInputStream::FileInputStream(class vgui::FileInputStream const &) */

FileInputStream * __thiscall
vgui::FileInputStream::FileInputStream(FileInputStream *this,FileInputStream *param_1)

{
                    /* 0x198d  51  ??0FileInputStream@vgui@@QAE@ABV01@@Z */
  InputStream::InputStream((InputStream *)this,(InputStream *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002644  vgui::FileInputStream::operator=  (5 bytes)
 * FileInputStream * operator=(FileInputStream * param_1)
 */
/* public: class vgui::FileInputStream & __thiscall vgui::FileInputStream::operator=(class
   vgui::FileInputStream const &) */

FileInputStream * __thiscall
vgui::FileInputStream::operator=(FileInputStream *this,FileInputStream *param_1)

{
                    /* 0x2644  120  ??4FileInputStream@vgui@@QAEAAV01@ABV01@@Z */
  InputStream::operator=((InputStream *)this,(InputStream *)param_1);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

