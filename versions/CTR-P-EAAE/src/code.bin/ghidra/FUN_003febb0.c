/**
 * FUN_003febb0.c
 * Source line: 569232
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_003febb0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x40) + 0x10))();
  if (*(int *)(param_1 + 0x88) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return 0;
}
