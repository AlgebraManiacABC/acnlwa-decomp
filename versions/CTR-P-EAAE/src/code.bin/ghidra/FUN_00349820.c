/**
 * FUN_00349820.c
 * Source line: 446399
 * Body lines: 11
 */
#include "../../../include/types.h"

uint * FUN_00349820(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  *param_1 = param_4 >> 3;
  param_1[1] = 0x804f0238;
  *param_2 = param_1 + 2;
  param_1[2] = 0;
  uVar1 = thunk_FUN_001405e8(param_3);
  param_1[3] = uVar1 >> 3;
  uVar1 = thunk_FUN_001405e8(param_1 + 6);
  param_1[4] = uVar1 >> 3;
  param_1[5] = 1;
  return param_1 + 6;
}
