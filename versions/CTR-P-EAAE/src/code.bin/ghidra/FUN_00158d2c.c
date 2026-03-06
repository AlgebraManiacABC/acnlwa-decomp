/**
 * FUN_00158d2c.c
 * Source line: 171578
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00158d2c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != NULL) {
    uVar1 = *(undefined4 *)(*param_1 + 4);
  }
  return uVar1;
}
