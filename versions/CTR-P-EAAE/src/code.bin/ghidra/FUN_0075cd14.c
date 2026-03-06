/**
 * FUN_0075cd14.c
 * Source line: 1117350
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0075cd14(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x18) == 0;
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x2c);
  }
  return bVar1 && param_1 == 0;
}
