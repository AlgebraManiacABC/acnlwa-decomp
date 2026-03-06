/**
 * FUN_005403c8.c
 * Source line: 784651
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005403c8(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 += 0x10;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    FUN_0013bb00();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}
