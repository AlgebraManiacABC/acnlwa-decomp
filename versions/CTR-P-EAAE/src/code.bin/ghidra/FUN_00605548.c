/**
 * FUN_00605548.c
 * Source line: 920842
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00605548(int *param_1)

{
  if (param_1 == NULL) {
    return;
  }
  if ((int *)*param_1 != NULL) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
