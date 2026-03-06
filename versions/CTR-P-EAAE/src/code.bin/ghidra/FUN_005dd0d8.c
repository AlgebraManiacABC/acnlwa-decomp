/**
 * FUN_005dd0d8.c
 * Source line: 888503
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005dd0d8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007559a0(param_3);
  uVar1 = 1;
  if ((_DAT_00aaf14c != 0) && (0x1d < *(int *)(_DAT_00aaf14c + 0x8f38))) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return 1;
}
