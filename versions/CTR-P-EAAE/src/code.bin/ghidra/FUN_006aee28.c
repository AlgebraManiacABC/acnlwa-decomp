/**
 * FUN_006aee28.c
 * Source line: 1008735
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006aee28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0022c720(param_1 + 0x9fc,2,param_3,param_4,param_4);
  iVar1 = param_1 + *(int *)(param_1 + 0x16b8) * 0x330;
  FUN_002d609c(param_1 + 0x9fc,*(undefined1 *)(iVar1 + 0x1824),*(undefined1 *)(iVar1 + 0x1825),
               (int)*(char *)(param_1 + 0x635a),param_1 + 0x2c);
  return;
}
