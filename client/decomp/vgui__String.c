/* client.dll - vgui__String (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100148f0  vgui::String::operator=  (13 bytes)
 * String * operator=(String * param_1)
 */
/* public: class vgui::String & __thiscall vgui::String::operator=(class vgui::String const &) */

String * __thiscall vgui::String::operator=(String *this,String *param_1)

{
                    /* 0x148f0  143  ??4String@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}

