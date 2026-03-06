/**
 * FUN_00811304.c
 * Source line: 1220920
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 * FUN_00811304(undefined4 *param_1)

{
  *param_1 = &UNK_00904c2c;
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}
