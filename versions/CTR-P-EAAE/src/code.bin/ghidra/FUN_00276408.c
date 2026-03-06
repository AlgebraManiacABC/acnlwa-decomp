/**
 * FUN_00276408.c
 * Source line: 321295
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00276408(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x14) != 0) {
      FUN_00276cd0();
    }
    uVar1 += 1;
  } while (uVar1 < 0x40);
  *(undefined4 *)(param_1 + 0x1c0) = 5;
  return;
}
