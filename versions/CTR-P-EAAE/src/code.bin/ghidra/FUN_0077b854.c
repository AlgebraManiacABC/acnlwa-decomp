/**
 * FUN_0077b854.c
 * Source line: 1137633
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined8 FUN_0077b854(uint *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = __rt_memcpy(param_2,param_1,param_3);
    return uVar1;
  }
  return CONCAT44(param_2,param_1);
}
