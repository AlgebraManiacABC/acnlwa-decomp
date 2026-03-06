/**
 * FUN_006ccc3c.c
 * Source line: 1029108
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006ccc3c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_002ff408(param_1 + uVar1 * 0x280 + 4);
    uVar1 += 1;
  } while (uVar1 < 0xb4);
  *(undefined1 *)(param_1 + 0x1c204) = 0;
  return;
}
