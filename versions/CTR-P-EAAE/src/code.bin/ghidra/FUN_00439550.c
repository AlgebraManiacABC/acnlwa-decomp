/**
 * FUN_00439550.c
 * Source line: 602651
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00439550(int param_1)

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
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}
