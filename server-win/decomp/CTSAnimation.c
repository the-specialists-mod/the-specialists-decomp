/* mp.dll - CTSAnimation (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100445c0  CTSAnimation::CTSAnimation  (1110 bytes)
 * int CTSAnimation(int param_1)
 * called by: GetClassPtr<CBasePlayer>, GetClassPtr<CBot>
 */
int __fastcall CTSAnimation::CTSAnimation(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = s_jump_left__100a2f78;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x1c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_jump_right__100a2f6c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x2c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_jump_forward__100a2f5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x3c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_jump_forward__100a2f5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x4c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2f54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x5c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_r__100a2f4c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x6c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2f44;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x7c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_b__100a2f3c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x8c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_l__100a2f30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x9c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_r__100a2f24;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xac);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_f__100a2f18;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xbc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_b__100a2f0c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xcc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_l_end_100a2f00;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xdc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_r_end_100a2ef4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xec);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_f_end_100a2ee8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xfc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_slide_b_end_100a2edc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x10c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_l_end_100a2ed0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x11c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_r_end_100a2ec4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 300);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_f_end_100a2eb8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x13c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_dive_b_end_100a2eac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x14c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2ea4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x15c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2e9c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x16c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2e94;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x17c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2e8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x18c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2ea4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x19c);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2e9c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x1ac);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_roll_f_high_100a2e80;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x1bc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a2e8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x1cc);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return param_1;
}

/* 10044a60  CTSAnimation::UpdateTimers  (227 bytes)
 * undefined UpdateTimers(int * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x6b37c; arg pl+0x278 */

void __thiscall CTSAnimation::UpdateTimers(CTSAnimation *this,int *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(*param_1 + 8))();
  fVar1 = fVar1 * (float10)gpGlobals->frametime;
  fVar2 = (float10)*(float *)(this + 0x1e0) - fVar1;
  if (fVar2 <= (float10)0.0) {
    fVar2 = (float10)0.0;
  }
  *(float *)(this + 0x1e0) = (float)fVar2;
  fVar2 = (float10)*(float *)(this + 0x1dc) - fVar1;
  if (fVar2 <= (float10)0.0) {
    fVar2 = (float10)0.0;
  }
  *(float *)(this + 0x1dc) = (float)fVar2;
  fVar2 = (float10)*(float *)(this + 0xc) - fVar1;
  if (fVar2 <= (float10)0.0) {
    fVar2 = (float10)0.0;
  }
  *(float *)(this + 0xc) = (float)fVar2;
  fVar2 = (float10)*(float *)(this + 0x10) - fVar1;
  if (fVar2 <= (float10)0.0) {
    fVar2 = (float10)0.0;
  }
  *(float *)(this + 0x10) = (float)fVar2;
  if (-0.001 <= *(float *)(this + 8)) {
    fVar1 = (float10)*(float *)(this + 8) - fVar1;
    if (fVar1 <= (float10)0.0) {
      fVar1 = (float10)0.0;
    }
  }
  else {
    fVar1 = fVar1 + (float10)*(float *)(this + 8);
    if ((float10)0.0 <= fVar1) {
      *(undefined4 *)(this + 8) = 0;
      return;
    }
  }
  *(float *)(this + 8) = (float)fVar1;
  return;
}

/* 10044b50  CTSAnimation::Animate  (6490 bytes)
 * undefined Animate(int * param_1, int param_2)
 * called by: CBasePlayer::Duck, CBasePlayer::Jump, CBasePlayer::Killed, CBasePlayer::PostThink, CTSGun::Deploy, CTSGun::GrenadeIdle, CTSGun::Reload, CTSStunt::GoRoll, CTSStunt::Play, FUN_100552a0, FUN_10056740, FUN_10056d80, ... (25 total)
 */
void __thiscall CTSAnimation::Animate(CTSAnimation *this,int *param_1,int param_2)

