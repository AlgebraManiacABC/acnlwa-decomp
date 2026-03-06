/**
 * FUN_00779398.c
 * Source line: 1135792
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00779398(int *param_1,undefined4 param_2)

{
  undefined *local_18;
  undefined4 local_14;
  
  param_1 = (int *)(*(int *)(*param_1 + -0x24) + (int)param_1);
  local_18 = &DAT_009047f8;
  local_14 = param_2;
  FUN_004ee55c(param_1 + 0xc,&local_18,*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 8)
               ,0x80);
  FUN_00317a88(param_1 + 0xc,(int)param_1 + *(int *)(*param_1 + -0xc) + 4,0,1);
  return 1;
}
