/**
 * FUN_0045e8a8.c
 * Source line: 626587
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0045e8a8(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (iRam0097d450 != 0) {
      FUN_0045c398();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (**(char **)(param_1 + 0x54) == '\x01') {
    FUN_004261f4();
    return;
  }
  return;
}
