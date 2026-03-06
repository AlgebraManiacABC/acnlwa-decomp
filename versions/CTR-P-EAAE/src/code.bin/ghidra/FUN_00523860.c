/**
 * FUN_00523860.c
 * Source line: 766405
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_00523860(undefined4 *param_1)

{
  *param_1 = &UNK_00903728;
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  return param_1;
}
