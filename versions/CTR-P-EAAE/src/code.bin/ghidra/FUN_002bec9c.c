/**
 * FUN_002bec9c.c
 * Source line: 359263
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002bec9c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0027ab40(param_2);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_002be864(param_1 + uVar2 * 0x7dd80 + 0x2588,param_2);
      uVar2 += 1;
    } while (uVar2 < 3);
  }
  return;
}
