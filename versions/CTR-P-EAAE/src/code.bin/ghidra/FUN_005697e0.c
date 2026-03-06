/**
 * FUN_005697e0.c
 * Source line: 811098
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005697e0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  *(undefined4 *)(param_2 + 8) = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x10) = param_1;
  }
  return;
}
