/**
 * FUN_007d167c.c
 * Source line: 1178064
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_007d167c(int param_1,int param_2)

{
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00567510(auStack_48,*(undefined4 *)(param_1 + 0x4d8));
  local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(param_1 + 0x4da));
  FUN_00567580(auStack_48,local_18);
  local_3c = *(undefined4 *)(param_2 + 0xc);
  local_2c = *(undefined4 *)(param_2 + 0x1c);
  local_1c = *(undefined4 *)(param_2 + 0x2c);
  FUN_00203c6c(param_1,auStack_48);
  return;
}
