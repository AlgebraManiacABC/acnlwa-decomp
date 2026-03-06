/**
 * FUN_005a9c14.c
 * Source line: 856404
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005a9c14(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10) = *param_2;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc) = *param_2;
  }
  return;
}
