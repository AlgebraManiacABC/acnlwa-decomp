/**
 * FUN_004ba6c8.c
 * Source line: 697683
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_004ba6c8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[4] = param_1[4] & 0xfffff080 | 0xe90;
  FUN_004ba4c8(param_1);
  return param_1;
}
