/**
 * FUN_005b4018.c
 * Source line: 864304
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005b4018(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xa5) {
    if ((~*(uint *)(&UNK_00889074 + param_1 * 4) & 0x2000) == 0) {
      uVar1 = FUN_002fae84(param_1 + -0x56);
      return uVar1;
    }
  }
  return 0;
}
