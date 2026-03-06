/**
 * FUN_0014152c.c
 * Source line: 153794
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_0014152c(undefined4 *param_1)

{
  *param_1 = &UNK_00903d4c;
  if ((int *)param_1[2] != NULL) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  return param_1;
}
