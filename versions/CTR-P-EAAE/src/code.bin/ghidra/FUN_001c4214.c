/**
 * FUN_001c4214.c
 * Source line: 230245
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_001c4214(int param_1)

{
  if (*(int **)(param_1 + 0x14) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}
