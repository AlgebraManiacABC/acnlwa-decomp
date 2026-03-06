/**
 * FUN_006c229c.c
 * Source line: 1022286
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006c229c(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,int param_5)

{
  *(undefined2 *)(param_1 + 0x710) = param_4;
  FUN_006c00b8(param_1,8,param_2,param_3);
  if (param_5 != 0) {
    *(undefined4 *)(param_1 + 0x668) = 0;
    return;
  }
  return;
}
