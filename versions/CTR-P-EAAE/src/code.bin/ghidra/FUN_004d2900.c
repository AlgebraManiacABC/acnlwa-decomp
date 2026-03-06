/**
 * FUN_004d2900.c
 * Source line: 715897
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004d2900(int param_1,undefined4 param_2,int param_3)

{
  int local_20 [3];
  undefined1 local_14;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_20[0] = param_1 + 0xd0;
    local_20[1] = 0xaefac8;
    local_20[2] = FUN_004cb788(param_3,0);
    local_14 = *(undefined1 *)(param_3 + 0x24);
    (**(code **)(param_1 + 0x88))(param_2,local_20,*(undefined4 *)(param_1 + 0x8c));
    *(undefined1 *)(param_3 + 0x24) = local_14;
  }
  return;
}
