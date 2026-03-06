/**
 * FUN_00433870.c
 * Source line: 598855
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00433870(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(param_1);
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
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}
