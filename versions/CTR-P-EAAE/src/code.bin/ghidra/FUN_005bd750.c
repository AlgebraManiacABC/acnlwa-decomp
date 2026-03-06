/**
 * FUN_005bd750.c
 * Source line: 868432
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005bd750(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  uVar2 = Item_GetRawID((Item_t *)(param_1 + 0xc));
  local_10._0_3_ = CONCAT12((char)param_2,uVar2);
  FUN_007d0fc8(4,&local_10);
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 9) = uVar1;
  return;
}
