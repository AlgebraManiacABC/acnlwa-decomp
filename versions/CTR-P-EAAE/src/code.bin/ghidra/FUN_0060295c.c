/**
 * FUN_0060295c.c
 * Source line: 918599
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0060295c(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 4) == '\b') {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    uVar1 = 6;
  }
  else {
    FUN_00603d04(param_1);
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}
