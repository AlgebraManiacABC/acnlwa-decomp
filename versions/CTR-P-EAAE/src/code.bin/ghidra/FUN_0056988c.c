/**
 * FUN_0056988c.c
 * Source line: 811131
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_0056988c(undefined4 *param_1)

{
  *param_1 = &UNK_00906210;
  if ((undefined4 *)param_1[6] != NULL) {
    (*(code *)**(undefined4 **)param_1[6])();
    FUN_0013ad90(param_1[6]);
    param_1[6] = 0;
    FUN_002f88b8(param_1[8]);
    param_1[8] = 0;
  }
  return param_1;
}
