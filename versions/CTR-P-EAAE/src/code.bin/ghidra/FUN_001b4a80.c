/**
 * FUN_001b4a80.c
 * Source line: 221161
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined8 FUN_001b4a80(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar1 = __rt_memcpy(param_1,param_2,0x2e);
  return uVar1;
}
