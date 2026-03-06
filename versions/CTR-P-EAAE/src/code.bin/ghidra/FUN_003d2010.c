/**
 * FUN_003d2010.c
 * Source line: 543603
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_003d2010(undefined4 *param_1)

{
  *param_1 = &UNK_008feab0;
  if (param_1[0xd] != 0) {
    (**(code **)(**(int **)(param_1[0xd] + 4) + 0x40))();
  }
  FUN_00354800(param_1);
  return;
}
