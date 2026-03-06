/**
 * FUN_003d55e0.c
 * Source line: 546703
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_003d55e0(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}
