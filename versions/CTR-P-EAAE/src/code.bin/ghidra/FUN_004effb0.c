/**
 * FUN_004effb0.c
 * Source line: 737777
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004effb0(void)

{
  int iVar1;
  
  if (DAT_0094edd8 != 0) {
    *(undefined4 *)(DAT_0094edd8 + 0x1a8) = 0;
  }
  if (cRam00952a20 != '\0') {
    cRam00952a20 = '\0';
    iVar1 = FUN_0024ebc0();
    if ((iVar1 != 0) && (cRam00952a21 == '\0')) {
      iVar1 = FUN_0024ebc0();
      *(undefined1 *)(iVar1 + 0x168) = 0;
    }
  }
  return;
}
