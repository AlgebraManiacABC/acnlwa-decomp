/**
 * FUN_004be300.c
 * Source line: 700124
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004be300(undefined1 *param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0013ad90();
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