{
  char cVar1;
  CTSAnimation CVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  int iVar11;
  undefined3 extraout_var_06;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  byte *pbVar18;
  CTSAnimation *pCVar19;
  byte *pbVar20;
  char *pcVar21;
  CTSAnimation *pCVar22;
  int *piVar23;
  int *piVar24;
  bool bVar25;
  float in_stack_ffffff4c;
  float *in_stack_ffffff54;
  float in_stack_ffffff58;
  float fVar26;
  float in_stack_ffffff5c;
  float *pfVar27;
  float in_stack_ffffff60;
  CTSAnimation *in_stack_ffffff64;
  float in_stack_ffffff68;
  float fVar28;
  float fVar29;
  int iVar30;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [3];
  float afStack_58 [3];
  float afStack_4c [3];
  CTSAnimation aCStack_40 [64];
  
  if (param_2 < 0) {
    return;
  }
  iVar8 = param_1[1];
  fVar4 = SQRT(*(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
               *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20));
  if (((*(uint *)(iVar8 + 0x1a4) & 0x200) == 0) &&
     (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) {
    if ((*(int *)this == 4) && ((96.0 < fVar4 && (iVar8 = FUN_10046f90(param_2), iVar8 == 0)))) {
      in_stack_ffffff64 = this + 0x1c;
      in_stack_ffffff68 = 0.6;
      Vector::Vector((Vector *)&stack0xffffff58,(undefined4 *)(param_1[1] + 0x74));
      in_stack_ffffff54 = &fStack_70;
      puVar9 = (undefined4 *)FUN_100148f0((void *)(param_1[1] + 0x20),in_stack_ffffff54);
      Vector::Vector((Vector *)&stack0xffffff4c,puVar9);
      FUN_10046820(this,param_1);
    }
    if (param_2 == 2) {
      piVar10 = param_1 + 0x2d1;
      pcVar17 = &DAT_100a9398;
      do {
        if ((((char)*piVar10 != *pcVar17) || ((char)*piVar10 == '\0')) ||
           (pcVar21 = (char *)((int)piVar10 + 1), *pcVar21 != pcVar17[1])) break;
        piVar10 = (int *)((int)piVar10 + 2);
        pcVar17 = pcVar17 + 2;
      } while (*pcVar21 != '\0');
      in_stack_ffffff64 = this + 0x5c;
      in_stack_ffffff68 = 0.6;
      in_stack_ffffff54 = (float *)(param_1[1] + 0x74);
      Vector::Vector((Vector *)&stack0xffffff58,in_stack_ffffff54);
      Vector::Vector((Vector *)&stack0xffffff4c,param_1 + 0x13f);
      FUN_10046820(this,param_1);
    }
  }
  iVar8 = FUN_10046f90(*(int *)this);
  if (iVar8 != 0) {
    if ((((param_1[0x1a] != 0) || (iVar8 = FUN_10046f90(param_2), iVar8 != 0)) ||
        ((iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 == 0 ||
         ((param_2 == 0x28 || (param_2 == 0x2f)))))) ||
       ((param_2 == 0x30 ||
        ((((((param_2 == 0x36 || (param_2 == 0x32)) || (param_2 == 0x31)) ||
           ((param_2 == 0x37 || (param_2 == 0x38)))) || (param_2 == 0x39)) ||
         ((this[0x1e8] != (CTSAnimation)0x0 && ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0))))))))
    goto switchD_10044d8b_caseD_6;
    iVar8 = GaitCloseCombat(*(int *)this,(int)param_1);
    if (iVar8 == 0) {
      return;
    }
    goto LAB_100461c4;
  }
  switch(*(undefined4 *)this) {
  case 3:
    iVar8 = (**(code **)(*param_1 + 0xac))();
    if ((((((iVar8 != 0) && (param_2 != 4)) && (param_2 != 0x39)) &&
         ((param_2 != 0x2a && (param_2 != 0x2b)))) && (param_2 != 0x29)) &&
       (((param_2 != 0 && (param_2 != 8)) &&
        ((param_2 != 9 &&
         (bVar25 = CBasePlayer::IsOnLadder((int)param_1), CONCAT31(extraout_var_04,bVar25) == 0)))))
       ) {
      FUN_100466f0(this,param_1);
      return;
    }
    break;
  case 4:
    if (((((param_1[0x1a] == 0) && (param_2 != 4)) && (param_2 != 0x28)) &&
        ((param_2 != 0x2f && (param_2 != 0x30)))) &&
       (((param_2 != 0x31 && ((param_2 != 0x37 && (param_2 != 0x38)))) &&
        ((param_2 != 0x36 &&
         ((param_2 != 0x32 && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)))))))) {
      uVar15 = *(uint *)(param_1[1] + 0x1a4);
LAB_100452d4:
      if ((uVar15 & 0x200) == 0) {
        iVar8 = FUN_10046f90(param_2);
        goto LAB_100452de;
      }
    }
    break;
  case 5:
    if ((((param_1[0x1a] == 0) && ((*(byte *)(param_1[1] + 0x180) & 4) != 0)) &&
        (((((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0 &&
           (((param_2 != 0x2f && (param_2 != 0x30)) && (param_2 != 0x28)))) &&
          ((param_2 != 4 && (param_2 != 0x39)))) && (param_2 != 0x14)))) &&
       (((param_2 < 0x16 && (0x19 < param_2)) && (param_2 != 0x25)))) {
      iVar8 = (**(code **)(*param_1 + 0xac))();
joined_r0x10044f27:
      if (iVar8 != 0) {
        return;
      }
    }
    break;
  case 7:
    return;
  case 0x28:
    if ((((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
        (param_2 != 0x29)) && ((param_2 != 0x2e && (param_2 != 3)))) {
      bVar25 = CBasePlayer::IsOnLadder((int)param_1);
      iVar8 = CONCAT31(extraout_var_05,bVar25);
LAB_100452de:
      bVar25 = iVar8 == 0;
LAB_100452e0:
      if (bVar25) {
        return;
      }
    }
    break;
  case 0x29:
    if (((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
       ((*(byte *)(param_1[1] + 0x250) & 4) != 0)) {
      return;
    }
    break;
  case 0x2a:
  case 0x2b:
    UTIL_MakeVectors(param_1[1] + 0x74);
    iVar8 = param_1[1];
    if (SQRT(*(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28) +
             *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
             *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20)) != 0.0) {
      fVar26 = SQRT(gpGlobals->v_right[2] * gpGlobals->v_right[2] +
                    gpGlobals->v_right[1] * gpGlobals->v_right[1] +
                    gpGlobals->v_right[0] * gpGlobals->v_right[0]);
      if (fVar26 == 0.0) {
        fVar29 = 0.0;
        fVar28 = 0.0;
        fVar26 = 1.0;
      }
      else {
        fVar26 = 1.0 / fVar26;
        fVar29 = fVar26 * gpGlobals->v_right[0];
        fVar28 = fVar26 * gpGlobals->v_right[1];
        fVar26 = fVar26 * gpGlobals->v_right[2];
        fStack_6c = fVar28;
        fStack_68 = fVar26;
      }
      fVar6 = SQRT(*(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28) +
                   *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                   *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20));
      if (fVar6 == 0.0) {
        fVar7 = 0.0;
        fVar5 = 0.0;
        fVar6 = 1.0;
      }
      else {
        fVar6 = 1.0 / fVar6;
        fVar7 = fVar6 * *(float *)(iVar8 + 0x20);
        fVar5 = fVar6 * *(float *)(iVar8 + 0x24);
        fVar6 = fVar6 * *(float *)(iVar8 + 0x28);
        fStack_6c = fVar5;
        fStack_68 = fVar6;
      }
      if (fVar5 * fVar28 + fVar6 * fVar26 + fVar7 * fVar29 == 0.0) break;
    }
    iVar8 = (**(code **)(*param_1 + 0xac))();
    if ((((iVar8 != 0) && (param_2 != 0x2a)) && (param_2 != 0x2b)) &&
       ((param_2 != 3 && (param_2 != 0x29)))) {
      bVar25 = CBasePlayer::IsOnLadder((int)param_1);
      iVar8 = CONCAT31(extraout_var_03,bVar25);
      goto LAB_100452de;
    }
    break;
  case 0x2e:
  case 0x2f:
    if ((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) {
      bVar25 = (*(byte *)(param_1[1] + 0x250) & 4) == 0;
LAB_10044f5a:
      if (!bVar25) {
        return;
      }
    }
    break;
  case 0x30:
    if (param_1[0x1a] == 0) {
      iVar8 = (**(code **)(*param_1 + 0xac))();
      goto joined_r0x10044f27;
    }
    break;
  case 0x31:
    if (((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
       ((*(byte *)(param_1[1] + 0x250) & 4) != 0)) {
      bVar25 = CBasePlayer::IsOnLadder((int)param_1);
      iVar8 = CONCAT31(extraout_var_00,bVar25);
      goto LAB_100452de;
    }
    break;
  case 0x32:
    if ((((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
        (bVar25 = CBasePlayer::IsOnLadder((int)param_1), CONCAT31(extraout_var,bVar25) == 0)) &&
       (param_2 != 0x29)) {
      bVar25 = param_2 == 0x2e;
      goto LAB_10044f5a;
    }
    break;
  case 0x36:
    if ((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) {
      return;
    }
    param_1[0x143] = 0;
    break;
  case 0x37:
    if (((((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
         ((*(byte *)(param_1[1] + 0x250) & 4) != 0)) &&
        ((bVar25 = CBasePlayer::IsOnLadder((int)param_1), CONCAT31(extraout_var_01,bVar25) == 0 &&
         (param_2 != 0x37)))) && ((param_2 != 0x38 && (param_2 != 0x28)))) {
      bVar25 = (*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0;
      goto LAB_100452e0;
    }
    break;
  case 0x38:
    if ((((param_1[0x1a] == 0) && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)) &&
        ((*(byte *)(param_1[1] + 0x250) & 4) != 0)) &&
       (((bVar25 = CBasePlayer::IsOnLadder((int)param_1), CONCAT31(extraout_var_02,bVar25) == 0 &&
         (param_2 != 0x37)) &&
        ((param_2 != 0x38 && ((param_2 != 0x28 && (iVar8 = FUN_10046f90(param_2), iVar8 == 0))))))))
    {
      bVar25 = (*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0;
      goto LAB_100452e0;
    }
    break;
  case 0x39:
    if ((((((param_1[0x1a] == 0) && (param_2 != 0x39)) && (param_2 != 0x28)) &&
         (((param_2 != 0x2f && (param_2 != 0x30)) &&
          ((param_2 != 0x31 && ((param_2 != 0x37 && (param_2 != 0x38)))))))) && (param_2 != 0x36))
       && ((param_2 != 0x32 && (iVar8 = (**(code **)(*param_1 + 0xac))(), iVar8 != 0)))) {
      uVar15 = *(uint *)(param_1[1] + 0x1a4);
      goto LAB_100452d4;
    }
  }
switchD_10044d8b_caseD_6:
  iVar11 = FUN_10046f90(param_2);
  iVar8 = param_2;
  if (iVar11 != 0) {
    HandleCloseCombat(this,param_1,param_2);
    goto switchD_10045371_caseD_2;
  }
  switch(param_2) {
  case 0:
  case 8:
  case 9:
    iVar11 = param_1[1];
    if ((*(uint *)(iVar11 + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(iVar11 + 0x250) & 0x20) == 0) {
      *(undefined4 *)(this + 0xc) = 0x40000000;
      pcVar17 = s_crouch_shoot__100a3000;
      if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
        pcVar17 = s_shoot__100a2ff8;
      }
      uVar15 = 0xffffffff;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      piVar10 = param_1 + 0x2d1;
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      uVar15 = 0xffffffff;
      piVar24 = piVar10;
      do {
        piVar23 = piVar24;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        piVar23 = (int *)((int)piVar24 + 1);
        iVar11 = *piVar24;
        piVar24 = piVar23;
      } while ((char)iVar11 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pCVar19 = aCStack_40;
      do {
        pCVar22 = pCVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      fVar26 = *(float *)(this + 8);
      pCVar19 = (CTSAnimation *)((int)piVar23 - uVar15);
      pCVar22 = pCVar22 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      if (((0.001 < fVar26) && ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0)) &&
         ((*(float *)(param_1[1] + 0x214) == 0.0 &&
          ((iVar11 = _strncmp((char *)piVar10,&DAT_100a2ff4,3), iVar11 == 0 ||
           (iVar11 = _strncmp((char *)piVar10,&DAT_100a2ff0,3), iVar11 == 0)))))) {
        uVar15 = 0xffffffff;
        pcVar17 = &DAT_100a2fec;
        do {
          pcVar21 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar21;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        iVar11 = -1;
        pCVar19 = aCStack_40;
        do {
          pCVar22 = pCVar19;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pCVar22 = pCVar19 + 1;
          CVar2 = *pCVar19;
          pCVar19 = pCVar22;
        } while (CVar2 != (CTSAnimation)0x0);
        pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
        pCVar22 = pCVar22 + -1;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
          pCVar19 = pCVar19 + 4;
          pCVar22 = pCVar22 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pCVar22 = *pCVar19;
          pCVar19 = pCVar19 + 1;
          pCVar22 = pCVar22 + 1;
        }
        *(undefined4 *)(this + 0xc) = 0;
      }
      if (param_2 != 0) {
        pcVar17 = s__right_100a30ac;
        if (param_2 != 9) {
          pcVar17 = &DAT_100a30b4;
        }
        uVar15 = 0xffffffff;
        do {
          pcVar21 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar21;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        iVar11 = -1;
        pCVar19 = aCStack_40;
        do {
          pCVar22 = pCVar19;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pCVar22 = pCVar19 + 1;
          CVar2 = *pCVar19;
          pCVar19 = pCVar22;
        } while (CVar2 != (CTSAnimation)0x0);
        pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
        pCVar22 = pCVar22 + -1;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
          pCVar19 = pCVar19 + 4;
          pCVar22 = pCVar22 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pCVar22 = *pCVar19;
          pCVar19 = pCVar19 + 1;
          pCVar22 = pCVar22 + 1;
        }
      }
      uVar16 = 0x92;
      goto LAB_10046014;
    }
    if ((char)param_1[0x142] == '\0') {
      pcVar17 = s_slide_f__100a2f18;
    }
    else {
      fVar29 = 0.3;
      fVar28 = 0.6;
      puVar9 = (undefined4 *)(iVar11 + 0x74);
      fVar26 = 2.610463e-29;
      Vector::Vector((Vector *)&stack0xffffff60,puVar9);
      Vector::Vector((Vector *)&stack0xffffff54,param_1 + 0x13f);
      iVar8 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)puVar9,in_stack_ffffff60,
                           in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
      if ((iVar8 != *(int *)(this + 0x14)) && (iVar8 != 2)) {
        *(int *)(this + 0x14) = iVar8;
      }
      pcVar17 = (char *)(this + *(int *)(this + 0x14) * 0x10 + 0x9c);
    }
    uVar15 = 0xffffffff;
    do {
      pCVar19 = (CTSAnimation *)pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pCVar19 = (CTSAnimation *)(pcVar17 + 1);
      CVar2 = (CTSAnimation)*pcVar17;
      pcVar17 = (char *)pCVar19;
    } while (CVar2 != (CTSAnimation)0x0);
    uVar15 = ~uVar15;
    pCVar19 = pCVar19 + -uVar15;
    pCVar22 = aCStack_40;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    uVar15 = 0xffffffff;
    piVar10 = param_1 + 0x2d1;
    do {
      piVar24 = piVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      piVar24 = (int *)((int)piVar10 + 1);
      iVar8 = *piVar10;
      piVar10 = piVar24;
    } while ((char)iVar8 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pCVar19 = aCStack_40;
    do {
      pCVar22 = pCVar19;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pCVar22 = pCVar19 + 1;
      CVar2 = *pCVar19;
      pCVar19 = pCVar22;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar19 = (CTSAnimation *)((int)piVar24 - uVar15);
    pCVar22 = pCVar22 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar17 = s__shoot_100a3010;
    do {
      pcVar21 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pCVar19 = aCStack_40;
    do {
      pCVar22 = pCVar19;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pCVar22 = pCVar19 + 1;
      CVar2 = *pCVar19;
      pCVar19 = pCVar22;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
    pCVar22 = pCVar22 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    if (param_2 != 0) {
      pcVar17 = s__right_100a30ac;
      if (param_2 != 9) {
        pcVar17 = &DAT_100a30b4;
      }
      uVar15 = 0xffffffff;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar8 = -1;
      pCVar19 = aCStack_40;
      do {
        pCVar22 = pCVar19;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = pCVar22 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
    }
    uVar16 = 0x94;
    goto LAB_100461a5;
  case 1:
  case 6:
    if (((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) &&
       (bVar25 = CBasePlayer::IsOnLadder((int)param_1), CONCAT31(extraout_var_06,bVar25) == 0)) {
      return;
    }
    pbVar20 = &DAT_100a9398;
    pbVar13 = (byte *)(param_1 + 0x119);
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) {
LAB_10046077:
        iVar11 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
        goto LAB_1004607c;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_10046077;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_1004607c:
    if (iVar11 == 0) {
      pbVar13 = (byte *)(param_1 + 0x2d1);
      pbVar20 = &DAT_100a9398;
      do {
        bVar3 = *pbVar13;
        bVar25 = bVar3 < *pbVar20;
        if (bVar3 != *pbVar20) {
LAB_100460c1:
          iVar11 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
          goto LAB_100460c6;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar13[1];
        bVar25 = bVar3 < pbVar20[1];
        if (bVar3 != pbVar20[1]) goto LAB_100460c1;
        pbVar13 = pbVar13 + 2;
        pbVar20 = pbVar20 + 2;
      } while (bVar3 != 0);
      iVar11 = 0;
LAB_100460c6:
      if ((iVar11 != 0) &&
         (((((iVar8 = *(int *)this, iVar8 != 0 && (iVar8 != 8)) && (iVar8 != 9)) &&
           ((iVar8 != 0x34 && (iVar8 != 0x33)))) || (param_1[0x1a] != 0)))) {
        if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
          pcVar17 = &DAT_100a2fc4;
        }
        else {
          pcVar17 = s_crouch_aim__100a2fd4;
        }
        uVar15 = 0xffffffff;
        do {
          pcVar21 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar21;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
        pCVar22 = aCStack_40;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
          pCVar19 = pCVar19 + 4;
          pCVar22 = pCVar22 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pCVar22 = *pCVar19;
          pCVar19 = pCVar19 + 1;
          pCVar22 = pCVar22 + 1;
        }
        uVar15 = 0xffffffff;
        piVar10 = param_1 + 0x2d1;
        do {
          piVar24 = piVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          piVar24 = (int *)((int)piVar10 + 1);
          iVar8 = *piVar10;
          piVar10 = piVar24;
        } while ((char)iVar8 != '\0');
        uVar15 = ~uVar15;
        uVar16 = 0x12;
        iVar8 = -1;
        pCVar19 = aCStack_40;
        do {
          pCVar22 = pCVar19;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pCVar22 = pCVar19 + 1;
          CVar2 = *pCVar19;
          pCVar19 = pCVar22;
        } while (CVar2 != (CTSAnimation)0x0);
        pCVar19 = (CTSAnimation *)((int)piVar24 - uVar15);
        pCVar22 = pCVar22 + -1;
        for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
          pCVar19 = pCVar19 + 4;
          pCVar22 = pCVar22 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pCVar22 = *pCVar19;
          pCVar19 = pCVar19 + 1;
          pCVar22 = pCVar22 + 1;
        }
        goto LAB_100461a5;
      }
    }
    else {
      SetAnim(param_1,(byte_conflict *)(param_1 + 0x119),0x12,0);
    }
    break;
  case 3:
    iVar11 = *(int *)this;
    if ((((iVar11 != 0) && (iVar11 != 8)) && (iVar11 != 9)) || (param_1[0x1a] != 0)) {
      if ((char)param_1[0x142] == '\0') {
        pcVar17 = s_slide_f__100a2f18;
      }
      else {
        fVar29 = 0.3;
        fVar28 = 0.6;
        puVar9 = (undefined4 *)(param_1[1] + 0x74);
        fVar26 = 2.6100648e-29;
        Vector::Vector((Vector *)&stack0xffffff60,puVar9);
        Vector::Vector((Vector *)&stack0xffffff54,param_1 + 0x13f);
        iVar8 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)puVar9,in_stack_ffffff60,
                             in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
        if ((iVar8 != *(int *)(this + 0x14)) && (iVar8 != 2)) {
          *(int *)(this + 0x14) = iVar8;
        }
        pcVar17 = (char *)(this + *(int *)(this + 0x14) * 0x10 + 0x9c);
      }
      uVar15 = 0xffffffff;
      do {
        pCVar19 = (CTSAnimation *)pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pCVar19 = (CTSAnimation *)(pcVar17 + 1);
        CVar2 = (CTSAnimation)*pcVar17;
        pcVar17 = (char *)pCVar19;
      } while (CVar2 != (CTSAnimation)0x0);
      uVar15 = ~uVar15;
      pCVar19 = pCVar19 + -uVar15;
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      pbVar13 = (byte *)(param_1 + 0x2d1);
      pbVar20 = &DAT_100a9398;
      do {
        bVar3 = *pbVar13;
        bVar25 = bVar3 < *pbVar20;
        if (bVar3 != *pbVar20) goto LAB_1004591b;
        if (bVar3 == 0) break;
        bVar3 = pbVar13[1];
        bVar25 = bVar3 < pbVar20[1];
        if (bVar3 != pbVar20[1]) goto LAB_1004591b;
        pbVar13 = pbVar13 + 2;
        pbVar20 = pbVar20 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
      goto LAB_10045920;
    }
    break;
  case 4:
    if ((*(byte *)(param_1[1] + 0x250) & 0x24) != 0) {
      return;
    }
    pbVar20 = &DAT_100a9398;
    pbVar13 = (byte *)(param_1 + 0x2d1);
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) {
LAB_10045c11:
        iVar11 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
        goto LAB_10045c16;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_10045c11;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_10045c16:
    if (iVar11 == 0) {
      uVar15 = 0xffffffff;
      pcVar17 = s_standard_jump_100a3034;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      uVar16 = 0x94;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
    }
    else {
      fVar29 = 0.3;
      fVar28 = 0.6;
      Vector::Vector((Vector *)&stack0xffffff60,(undefined4 *)(param_1[1] + 0x74));
      pfVar27 = afStack_4c;
      fVar26 = 2.6103627e-29;
      puVar9 = (undefined4 *)FUN_100148f0((void *)(param_1[1] + 0x20),pfVar27);
      Vector::Vector((Vector *)&stack0xffffff54,puVar9);
      iVar11 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)pfVar27,in_stack_ffffff60,
                            in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
      *(int *)(this + 0x14) = iVar11;
      uVar15 = 0xffffffff;
      pCVar19 = this + iVar11 * 0x10 + 0x1c;
      do {
        pCVar22 = pCVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      uVar15 = ~uVar15;
      pCVar19 = pCVar22 + -uVar15;
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pbVar13 = (byte *)(param_1 + 0x2d1);
      do {
        pbVar20 = pbVar13;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pbVar20 = pbVar13 + 1;
        bVar3 = *pbVar13;
        pbVar13 = pbVar20;
      } while (bVar3 != 0);
      uVar15 = ~uVar15;
      uVar16 = 0x94;
      iVar11 = -1;
      pCVar19 = aCStack_40;
      do {
        pCVar22 = pCVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar19 = (CTSAnimation *)(pbVar20 + -uVar15);
      pCVar22 = pCVar22 + -1;
      for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
    }
LAB_10046014:
    SetAnim(param_1,(byte_conflict *)aCStack_40,uVar16,0);
    break;
  case 5:
    if (*(int *)(this + 4) == 0) {
      SetAnim(param_1,(byte_conflict *)s_goduck_100a3044,0x94,0);
      *(undefined4 *)(this + 4) = 1;
    }
    break;
  case 7:
    if (*(int *)(this + 0x1e4) == 0) {
      if (80.0 <= fVar4) {
        if (0x32 < param_1[0x25a]) goto LAB_10045aa1;
        fVar29 = 0.3;
        fVar28 = 0.6;
        Vector::Vector((Vector *)&stack0xffffff60,(undefined4 *)(param_1[1] + 0x74));
        pfVar27 = afStack_58;
        fVar26 = 2.610249e-29;
        puVar9 = (undefined4 *)FUN_100148f0((void *)(param_1[1] + 0x20),pfVar27);
LAB_10045af8:
        Vector::Vector((Vector *)&stack0xffffff54,puVar9);
        iVar11 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)pfVar27,in_stack_ffffff60,
                              in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
        if (iVar11 == 2) {
          SetAnim(param_1,(byte_conflict *)s_forward_die_100a3070,0x14,0);
        }
        else {
          if (iVar11 != 3) goto LAB_10045a86;
          if ((param_1[0x3e] == 1) && (iVar11 = (*g_engfuncs.pfnRandomLong)(0,100), 0x1e < iVar11))
          {
            SetAnim(param_1,(byte_conflict *)s_die_spinback_100a3060,0x14,0);
          }
          else {
            iVar11 = (*g_engfuncs.pfnRandomLong)(0,1);
            if (iVar11 == 0) {
              SetAnim(param_1,(byte_conflict *)s_leg_die_100a304c,0x14,0);
            }
            else if (iVar11 == 1) {
              SetAnim(param_1,(byte_conflict *)s_die_back_100a3054,0x14,0);
            }
          }
        }
      }
      else {
        if (0x32 < param_1[0x25a]) {
LAB_10045aa1:
          fVar29 = 0.3;
          fVar28 = 0.6;
          Vector::Vector((Vector *)&stack0xffffff60,(undefined4 *)(param_1[1] + 0x74));
          pfVar27 = afStack_64;
          fVar26 = 2.6102354e-29;
          puVar9 = (undefined4 *)FUN_100465c0(&DAT_100ae4b8,pfVar27);
          goto LAB_10045af8;
        }
LAB_10045a86:
        SetAnim(param_1,(byte_conflict *)s_die_spin_100a307c,0x14,0);
      }
    }
    else {
      iVar11 = (*g_engfuncs.pfnRandomLong)(0,2);
      if (iVar11 == 0) {
        SetAnim(param_1,(byte_conflict *)s_normal_die1_100a3088,0x14,0);
      }
      else if (iVar11 == 1) {
        SetAnim(param_1,(byte_conflict *)s_normal_die2_100a3094,0x14,0);
      }
      else if (iVar11 == 2) {
        SetAnim(param_1,(byte_conflict *)s_normal_die3_100a30a0,0x14,0);
      }
    }
    break;
  case 0x28:
    fVar29 = 0.3;
    fVar28 = 0.6;
    Vector::Vector((Vector *)&stack0xffffff60,(undefined4 *)(param_1[1] + 0x74));
    pfVar27 = &fStack_70;
    fVar26 = 2.6101382e-29;
    puVar9 = (undefined4 *)FUN_100148f0((void *)(param_1[1] + 0x20),pfVar27);
    Vector::Vector((Vector *)&stack0xffffff54,puVar9);
    iVar8 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)pfVar27,in_stack_ffffff60,
                         in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
    *(int *)(this + 0x14) = iVar8;
    uVar15 = 0xffffffff;
    pCVar19 = this + iVar8 * 0x10 + 0x5c;
    do {
      pCVar22 = pCVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pCVar22 = pCVar19 + 1;
      CVar2 = *pCVar19;
      pCVar19 = pCVar22;
    } while (CVar2 != (CTSAnimation)0x0);
    uVar15 = ~uVar15;
    pCVar19 = pCVar22 + -uVar15;
    pCVar22 = aCStack_40;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    pbVar13 = (byte *)(param_1 + 0x2d1);
    pbVar20 = &DAT_100a9398;
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) goto LAB_1004591b;
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_1004591b;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_10045920:
    piVar10 = param_1 + 0x2d1;
    if (iVar8 == 0) {
      piVar10 = (int *)&DAT_1009a3e0;
    }
    uVar15 = 0xffffffff;
    do {
      piVar24 = piVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      piVar24 = (int *)((int)piVar10 + 1);
      iVar8 = *piVar10;
      piVar10 = piVar24;
    } while ((char)iVar8 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pCVar19 = aCStack_40;
    do {
      pCVar22 = pCVar19;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pCVar22 = pCVar19 + 1;
      CVar2 = *pCVar19;
      pCVar19 = pCVar22;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar19 = (CTSAnimation *)((int)piVar24 - uVar15);
    pCVar22 = pCVar22 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    uVar16 = 0x94;
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    goto LAB_100461a5;
  case 0x29:
    pcVar17 = (char *)(this + *(int *)(this + 0x14) * 0x10 + 0xdc);
    goto LAB_1004571c;
  case 0x2a:
  case 0x2b:
    if ((char)param_1[0x142] == '\0') {
      uVar15 = 0xffffffff;
      pcVar17 = s_slide_f__100a2f18;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      pbVar13 = (byte *)(param_1 + 0x2d1);
      pbVar18 = &DAT_100a9398;
      pbVar20 = pbVar13;
      do {
        bVar3 = *pbVar20;
        bVar25 = bVar3 < *pbVar18;
        if (bVar3 != *pbVar18) {
LAB_100457cb:
          iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
          goto LAB_100457d0;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar20[1];
        bVar25 = bVar3 < pbVar18[1];
        if (bVar3 != pbVar18[1]) goto LAB_100457cb;
        pbVar20 = pbVar20 + 2;
        pbVar18 = pbVar18 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_100457d0:
      if (iVar8 == 0) {
        pbVar13 = &DAT_1009a3e0;
      }
      uVar15 = 0xffffffff;
      do {
        pbVar20 = pbVar13;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pbVar20 = pbVar13 + 1;
        bVar3 = *pbVar13;
        pbVar13 = pbVar20;
      } while (bVar3 != 0);
      uVar15 = ~uVar15;
      iVar8 = -1;
      pCVar19 = aCStack_40;
      do {
        pCVar22 = pCVar19;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar19 = (CTSAnimation *)(pbVar20 + -uVar15);
      pCVar22 = pCVar22 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
      pcVar17 = &DAT_100a30b4;
      if (param_2 != 0x2a) {
        pcVar17 = s__right_100a30ac;
      }
      uVar15 = 0xffffffff;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar8 = -1;
      pCVar19 = aCStack_40;
      do {
        pCVar22 = pCVar19;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pCVar22 = pCVar19 + 1;
        CVar2 = *pCVar19;
        pCVar19 = pCVar22;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = pCVar22 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      uVar16 = 0x14;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
    }
    else {
      pcVar17 = s_slide_b_left_100a30cc;
      if (param_2 != 0x2a) {
        pcVar17 = s_slide_b_right_100a30bc;
      }
      uVar15 = 0xffffffff;
      do {
        pcVar21 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
      pCVar22 = aCStack_40;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
        pCVar19 = pCVar19 + 4;
        pCVar22 = pCVar22 + 4;
      }
      uVar16 = 0x14;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pCVar22 = *pCVar19;
        pCVar19 = pCVar19 + 1;
        pCVar22 = pCVar22 + 1;
      }
    }
LAB_100461a5:
    SetAnim(param_1,(byte_conflict *)aCStack_40,uVar16,0);
    iVar8 = param_2;
    break;
  case 0x2e:
    iVar30 = 0;
    uVar15 = 0x94;
    fVar29 = 0.3;
    fVar28 = 0.6;
    puVar9 = (undefined4 *)(param_1[1] + 0x74);
    fVar26 = 2.6099288e-29;
    Vector::Vector((Vector *)&stack0xffffff58,puVar9);
    Vector::Vector((Vector *)&stack0xffffff4c,param_1 + 0x13f);
    iVar11 = FUN_10044510(in_stack_ffffff4c,fVar26,(float)puVar9,in_stack_ffffff58,in_stack_ffffff5c
                          ,in_stack_ffffff60,fVar28,fVar29);
    iVar11 = iVar11 * 0x10 + 0x11c;
    goto LAB_100456f3;
  case 0x2f:
    iVar30 = 0;
    uVar15 = 0x94;
    fVar29 = 0.3;
    fVar28 = 0.6;
    puVar9 = (undefined4 *)(param_1[1] + 0x74);
    fVar26 = 2.6098815e-29;
    Vector::Vector((Vector *)&stack0xffffff58,puVar9);
    Vector::Vector((Vector *)&stack0xffffff4c,param_1 + 0x13f);
    iVar11 = FUN_10044510(in_stack_ffffff4c,fVar26,(float)puVar9,in_stack_ffffff58,in_stack_ffffff5c
                          ,in_stack_ffffff60,fVar28,fVar29);
    iVar11 = iVar11 * 0x10 + 0x15c;
LAB_100456f3:
    SetAnim(param_1,(byte_conflict *)(this + iVar11),uVar15,iVar30);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x30:
    iVar30 = 0;
    uVar15 = 0x94;
    fVar29 = 0.3;
    fVar28 = 0.6;
    puVar9 = (undefined4 *)(param_1[1] + 0x74);
    fVar26 = 2.6099038e-29;
    Vector::Vector((Vector *)&stack0xffffff58,puVar9);
    Vector::Vector((Vector *)&stack0xffffff4c,param_1 + 0x13f);
    iVar11 = FUN_10044510(in_stack_ffffff4c,fVar26,(float)puVar9,in_stack_ffffff58,in_stack_ffffff5c
                          ,in_stack_ffffff60,fVar28,fVar29);
    SetAnim(param_1,(byte_conflict *)(this + iVar11 * 0x10 + 0x19c),uVar15,iVar30);
    break;
  case 0x31:
    fVar29 = 0.3;
    fVar28 = 0.6;
    puVar9 = (undefined4 *)(param_1[1] + 0x74);
    fVar26 = 2.6097967e-29;
    Vector::Vector((Vector *)&stack0xffffff60,puVar9);
    Vector::Vector((Vector *)&stack0xffffff54,param_1 + 0x13f);
    iVar11 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)puVar9,in_stack_ffffff60,
                          in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
    if (iVar11 == 0) {
      SetAnim(param_1,(byte_conflict *)s_wheel_l_100a3108,0x94,0);
      *(undefined4 *)(this + 8) = 0x40400000;
    }
    else if (iVar11 == 1) {
      SetAnim(param_1,(byte_conflict *)s_wheel_r_100a3110,0x94,0);
      *(undefined4 *)(this + 8) = 0x40400000;
    }
    else if (iVar11 == 3) {
      SetAnim(param_1,(byte_conflict *)s_wheel_b_100a3118,0x94,0);
      *(undefined4 *)(this + 8) = 0x40400000;
    }
    else {
      SetAnim(param_1,(byte_conflict *)s_wheel_f_100a3120,0x94,0);
      *(undefined4 *)(this + 8) = 0x40400000;
    }
    break;
  case 0x32:
    fVar29 = 0.3;
    fVar28 = 0.6;
    puVar9 = (undefined4 *)(param_1[1] + 0x74);
    fVar26 = 2.6097666e-29;
    Vector::Vector((Vector *)&stack0xffffff60,puVar9);
    Vector::Vector((Vector *)&stack0xffffff54,param_1 + 0x13f);
    iVar11 = FUN_10044510((float)in_stack_ffffff54,fVar26,(float)puVar9,in_stack_ffffff60,
                          in_stack_ffffff64,in_stack_ffffff68,fVar28,fVar29);
    if (iVar11 == 2) {
      pcVar17 = s_lowwheel_f_100a3140;
    }
    else {
      pcVar17 = s_lowwheel_l_100a3134;
      if (iVar11 != 0) {
        pcVar17 = s_lowwheel_r_100a3128;
      }
    }
LAB_1004571c:
    SetAnim(param_1,(byte_conflict *)pcVar17,0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x33:
  case 0x34:
    if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(param_1[1] + 0x250) & 0x30) != 0) {
      return;
    }
    pbVar20 = &DAT_100a9398;
    pbVar13 = (byte *)(param_1 + 0x2d1);
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) {
LAB_10045408:
        iVar11 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
        goto LAB_1004540d;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_10045408;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_1004540d:
    if (iVar11 == 0) {
      return;
    }
    pcVar17 = s_relo__100a3154;
    if (param_2 != 0x33) {
      pcVar17 = &DAT_100a314c;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar21 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
    pCVar22 = aCStack_40;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pbVar13 = (byte *)(param_1 + 0x2d1);
    do {
      pbVar20 = pbVar13;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pbVar20 = pbVar13 + 1;
      bVar3 = *pbVar13;
      pbVar13 = pbVar20;
    } while (bVar3 != 0);
    uVar15 = ~uVar15;
    iVar11 = -1;
    pCVar19 = aCStack_40;
    do {
      pCVar22 = pCVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pCVar22 = pCVar19 + 1;
      CVar2 = *pCVar19;
      pCVar19 = pCVar22;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar19 = (CTSAnimation *)(pbVar20 + -uVar15);
    pCVar22 = pCVar22 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    SetAnim(param_1,(byte_conflict *)aCStack_40,0x92,0);
    *(undefined4 *)(this + 0xc) = 0x40000000;
    break;
  case 0x35:
    if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(param_1[1] + 0x250) & 0x30) != 0) {
      return;
    }
    SetAnim(param_1,(byte_conflict *)s_grenade_100a315c,0x92,0);
    *(undefined4 *)(this + 0xc) = 0x40000000;
    *(undefined4 *)(this + 0x10) = 0x3f800000;
    break;
  case 0x36:
    SetAnim(param_1,(byte_conflict *)s_bullettime_100a30dc,0x94,0);
    break;
  case 0x37:
    SetAnim(param_1,(byte_conflict *)s_walljump_end_100a30f8,0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x38:
    SetAnim(param_1,(byte_conflict *)s_walljump_climb_100a30e8,0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x39:
    if ((*(byte *)(param_1[1] + 0x250) & 0x24) != 0) {
      return;
    }
    pbVar20 = &DAT_100a9398;
    pbVar13 = (byte *)(param_1 + 0x2d1);
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) {
LAB_10045d29:
        iVar11 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
        goto LAB_10045d2e;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_10045d29;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_10045d2e:
    pcVar17 = s_morfy_jump_100a3028;
    if (iVar11 != 0) {
      pcVar17 = s_morfy_jump_guns_100a3018;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar21 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
    pCVar22 = aCStack_40;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
      pCVar19 = pCVar19 + 4;
      pCVar22 = pCVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pCVar22 = *pCVar19;
      pCVar19 = pCVar19 + 1;
      pCVar22 = pCVar22 + 1;
    }
    SetAnim(param_1,(byte_conflict *)aCStack_40,0x94,0);
  }
switchD_10045371_caseD_2:
  param_2 = iVar8;
  *(int *)this = param_2;
LAB_100461c4:
  if (param_2 == 4) {
    return;
  }
  if (param_2 == 0x39) {
    return;
  }
  if (param_2 == 5) {
    return;
  }
  if (param_2 == 7) {
    return;
  }
  if (param_2 == 0x29) {
    return;
  }
  if (param_2 == 0x2e) {
    return;
  }
  if (param_2 == 0x2f) {
    return;
  }
  if (param_2 == 0x30) {
    return;
  }
  if (param_2 == 0x36) {
    return;
  }
  iVar8 = FUN_10046f90(param_2);
  if ((iVar8 != 0) && (iVar8 = GaitCloseCombat(param_2,(int)param_1), iVar8 == 0)) {
    return;
  }
  if ((*(uint *)(param_1[1] + 0x250) & 0x30c30) != 0) {
    return;
  }
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    if (fVar4 <= 180.0) {
      if (fVar4 <= 0.0) {
        pcVar17 = (char *)(param_1 + 0x119);
        pbVar20 = &DAT_100a9398;
        pbVar13 = (byte *)pcVar17;
        do {
          bVar3 = *pbVar13;
          bVar25 = bVar3 < *pbVar20;
          if (bVar3 != *pbVar20) {
LAB_100462fd:
            iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
            goto LAB_10046302;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar13[1];
          bVar25 = bVar3 < pbVar20[1];
          if (bVar3 != pbVar20[1]) goto LAB_100462fd;
          pbVar13 = pbVar13 + 2;
          pbVar20 = pbVar20 + 2;
        } while (bVar3 != 0);
        iVar8 = 0;
LAB_10046302:
        if (iVar8 != 0) goto LAB_1004626d;
        pbVar20 = &DAT_100a9398;
        pbVar13 = (byte *)(param_1 + 0x2d1);
        do {
          bVar3 = *pbVar13;
          bVar25 = bVar3 < *pbVar20;
          if (bVar3 != *pbVar20) {
LAB_1004633d:
            iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
            goto LAB_10046342;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar13[1];
          bVar25 = bVar3 < pbVar20[1];
          if (bVar3 != pbVar20[1]) goto LAB_1004633d;
          pbVar13 = pbVar13 + 2;
          pbVar20 = pbVar20 + 2;
        } while (bVar3 != 0);
        iVar8 = 0;
LAB_10046342:
        if (iVar8 != 0) {
          uVar15 = 0xffffffff;
          pcVar17 = &DAT_100a2fcc;
          do {
            pcVar21 = pcVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar21;
          } while (cVar1 != '\0');
          uVar15 = ~uVar15;
          pCVar19 = (CTSAnimation *)(pcVar21 + -uVar15);
          pCVar22 = aCStack_40;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
            pCVar19 = pCVar19 + 4;
            pCVar22 = pCVar22 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pCVar22 = *pCVar19;
            pCVar19 = pCVar19 + 1;
            pCVar22 = pCVar22 + 1;
          }
          uVar15 = 0xffffffff;
          pbVar13 = (byte *)(param_1 + 0x2d1);
          do {
            pbVar20 = pbVar13;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pbVar20 = pbVar13 + 1;
            bVar3 = *pbVar13;
            pbVar13 = pbVar20;
          } while (bVar3 != 0);
          uVar15 = ~uVar15;
          iVar8 = -1;
          pCVar19 = aCStack_40;
          do {
            pCVar22 = pCVar19;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pCVar22 = pCVar19 + 1;
            CVar2 = *pCVar19;
            pCVar19 = pCVar22;
          } while (CVar2 != (CTSAnimation)0x0);
          pCVar19 = (CTSAnimation *)(pbVar20 + -uVar15);
          pCVar22 = pCVar22 + -1;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pCVar22 = *(undefined4 *)pCVar19;
            pCVar19 = pCVar19 + 4;
            pCVar22 = pCVar22 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pCVar22 = *pCVar19;
            pCVar19 = pCVar19 + 1;
            pCVar22 = pCVar22 + 1;
          }
          uVar12 = CBaseAnimating::LookupSequence
                             ((CBaseAnimating *)param_1,(byte_conflict *)aCStack_40);
          *(undefined4 *)(param_1[1] + 300) = uVar12;
          goto LAB_100463d4;
        }
        pcVar17 = s_combat_idle_low_100a2f90;
        if (0.01 <= *(float *)(this + 0xc)) {
          pcVar17 = s_combat_idle_100a2f84;
        }
      }
      else {
        pcVar17 = s_walk2_100a2fa0;
      }
LAB_10046287:
      uVar12 = CBaseAnimating::LookupSequence((CBaseAnimating *)param_1,(byte_conflict *)pcVar17);
      *(undefined4 *)(param_1[1] + 300) = uVar12;
      goto LAB_100463d4;
    }
    pcVar17 = &DAT_100a2fa8;
  }
  else {
    *(undefined4 *)(this + 4) = 0;
    if (fVar4 != 0.0) {
      pcVar17 = s_crawl_100a2fb0;
      goto LAB_10046287;
    }
    pcVar17 = s_crouch_idle_100a2fb8;
  }
LAB_1004626d:
  uVar12 = CBaseAnimating::LookupSequence((CBaseAnimating *)param_1,(byte_conflict *)pcVar17);
  *(undefined4 *)(param_1[1] + 300) = uVar12;
LAB_100463d4:
  pbVar20 = &DAT_100a9398;
  pbVar13 = (byte *)(param_1 + 0x119);
  do {
    bVar3 = *pbVar13;
    bVar25 = bVar3 < *pbVar20;
    if (bVar3 != *pbVar20) {
LAB_10046403:
      iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
      goto LAB_10046408;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar13[1];
    bVar25 = bVar3 < pbVar20[1];
    if (bVar3 != pbVar20[1]) goto LAB_10046403;
    pbVar13 = pbVar13 + 2;
    pbVar20 = pbVar20 + 2;
  } while (bVar3 != 0);
  iVar8 = 0;
LAB_10046408:
  if (iVar8 == 0) {
    pbVar20 = &DAT_100a9398;
    pbVar13 = (byte *)(param_1 + 0x2d1);
    do {
      bVar3 = *pbVar13;
      bVar25 = bVar3 < *pbVar20;
      if (bVar3 != *pbVar20) {
LAB_1004643f:
        iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
        goto LAB_10046444;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar13[1];
      bVar25 = bVar3 < pbVar20[1];
      if (bVar3 != pbVar20[1]) goto LAB_1004643f;
      pbVar13 = pbVar13 + 2;
      pbVar20 = pbVar20 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_10046444:
    if (((iVar8 == 0) && (iVar8 = GaitCloseCombat(param_2,(int)param_1), iVar8 == 0)) &&
       ((*(float *)(this + 0xc) < 0.01 || (param_1[0x1a] != 0)))) {
      iVar8 = param_1[1];
      if (*(int *)(iVar8 + 0x128) != *(int *)(iVar8 + 300)) {
        *(int *)(iVar8 + 0x128) = *(int *)(iVar8 + 300);
        *(undefined4 *)(param_1[1] + 0x130) = 0;
        CBaseAnimating::ResetSequenceInfo((int)param_1);
      }
    }
  }
  return;
LAB_1004591b:
  iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
  goto LAB_10045920;
}

/* 10046920  CTSAnimation::SetAnim  (197 bytes)
 * undefined4 SetAnim(void * param_1, byte.conflict * param_2, uint param_3, int param_4)
 * called by: CTSAnimation::Animate, CTSAnimation::HandleCloseCombat, FUN_10046640, FUN_100466f0, FUN_10046820
 */
undefined4 CTSAnimation::SetAnim(void *param_1,byte_conflict *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = CBaseAnimating::LookupSequence(param_1,param_2);
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if ((*(int *)(iVar1 + 0x128) == iVar2) && ((param_3 & 0x80) == 0)) {
    return 0;
  }
  if ((param_3 & 0x10) == 0) {
    uVar3 = *(uint *)(iVar1 + 0x118) | 0x20;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x118) & 0xffffffdf;
  }
  *(uint *)(iVar1 + 0x118) = uVar3;
  if ((param_3 & 4) == 0) {
    if ((param_3 & 1) != 0) {
      *(int *)(*(int *)((int)param_1 + 4) + 300) = iVar2;
      return 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 300) = 0;
  }
  *(int *)(*(int *)((int)param_1 + 4) + 0x128) = iVar2;
  if ((param_3 & 0x20) != 0) {
    *(float *)(*(int *)((int)param_1 + 4) + 0x130) = (float)param_4;
    CBaseAnimating::ResetSequenceInfo((int)param_1);
    return 1;
  }
  if ((param_3 & 0x100) == 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x130) = 0;
  }
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  return 1;
}

/* 100469f0  CTSAnimation::HandleCloseCombat  (1276 bytes)
 * undefined HandleCloseCombat(void * param_1, int param_2)
 * called by: CTSAnimation::Animate
 */
void __thiscall CTSAnimation::HandleCloseCombat(CTSAnimation *this,void *param_1,int param_2)

{
  char cVar1;
  byte_conflict bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte_conflict *pbVar6;
  char *pcVar7;
  char *pcVar8;
  byte_conflict *pbVar9;
  byte_conflict local_40 [64];
  
  switch(param_2) {
  case 10:
    uVar4 = 0xffffffff;
    pcVar7 = s_circfront_100a32a8;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0xb:
    uVar4 = 0xffffffff;
    pcVar7 = s_circkick_100a329c;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0xc:
    uVar4 = 0xffffffff;
    pcVar7 = s_circkicklow_100a3290;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0xd:
    uVar4 = 0xffffffff;
    pcVar7 = s_circback_100a3284;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0xe:
    uVar4 = 0xffffffff;
    pcVar7 = s_latback_100a327c;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0xf:
    uVar4 = 0xffffffff;
    pcVar7 = s_circspin_100a3270;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x10:
    uVar4 = 0xffffffff;
    pcVar7 = s_sidekick_100a3264;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x11:
    uVar4 = 0xffffffff;
    pcVar7 = s_backkick_100a3258;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x12:
    uVar4 = 0xffffffff;
    pcVar7 = s_airkick_100a3250;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x13:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a3244;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x14:
    uVar4 = 0xffffffff;
    pcVar7 = s_duckkick_100a3238;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  default:
    goto switchD_10046a15_caseD_15;
  case 0x16:
    uVar4 = 0xffffffff;
    pcVar7 = s_punchleft_100a322c;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x17:
    uVar4 = 0xffffffff;
    pcVar7 = s_punchright_100a3220;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x18:
    uVar4 = 0xffffffff;
    pcVar7 = s_punchair_100a3214;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x19:
    uVar4 = 0xffffffff;
    pcVar7 = s_uppercut_100a3208;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x1d:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a3200;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x1e:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a31f8;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x1f:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a31f0;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x20:
    uVar4 = 0xffffffff;
    pcVar7 = s_knife_launch_100a31e0;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x21:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a31d8;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x22:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a31d0;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x23:
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_100a31c8;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x24:
    uVar4 = 0xffffffff;
    pcVar7 = s_katana_air_100a31bc;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x25:
    uVar4 = 0xffffffff;
    pcVar7 = s_katana_duck_100a31b0;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x26:
    iVar3 = _strncmp((char *)((int)param_1 + 0x464),&DAT_100a31ac,3);
    if (iVar3 == 0) {
      pcVar7 = s_katana_block_100a319c;
    }
    else {
      iVar3 = _strncmp((char *)((int)param_1 + 0x464),&DAT_100a3198,3);
      pcVar7 = s_knife_block_100a318c;
      if (iVar3 != 0) {
        pcVar7 = s_kungfu_block_100a317c;
      }
    }
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar9 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar9 = pbVar9 + 1;
    }
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    pcVar7 = &DAT_1009ce20;
    if (iVar3 == 0) {
      pcVar7 = &DAT_100a2fec;
    }
    goto LAB_10046e7c;
  case 0x27:
    uVar4 = 0xffffffff;
    pcVar7 = s_stock__100a3164;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar9 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pcVar7 = (char *)((int)param_1 + 0xb44);
LAB_10046e7c:
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pbVar6 = local_40;
    do {
      pbVar9 = pbVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar9 = pbVar6 + 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar9;
    } while (bVar2 != '\0');
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = pbVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
    break;
  case 0x3a:
    uVar4 = 0xffffffff;
    pcVar7 = s_superjump_land_100a316c;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pbVar6 = (byte_conflict *)(pcVar8 + -uVar4);
    pbVar9 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 4;
    }
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar9 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar9 = pbVar9 + 1;
  }
switchD_10046a15_caseD_15:
  iVar3 = GaitCloseCombat(param_2,(int)param_1);
  SetAnim(param_1,local_40,(-(uint)(iVar3 != 0) & 0xfffffffe) + 4 | 0x90,0);
  *(undefined4 *)(this + 0xc) = 0x40000000;
  *(undefined4 *)(this + 8) = 0x40400000;
  this[0x1e8] = (CTSAnimation)0x0;
  return;
}

/* 10046fc0  CTSAnimation::GaitCloseCombat  (181 bytes)
 * undefined4 GaitCloseCombat(int param_1, int param_2)
 * called by: CTSAnimation::Animate, CTSAnimation::HandleCloseCombat
 */
undefined4 CTSAnimation::GaitCloseCombat(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0x25) {
    if (((*(uint *)(*(int *)(param_2 + 4) + 0x1a4) & 0x4000) != 0) ||
       ((*(byte *)(*(int *)(param_2 + 4) + 0x180) & 4) != 0)) {
      return 0;
    }
  }
  else {
    if (param_1 == 0x24) {
      return 0;
    }
    if (param_1 == 0x23) {
      return 0;
    }
    if (param_1 == 0x3a) {
      return 0;
    }
    if ((((param_1 < 0x16) || (0x17 < param_1)) && ((param_1 < 0x21 || (0x25 < param_1)))) &&
       (((param_1 != 0x19 && (param_1 != 0x26)) && (param_1 != 0x27)))) {
      if (param_1 < 0x1d) {
        return 0;
      }
      if (0x20 < param_1) {
        return 0;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (((*(uint *)(iVar1 + 0x1a4) & 0x4000) == 0) &&
     (SQRT(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
           *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) <= 120.0)) {
    return 0;
  }
  return 1;
}

