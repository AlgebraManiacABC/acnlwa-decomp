/**
 * FUN_005dd06c.c
 * Source line: 888485
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005dd06c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007559a0(param_3);
  uVar1 = 1;
  if ((_DAT_00aaf14c != 0) && (6 < *(int *)(_DAT_00aaf14c + 0x8f38))) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return 1;
}
