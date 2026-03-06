/**
 * FUN_007d0d14.c
 * Source line: 1177457
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007d0d14(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_10 = CONCAT13(*(undefined1 *)(param_2 + 1),CONCAT21(*param_2,0x1b));
    FUN_006249b0(0x41,param_1,&local_10,4);
  }
  return;
}
