/**
 * FUN_004de6f0.c
 * Source line: 723928
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_004de6f0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    if ((int)((uint)DAT_00953564._3_1_ << 0x1e) < 0) {
      uVar1 = FUN_0058cb20();
      return uVar1;
    }
  }
  else if ((DAT_00953560._2_2_ != 0) && (param_1 <= DAT_00953560._2_2_)) {
    return 1;
  }
  return 0;
}
