/**
 * FUN_00154f0c.c
 * Source line: 168635
 * Body lines: 5
 */
#include "../../../include/types.h"

FUN_00154f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)*param_4)();
  *puVar1 = param_4;
  FUN_00150acc(puVar1 + 0xb,param_3,0x104);
  return puVar1;
}
