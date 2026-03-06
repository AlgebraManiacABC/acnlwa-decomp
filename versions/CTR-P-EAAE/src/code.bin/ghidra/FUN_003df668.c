/**
 * FUN_003df668.c
 * Source line: 554580
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003df668(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}
