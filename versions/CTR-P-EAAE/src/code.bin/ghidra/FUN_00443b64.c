/**
 * FUN_00443b64.c
 * Source line: 607766
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00443b64(int *param_1,int *param_2)

{
  param_1[0x4e] = *param_2;
  if (param_1[0x10] != 0) {
    if (*param_2 < 0) {
      FUN_00426224();
    }
    else {
      FUN_00426270();
    }
    param_1[0x10] = 0;
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  (**(code **)(*param_1 + 0x44))(param_1);
  *(byte *)((int)param_1 + 0x155) = (byte)(*(char *)((int)param_1 + 0x155) + 1U) % 10;
  return;
}
