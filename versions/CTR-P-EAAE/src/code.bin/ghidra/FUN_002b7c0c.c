/**
 * FUN_002b7c0c.c
 * Source line: 354740
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002b7c0c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_1 + 1;
  uVar2 = param_1[0x15];
  FUN_00568630(*param_1,puVar1,uVar2,0);
  FUN_00569508(puVar1);
  (**(code **)(*(int *)*param_1 + 0xc))();
  FUN_00568984(*param_1,puVar1,uVar2,0);
  return;
}
