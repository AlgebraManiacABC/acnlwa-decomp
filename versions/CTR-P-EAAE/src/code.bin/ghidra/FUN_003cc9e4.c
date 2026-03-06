/**
 * FUN_003cc9e4.c
 * Source line: 538917
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_003cc9e4(undefined4 *param_1)

{
  *param_1 = &UNK_008fe7fc;
  if ((int *)param_1[2] != NULL) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)param_1[3] != NULL) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  return param_1;
}
