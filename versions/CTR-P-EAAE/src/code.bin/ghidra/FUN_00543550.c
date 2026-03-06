/**
 * FUN_00543550.c
 * Source line: 786611
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00543550(int *param_1)

{
  FUN_004bfaa0();
  (**(code **)(*param_1 + 0x40))(param_1);
  if (param_1[7] != 0) {
    FUN_002f88b8();
    param_1[7] = 0;
  }
  if (param_1[0x16] != 0) {
    FUN_002f88b8();
    param_1[0x16] = 0;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  return;
}
