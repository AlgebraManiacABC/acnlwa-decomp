/**
 * FUN_00426270.c
 * Source line: 589898
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00426270(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_c;
  
  local_c = param_2;
  if (param_2 < 0) {
    FUN_004266f8(2,0,&local_c,param_4,param_1);
  }
  *(int *)(param_1 + 4) = local_c;
  *param_1 = 2;
  if (*(code **)(param_1 + 8) != NULL) {
    (**(code **)(param_1 + 8))(local_c,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}
