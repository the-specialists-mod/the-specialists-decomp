/* client.dll - vgui__InputStream (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001668  vgui::InputStream::InputStream  (5 bytes)
 * undefined InputStream(InputStream * param_1)
 * called by: FUN_100326a0, FUN_1009cab0
 */
/* public: __thiscall vgui::InputStream::InputStream(class vgui::InputStream const &) */

InputStream * __thiscall vgui::InputStream::InputStream(InputStream *this,InputStream *param_1)

{
                    /* 0x1668  60  ??0InputStream@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10001c99  vgui::InputStream::InputStream  (5 bytes)
 * undefined InputStream(void)
 * called by: FUN_100a06d0
 */
/* public: __thiscall vgui::InputStream::InputStream(void) */

InputStream * __thiscall vgui::InputStream::InputStream(InputStream *this)

{
                    /* 0x1c99  61  ??0InputStream@vgui@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  return this;
}

/* 10002dd3  vgui::InputStream::operator=  (5 bytes)
 * InputStream * operator=(InputStream * param_1)
 * called by: FUN_100326f0, FUN_1009cb70
 */
/* public: class vgui::InputStream & __thiscall vgui::InputStream::operator=(class vgui::InputStream
   const &) */

InputStream * __thiscall vgui::InputStream::operator=(InputStream *this,InputStream *param_1)

{
                    /* 0x2dd3  127  ??4InputStream@vgui@@QAEAAV01@ABV01@@Z */
  return this;
}

