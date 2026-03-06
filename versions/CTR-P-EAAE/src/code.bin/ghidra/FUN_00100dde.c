/**
 * FUN_00100dde.c
 * Source line: 104255
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_00100dde(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002f7a10();
  if (((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    return param_1 + -0x20;
  }
  return param_1;
}
