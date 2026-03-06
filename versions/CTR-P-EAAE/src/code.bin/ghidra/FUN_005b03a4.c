/**
 * FUN_005b03a4.c
 * Source line: 861603
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005b03a4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  __rt_memcpy_w(param_1,param_2,0x50);
  if (param_3 != 0) {
    local_10 = FUN_00755484(param_1);
    FUN_005b0478(param_1,&local_10,param_3);
    return;
  }
  uVar1 = FUN_00755484(param_1);
  FUN_00100ef8(&local_10,&DAT_005b0430,(uVar1 & 0xffff) + 100);
  *(undefined1 *)(param_1 + 0xc) = (undefined1)local_10;
  *(undefined1 *)(param_1 + 0xd) = local_10._1_1_;
  *(undefined1 *)(param_1 + 0xe) = local_10._2_1_;
  return;
}
