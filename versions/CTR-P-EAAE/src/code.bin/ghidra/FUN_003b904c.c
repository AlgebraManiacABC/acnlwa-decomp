/**
 * FUN_003b904c.c
 * Source line: 527368
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_003b904c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0036cf38();
  if ((iVar1 != 0) && (iVar1 = FUN_00382f30(param_1,param_1 + 0x18), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}
