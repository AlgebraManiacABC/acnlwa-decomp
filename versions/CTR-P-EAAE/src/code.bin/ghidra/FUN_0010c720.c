/**
 * FUN_0010c720.c
 * Source line: 110179
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0010c720(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (((uRam0094d7a0 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x94d7a0), iVar1 != 0)) {
    FUN_0029c964(0x94d7a8,3);
  }
  if (param_2 == 0) {
    param_2 = 0x94d7a8;
  }
  FUN_003081b4(param_2,param_1);
  return param_2;
}
