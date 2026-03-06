/**
 * FUN_0031fcc4.c
 * Source line: 423383
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0031fcc4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3d0) != 0) {
    FUN_004b6dc8(*(int *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 0x278));
  }
  *(int *)(param_1 + 0x3d0) = param_2;
  if (param_2 == 0) {
    return;
  }
  FUN_004b6d74(param_2,*(undefined4 *)(param_1 + 0x278));
  return;
}
