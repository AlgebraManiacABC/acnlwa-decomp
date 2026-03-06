/**
 * FUN_003dd294.c
 * Source line: 552773
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003dd294(int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_007e3ec0(&local_14,*param_3 + 8);
  if (local_14 == 0) {
    uVar1 = 2;
  }
  else {
    local_18 = *param_4;
    FUN_007e3de4(local_14 + 8,&local_18);
    *param_2 = *param_4;
    *param_1 = *(int *)(*param_1 + 4);
    uVar1 = 0;
  }
  return uVar1;
}
