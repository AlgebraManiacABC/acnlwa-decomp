/**
 * FUN_001f33fc.c
 * Source line: 255686
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001f33fc(int param_1)

{
  if (*(int *)(DAT_00950148 + 0xf130) == param_1) {
    FUN_00304380(DAT_00950148,param_1);
    DAT_00950145 = 0;
  }
  *(undefined1 *)(param_1 + 0x2520) = 0;
  FUN_006e9c2c(0x40c00000,param_1 + 0x78,0);
  return;
}
