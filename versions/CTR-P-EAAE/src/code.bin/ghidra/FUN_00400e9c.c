/**
 * FUN_00400e9c.c
 * Source line: 570546
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00400e9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x10) == '\x01') {
    FUN_00356b98(*(int *)(param_1 + 0xc),4);
  }
  FUN_00356a88(*(undefined4 *)(param_1 + 0xc));
  FUN_003b0d04(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),&uStack_14,&uStack_10,
               &uStack_c);
  return;
}
