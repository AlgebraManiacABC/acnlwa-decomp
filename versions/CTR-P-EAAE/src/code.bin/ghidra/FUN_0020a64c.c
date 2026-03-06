/**
 * FUN_0020a64c.c
 * Source line: 267058
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0020a64c(int param_1,uint param_2)

{
  if ((param_2 < 0xe) && (*(uint *)(param_1 + 0x3c) != param_2)) {
    *(uint *)(param_1 + 0x3c) = param_2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}
