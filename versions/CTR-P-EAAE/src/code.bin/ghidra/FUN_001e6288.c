/**
 * FUN_001e6288.c
 * Source line: 248597
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001e6288(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 5 || param_2 == 0xb) || ((param_2 == 0x11 || param_2 == 0x17) || param_2 == 0x94))
  {
    uVar1 = 10;
    uVar2 = 1;
  }
  else {
    uVar1 = 0xb;
    uVar2 = 0;
  }
  FUN_001e601c(uVar1,param_1,param_2,1,uVar2);
  return;
}
