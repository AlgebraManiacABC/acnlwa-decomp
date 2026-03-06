/**
 * FUN_002e0248.c
 * Source line: 377668
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e0248(int param_1,int param_2)

{
  *(int *)(param_1 + 200) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0x100038e;
    *(undefined1 *)(param_1 + 0xda) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0x1000392;
  *(undefined4 *)(param_1 + 0xc4) = 8;
  *(undefined1 *)(param_1 + 0xda) = 1;
  return;
}
