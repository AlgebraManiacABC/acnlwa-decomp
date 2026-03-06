/**
 * FUN_00549294.c
 * Source line: 790336
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00549294(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  undefined4 local_20 [3];
  undefined4 uStack_14;
  int *piStack_10;
  uint uStack_c;
  
  uStack_14 = param_2;
  piStack_10 = param_3;
  uStack_c = param_4;
  local_20[0] = (**(code **)(&UNK_008bb37c + (bRam0097e855 ^ param_4) * 4))(param_1);
  (**(code **)(*param_3 + 4))(param_3,local_20,4);
  return;
}
