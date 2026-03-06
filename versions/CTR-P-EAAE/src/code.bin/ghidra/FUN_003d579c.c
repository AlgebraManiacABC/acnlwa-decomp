/**
 * FUN_003d579c.c
 * Source line: 546784
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_003d579c(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}
