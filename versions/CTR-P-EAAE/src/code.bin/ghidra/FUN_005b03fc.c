/**
 * FUN_005b03fc.c
 * Source line: 861626
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005b03fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_00100ef8(&local_10,&DAT_005b0430,param_2);
  *(undefined1 *)(param_1 + 0xc) = (undefined1)local_10;
  *(undefined1 *)(param_1 + 0xd) = local_10._1_1_;
  *(undefined1 *)(param_1 + 0xe) = local_10._2_1_;
  return;
}
