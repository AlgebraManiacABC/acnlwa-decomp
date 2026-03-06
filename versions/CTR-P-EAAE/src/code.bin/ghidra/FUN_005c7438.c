/**
 * FUN_005c7438.c
 * Source line: 876254
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c7438(float param_1,int param_2)

{
  undefined4 uVar1;
  float local_18;
  float local_14 [2];
  
  if ((param_2 != 4) && (FUN_00685ad4(&local_18,local_14,param_2), param_1 <= local_14[0])) {
    if (local_18 <= param_1) {
      uVar1 = FUN_005d458c(param_1);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x3f800000;
}
