/**
 * FUN_0081128c.c
 * Source line: 1220892
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 * FUN_0081128c(undefined4 *param_1)

{
  *param_1 = &PTR_s_in_00904c08;
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}
