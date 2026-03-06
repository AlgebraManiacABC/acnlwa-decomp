/**
 * FUN_0035ae18.c
 * Source line: 460943
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0035ae18(int *param_1)

{
  int local_18;
  int local_14 [2];
  
  local_18 = param_1[2];
  while (local_18 != param_1[4]) {
    (**(code **)(*param_1 + 0x14))(local_14,param_1,&local_18);
    local_18 = local_14[0];
  }
  return;
}
