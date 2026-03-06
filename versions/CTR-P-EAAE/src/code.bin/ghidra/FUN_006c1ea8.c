/**
 * FUN_006c1ea8.c
 * Source line: 1022118
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006c1ea8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (((int)ABS(*(float *)(param_1 + 0x644)) < 0x34000001) &&
     ((int)ABS(*(float *)(param_1 + 0x64c)) < 0x34000001)) {
    *(undefined4 *)(param_1 + 0x644) = *param_4;
    *(undefined4 *)(param_1 + 0x648) = param_4[1];
    *(undefined4 *)(param_1 + 0x64c) = param_4[2];
  }
  *(undefined4 *)(param_1 + 0x650) = *param_5;
  *(undefined4 *)(param_1 + 0x654) = param_5[1];
  *(undefined4 *)(param_1 + 0x658) = param_5[2];
  uVar1 = FUN_006c5ef8(param_1 + 0x650,0);
  *(undefined4 *)(param_1 + 0x654) = uVar1;
  *(undefined1 *)(param_1 + 0x6cc) = 0;
  FUN_006c00b8(param_1,1,param_2,param_3);
  return;
}
