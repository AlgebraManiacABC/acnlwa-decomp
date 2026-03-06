/**
 * FUN_004db540.c
 * Source line: 722081
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004db540(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\x01') {
    FUN_00342ce4(param_1);
    FUN_001b0504(param_1 + 0x18);
    FUN_001b0504(param_1 + 0x2c);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_004c47a8(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 8),1);
      if (*(int *)(param_1 + 8) != 0) {
        FUN_004c5110(*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 8),0);
        return;
      }
    }
  }
  return;
}
