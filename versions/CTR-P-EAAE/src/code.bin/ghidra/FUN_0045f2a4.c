/**
 * FUN_0045f2a4.c
 * Source line: 627152
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_0045f2a4(undefined4 *param_1)

{
  *param_1 = &UNK_00900f9c;
  if ((int *)param_1[0xd] != NULL) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[9] != NULL) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  param_1[1] = &UNK_00900484;
  return param_1;
}
