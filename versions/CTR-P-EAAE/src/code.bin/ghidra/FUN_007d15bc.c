/**
 * FUN_007d15bc.c
 * Source line: 1178022
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_007d15bc(int param_1,int param_2)

{
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00567510(auStack_40,*(undefined4 *)(param_1 + 0x274));
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(param_1 + 0x276));
  FUN_00567580(auStack_40,local_10);
  local_34 = *(undefined4 *)(param_2 + 0xc);
  local_24 = *(undefined4 *)(param_2 + 0x1c);
  local_14 = *(undefined4 *)(param_2 + 0x2c);
  FUN_001ce6f8(param_1,auStack_40);
  return;
}
