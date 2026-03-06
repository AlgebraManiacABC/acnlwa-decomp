/**
 * FUN_00412f64.c
 * Source line: 579351
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00412f64(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 8) != NULL) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return 1;
  }
  return 0;
}
