/**
 * FUN_005da470.c
 * Source line: 887007
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005da470(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007559a0(param_3);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_0056b970();
  }
  *param_2 = uVar1;
  return 1;
}
