/**
 * FUN_00137c60.c
 * Source line: 144444
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00137c60(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0x10;
  return;
}
