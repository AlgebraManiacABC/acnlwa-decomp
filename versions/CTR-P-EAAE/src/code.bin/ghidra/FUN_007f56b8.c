/**
 * FUN_007f56b8.c
 * Source line: 1193513
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_007f56b8(undefined4 *param_1)

{
  *param_1 = &UNK_008f7420;
  if (param_1[2] != 0) {
    FUN_002f747c(param_1 + 1);
  }
  if ((undefined4 *)param_1[3] != NULL) {
    (*(code *)**(undefined4 **)param_1[3])();
    param_1[3] = 0;
  }
  if ((undefined4 *)param_1[4] != NULL) {
    (*(code *)**(undefined4 **)param_1[4])();
    param_1[4] = 0;
  }
  param_1[3] = 0;
  FUN_002f76ac(param_1 + 1,FUN_00317dec,8,1);
  return param_1;
}
