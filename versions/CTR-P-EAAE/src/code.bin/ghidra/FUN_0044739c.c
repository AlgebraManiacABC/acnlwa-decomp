/**
 * FUN_0044739c.c
 * Source line: 609437
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0044739c(int param_1)

{
  if (*(char **)(param_1 + 0x44) != NULL) {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      FUN_004261f4();
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_004261f4(param_1 + 0x48);
  }
  FUN_0042632c(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}
