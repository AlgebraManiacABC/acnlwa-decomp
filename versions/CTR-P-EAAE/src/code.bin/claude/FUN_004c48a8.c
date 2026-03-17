/**
 * FUN_004c48a8.c
 * Source line: 705147
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004c48a8(int param_1,int param_2)

{
  *(int *)(param_1 + 0xa4) = param_2;
  *(bool *)(param_1 + 0x9a) = 0 < param_2;
  return;
}
