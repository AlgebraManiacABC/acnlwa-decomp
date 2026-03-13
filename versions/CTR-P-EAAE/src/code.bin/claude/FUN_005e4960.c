/**
 * FUN_005e4960.c
 * Source line: 894474
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005e4960(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_3 < 0 || param_2 < param_3) {
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  else {
    *(int *)(param_1 + 0xc0) = param_3;
    *(undefined1 *)(param_1 + 0xc4) = 2;
  }
  return;
}
