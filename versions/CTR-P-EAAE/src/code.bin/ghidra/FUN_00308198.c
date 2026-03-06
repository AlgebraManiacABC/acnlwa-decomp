/**
 * FUN_00308198.c
 * Source line: 406241
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_00308198(int param_1,byte param_2)

{
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 199 | (param_2 & 7) << 3;
  return;
}
