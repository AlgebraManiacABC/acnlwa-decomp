/**
 * FUN_0044539c.c
 * Source line: 608478
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0044539c(int *param_1)

{
  if ((char *)param_1[0x10] != NULL) {
    if (*(char *)param_1[0x10] == '\x01') {
      FUN_004261f4();
    }
    param_1[0x10] = 0;
  }
  if ((char)param_1[0x11] == '\x01') {
    FUN_004261f4(param_1 + 0x11);
  }
  FUN_0042632c(param_1 + 0x11);
  (**(code **)(*param_1 + 0x44))(param_1);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  return;
}
