/**
 * FUN_0073fda8.c
 * Source line: 1098265
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0073fda8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x4d545343) {
    uVar1 = 0;
    if (param_2[2] + 0xfe000000U < 0x30101) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
