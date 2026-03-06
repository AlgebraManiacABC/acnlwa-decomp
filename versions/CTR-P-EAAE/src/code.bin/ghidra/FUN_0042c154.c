/**
 * FUN_0042c154.c
 * Source line: 594297
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0042c154(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = param_2;
    FUN_004261dc(param_2);
    return 1;
  }
  return 0;
}
