/**
 * FUN_0043a61c.c
 * Source line: 603207
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0043a61c(int param_1)

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
  return;
}
