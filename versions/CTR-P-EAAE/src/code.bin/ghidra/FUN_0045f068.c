/**
 * FUN_0045f068.c
 * Source line: 627036
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0045f068(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 local_20 [16];
  
  bVar1 = param_2 - 0x100000U < 0x3ff00000;
  if (bVar1) {
    FUN_00426900(local_20);
    FUN_00426830(local_20);
    FUN_0045ef20(param_1,1,param_2,0xfd,local_20,1);
  }
  return bVar1;
}
