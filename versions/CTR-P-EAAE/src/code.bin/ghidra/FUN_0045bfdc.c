/**
 * FUN_0045bfdc.c
 * Source line: 624873
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0045bfdc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    __rt_memcpy_w(param_2,param_1 + 4,0x4c);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
