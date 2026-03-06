/**
 * FUN_005943c0.c
 * Source line: 842387
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005943c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4) == 0) {
      *(undefined4 *)(param_1 + uVar1 * 4) = param_2;
      return 1;
    }
    uVar1 += 1;
  } while (uVar1 < 100);
  return 0;
}
