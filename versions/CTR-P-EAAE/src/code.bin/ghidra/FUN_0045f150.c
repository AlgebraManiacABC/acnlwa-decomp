/**
 * FUN_0045f150.c
 * Source line: 627075
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_0045f150(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    FUN_0045ef20(param_1,1,param_2,0xfd,param_3,1);
    return 1;
  }
  return 0;
}
