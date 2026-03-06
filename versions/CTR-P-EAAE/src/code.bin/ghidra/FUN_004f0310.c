/**
 * FUN_004f0310.c
 * Source line: 737964
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004f0310(void)

{
  int iVar1;
  
  if (DAT_0094edd8 != 0) {
    *(int *)(DAT_0094edd8 + 0x1a8) = DAT_0094edd8 + 0x300;
  }
  uRam00952a20 = 1;
  iVar1 = FUN_0024ebc0();
  uRam00952a21 = *(undefined1 *)(iVar1 + 0x168);
  iVar1 = FUN_0024ebc0();
  *(undefined1 *)(iVar1 + 0x168) = 1;
  return;
}
