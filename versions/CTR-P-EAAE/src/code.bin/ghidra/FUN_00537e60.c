/**
 * FUN_00537e60.c
 * Source line: 779114
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00537e60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    FUN_005380a8(iVar1);
    FUN_0053814c(iVar1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
