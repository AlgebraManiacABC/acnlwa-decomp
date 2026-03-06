/**
 * FUN_003e3858.c
 * Source line: 557494
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003e3858(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(iRam00974a48 + 0x30) != '\0') {
    local_14 = *param_2;
    local_10 = *param_3;
    local_c = *param_4;
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
      FUN_00356b98(*(int *)(param_1 + 0x24),4);
    }
    FUN_00356a88(*(undefined4 *)(param_1 + 0x24));
    FUN_003b0d04(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),&local_14,&local_10
                 ,&local_c);
  }
  return;
}
