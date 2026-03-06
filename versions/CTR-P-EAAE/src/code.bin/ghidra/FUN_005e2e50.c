/**
 * FUN_005e2e50.c
 * Source line: 893107
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005e2e50(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  **(undefined1 **)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_10 = param_4;
  local_10 = (**(code **)(*param_2 + 0xc))(param_2);
  FUN_006019b0(param_1 + 0x44,&local_10,0x95df14);
  FUN_0060184c(param_1 + 0x44,0x95df14);
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}
