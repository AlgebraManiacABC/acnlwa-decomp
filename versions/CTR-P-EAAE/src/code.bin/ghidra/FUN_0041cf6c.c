/**
 * FUN_0041cf6c.c
 * Source line: 585604
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined8 FUN_0041cf6c(int param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x3ff00000;
  uVar1 = 0xe0e14826;
  if (param_2 + -0x40000 < (uint *)0x3ff00000) {
    uVar2 = param_3 - 8;
  }
  if (param_2 + -0x40000 < (uint *)0x3ff00000 && uVar2 < 0xf8) {
    uVar3 = __rt_memcpy((uint *)(param_1 + 0x30),param_2,param_3);
    param_2 = (uint *)((ulonglong)uVar3 >> 0x20);
    uVar1 = 0;
    *(uint *)(param_1 + 8) = param_3;
  }
  return CONCAT44(param_2,uVar1);
}
