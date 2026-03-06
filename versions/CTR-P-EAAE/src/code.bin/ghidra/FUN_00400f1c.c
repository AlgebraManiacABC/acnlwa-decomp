/**
 * FUN_00400f1c.c
 * Source line: 570567
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00400f1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x10) == '\x01') {
    FUN_00356b98(*(int *)(param_1 + 0xc),4,param_3,param_4,param_4);
  }
  FUN_00356a88(*(undefined4 *)(param_1 + 0xc));
  FUN_003b0db4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}
