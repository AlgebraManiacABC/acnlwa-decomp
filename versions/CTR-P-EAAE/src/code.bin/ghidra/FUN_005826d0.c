/**
 * FUN_005826d0.c
 * Source line: 827595
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined8 FUN_005826d0(int param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    uVar1 = __rt_memcpy((uint *)(param_1 + param_3 * 0x20),param_2,0x20);
    return uVar1;
  }
  return CONCAT44(param_2,param_1);
}
