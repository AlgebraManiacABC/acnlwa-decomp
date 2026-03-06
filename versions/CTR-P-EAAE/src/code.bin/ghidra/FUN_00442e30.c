/**
 * FUN_00442e30.c
 * Source line: 607500
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00442e30(int *param_1)

{
  if ((char *)param_1[0x10] != NULL) {
    if (*(char *)param_1[0x10] == '\x01') {
      FUN_004261f4();
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}
