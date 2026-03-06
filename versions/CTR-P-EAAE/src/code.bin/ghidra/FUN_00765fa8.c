/**
 * FUN_00765fa8.c
 * Source line: 1124392
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00765fa8(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_00ae5660;
  uVar1 = _DAT_00ae565c;
  if (param_3 < *(uint *)(param_2 + 0x80)) {
    FUN_0056a3cc(param_1,param_2 + param_3 * 0xc + 8);
    return;
  }
  *param_1 = _DAT_00ae5658;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}
