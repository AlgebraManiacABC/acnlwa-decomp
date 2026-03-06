/**
 * FUN_00426224.c
 * Source line: 589879
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00426224(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_c;
  
  local_c = param_2;
  if (-1 < param_2) {
    FUN_004266f8(2,0,&local_c,param_4,param_1);
  }
  *(int *)(param_1 + 4) = local_c;
  *param_1 = 3;
  if (*(code **)(param_1 + 8) != NULL) {
    (**(code **)(param_1 + 8))(local_c,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}
