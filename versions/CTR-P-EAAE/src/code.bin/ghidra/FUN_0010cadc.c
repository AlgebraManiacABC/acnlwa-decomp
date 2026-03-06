/**
 * FUN_0010cadc.c
 * Source line: 110324
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0010cadc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00308970(param_2,param_1,10);
  if (((uVar1 < 10) && (param_1 = uVar1 * 0x2518 + param_1, param_1 != 0)) &&
     (iVar2 = FUN_002fe470(param_1), iVar2 != 0)) {
    return param_1;
  }
  return 0;
}
