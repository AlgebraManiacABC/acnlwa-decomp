/**
 * FUN_0077033c.c
 * Source line: 1133176
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0077033c(int *param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 2) & 1) == 0) || (param_1[1] == 0 && *param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
