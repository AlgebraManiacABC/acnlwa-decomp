/**
 * FUN_003dd460.c
 * Source line: 552849
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003dd460(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_007e3ec0(&local_14,*param_4 + 8);
  if (local_14 == 0) {
    uVar1 = 2;
  }
  else {
    local_18 = *param_3;
    FUN_007e3de4(local_14 + 8,&local_18);
    *param_2 = *param_3;
    *param_1 = *(int *)(*param_1 + 4);
    uVar1 = 0;
  }
  return uVar1;
}
