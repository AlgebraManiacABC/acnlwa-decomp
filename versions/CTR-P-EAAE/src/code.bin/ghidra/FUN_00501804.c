/**
 * FUN_00501804.c
 * Source line: 746766
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00501804(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0xe) {
    (**(code **)(*param_1 + 0x14))(param_1,param_2,param_4,1);
    return 0;
  }
  if (param_3 != 0xf) {
    uVar1 = FUN_007e8fb4();
    return uVar1;
  }
  (**(code **)(*param_1 + 0x14))(param_1,param_2,param_4,0);
  return 0;
}
