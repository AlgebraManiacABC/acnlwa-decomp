/**
 * FUN_003e3e58.c
 * Source line: 557648
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003e3e58(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)param_1[3];
  while (puVar1 != param_1 + 2) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00429000(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar1);
    puVar1 = puVar2;
  }
  FUN_00429150(param_1 + 1);
  FUN_004287d4(param_1 + 0x3c);
  return param_1;
}
