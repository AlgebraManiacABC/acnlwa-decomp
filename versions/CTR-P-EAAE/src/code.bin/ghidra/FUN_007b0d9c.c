/**
 * FUN_007b0d9c.c
 * Source line: 1153820
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_007b0d9c(void)

{
  int iVar1;
  
  iVar1 = iRam00adf960;
  if (iRam00adf960 == 0) {
    return;
  }
  FUN_0012ffcc();
  if (cRam00adf8d1 == '\0') {
    cRam00adf8d2 = cRam00adf8d1;
  }
  else {
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x24) * 0x1c + -0x1a) = 1;
    uRam00adf8d8 = 1;
  }
  FUN_0012ffdc();
  return;
}
