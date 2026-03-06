/**
 * FUN_00517a1c.c
 * Source line: 758044
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00517a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(iRam0095365c + 0x2d8);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}
