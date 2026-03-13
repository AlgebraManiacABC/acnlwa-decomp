/**
 * FUN_0046824c.c
 * Source line: 634050
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0046824c(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  nnnstdMemCpy(param_1 + 0xc,param_2,0xfc);
  nnnstdMemCpy(param_1,param_4,6);
  *(undefined2 *)(param_1 + 6) = param_3;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}
