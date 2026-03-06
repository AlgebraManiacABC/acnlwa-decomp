/**
 * FUN_003e38d4.c
 * Source line: 557517
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003e38d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(iRam00974a48 + 0x30) != '\0') {
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
      FUN_00356b98(*(int *)(param_1 + 0x24),4,param_3,param_4,param_4);
    }
    FUN_00356a88(*(undefined4 *)(param_1 + 0x24));
    FUN_003b0db4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),param_2,param_3,
                 param_4);
  }
  return;
}
