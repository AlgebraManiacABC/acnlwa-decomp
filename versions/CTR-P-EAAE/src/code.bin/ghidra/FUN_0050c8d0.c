/**
 * FUN_0050c8d0.c
 * Source line: 750553
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_0050c8d0(undefined4 *param_1)

{
  *param_1 = &UNK_0090357c;
  if (((undefined4 *)param_1[10] != NULL) && (*(char *)(param_1 + 0xe) == '\0')) {
    (*(code *)**(undefined4 **)param_1[10])();
    FUN_0013ad90(param_1[10]);
    param_1[10] = 0;
  }
  return param_1;
}
