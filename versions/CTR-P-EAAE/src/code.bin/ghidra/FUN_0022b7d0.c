/**
 * FUN_0022b7d0.c
 * Source line: 282310
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0022b7d0(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  if (param_2 != NULL) {
    FUN_0022b820(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),
                 *(undefined1 *)(param_2 + 3),*(undefined1 *)((int)param_2 + 7),
                 *(undefined1 *)((int)param_2 + 5),param_2 + 4,param_3,0);
    return;
  }
  *param_1 = 0;
  return;
}
