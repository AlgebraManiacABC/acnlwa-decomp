/**
 * FUN_00442694.c
 * Source line: 607403
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00442694(int param_1)

{
  if (*(char **)(param_1 + 0x40) != NULL) {
    if (**(char **)(param_1 + 0x40) == '\x01') {
      FUN_004261f4();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    FUN_004261f4(param_1 + 0x44);
  }
  FUN_0042632c(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}
