/**
 * FUN_007d1010.c
 * Source line: 1177649
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007d1010(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_10._0_3_ = CONCAT21(*param_2,0x22);
    FUN_006249b0(0x41,param_1,&local_10,3);
  }
  return;
}
