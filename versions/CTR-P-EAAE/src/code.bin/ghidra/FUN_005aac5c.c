/**
 * FUN_005aac5c.c
 * Source line: 857419
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_005aac5c(undefined4 *param_1)

{
  *param_1 = &UNK_00907d70;
  if ((param_1[5] != 0) && (param_1[2] == 0)) {
    (**(code **)(**(int **)param_1[1] + 4))();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}
