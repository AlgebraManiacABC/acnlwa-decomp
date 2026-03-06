/**
 * FUN_00583658.c
 * Source line: 829042
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00583658(void)

{
  int iVar1;
  
  iVar1 = DAT_0094d080;
  if ((*(char *)(DAT_0094d080 + 0x82c) != '\x04') && (*(int *)(DAT_0094d080 + 0x824) != 0)) {
    FUN_00136e58(*(int *)(DAT_0094d080 + 0x824),0);
  }
  *(undefined1 *)(iVar1 + 0x835) = 0;
  *(undefined1 *)(iVar1 + 0x836) = 0;
  *(undefined4 *)(iVar1 + 0x838) = 0;
  *(undefined4 *)(iVar1 + 0x83c) = 0;
  FUN_006b20d0(DAT_0094d080,iVar1 + 0x824,0x1000099);
  *(undefined1 *)(iVar1 + 0x82c) = 3;
  *(undefined4 *)(iVar1 + 0x830) = 2;
  return;
}
