/**
 * FUN_0057418c.c
 * Source line: 818743
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_0057418c(int param_1)

{
  if (*(int **)(param_1 + 0x300) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x300) + 0x18))();
    FUN_00324944(*(undefined4 *)(param_1 + 0x300));
  }
  return 1;
}
