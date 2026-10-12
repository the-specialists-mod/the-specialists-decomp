/* client.dll - vgui__TextEntry (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001221  vgui::TextEntry::operator=  (5 bytes)
 * TextEntry * operator=(TextEntry * param_1)
 */
/* public: class vgui::TextEntry & __thiscall vgui::TextEntry::operator=(class vgui::TextEntry const
   &) */

TextEntry * __thiscall vgui::TextEntry::operator=(TextEntry *this,TextEntry *param_1)

{
  InputSignal *pIStack_50;
  uint uStack_c;
  
                    /* 0x1221  147  ??4TextEntry@vgui@@QAEAAV01@ABV01@@Z */
  Panel::operator=((Panel *)this,(Panel *)param_1);
  if (param_1 == (TextEntry *)0x0) {
    pIStack_50 = (InputSignal *)0x0;
  }
  else {
    pIStack_50 = (InputSignal *)(param_1 + 0xbc);
  }
  InputSignal::operator=((InputSignal *)(this + 0xbc),pIStack_50);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  this[0xd0] = param_1[0xd0];
  this[0xd1] = param_1[0xd1];
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  for (uStack_c = 0; uStack_c < 2; uStack_c = uStack_c + 1) {
    *(undefined4 *)(this + uStack_c * 4 + 0xdc) = *(undefined4 *)(param_1 + uStack_c * 4 + 0xdc);
  }
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return this;
}

/* 1000196a  vgui::TextEntry::TextEntry  (5 bytes)
 * undefined TextEntry(TextEntry * param_1)
 */
/* public: __thiscall vgui::TextEntry::TextEntry(class vgui::TextEntry const &) */

TextEntry * __thiscall vgui::TextEntry::TextEntry(TextEntry *this,TextEntry *param_1)

{
  InputSignal *pIStack_4c;
  
                    /* 0x196a  84  ??0TextEntry@vgui@@QAE@ABV01@@Z */
  Panel::Panel((Panel *)this,(Panel *)param_1);
  if (param_1 == (TextEntry *)0x0) {
    pIStack_4c = (InputSignal *)0x0;
  }
  else {
    pIStack_4c = (InputSignal *)(param_1 + 0xbc);
  }
  InputSignal::InputSignal((InputSignal *)(this + 0xbc),pIStack_4c);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  this[0xd0] = param_1[0xd0];
  this[0xd1] = param_1[0xd1];
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined ***)this = &_vftable__for__vgui__Panel__;
  *(undefined ***)(this + 0xbc) = &_vftable__for__vgui__InputSignal__;
  return this;
}

