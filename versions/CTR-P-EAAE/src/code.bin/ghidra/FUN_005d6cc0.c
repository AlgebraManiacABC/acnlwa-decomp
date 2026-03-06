/**
 * FUN_005d6cc0.c
 * Source line: 885206
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005d6cc0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  **(undefined1 **)(param_1 + 0x24) = 0;
  **(undefined1 **)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xf0);
  local_10 = param_4;
  local_10 = (**(code **)(*param_2 + 0xc))(param_2);
  FUN_006019b0(param_1 + 0x78,&local_10,0x95df14);
  FUN_0060184c(param_1 + 0x78,0x95df14);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}
