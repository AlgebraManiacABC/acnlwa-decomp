/**
 * FUN_003dd3d8.c
 * Source line: 552826
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003dd3d8(int *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  int local_1c [2];
  
  FUN_007e3ec0(local_1c,*param_4 + 8);
  if (local_1c[0] == 0) {
    uVar1 = 2;
  }
  else {
    local_20 = *param_3;
    FUN_007e3de4(local_1c[0] + 8,&local_20);
    *param_2 = *param_4;
    *param_1 = *(int *)(*param_1 + 4);
    uVar1 = 0;
  }
  return uVar1;
}
