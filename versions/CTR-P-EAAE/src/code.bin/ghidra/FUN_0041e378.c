/**
 * FUN_0041e378.c
 * Source line: 586186
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined8 FUN_0041e378(int param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xe0e14826;
  if ((param_2 + -0x40000 < (uint *)0x3ff00000) && (param_3 < 0x21)) {
    uVar2 = __rt_memcpy((uint *)(param_1 + 0xc),param_2,param_3);
    param_2 = (uint *)((ulonglong)uVar2 >> 0x20);
    uVar1 = 0;
    *(uint *)(param_1 + 0x2c) = param_3;
  }
  return CONCAT44(param_2,uVar1);
}
