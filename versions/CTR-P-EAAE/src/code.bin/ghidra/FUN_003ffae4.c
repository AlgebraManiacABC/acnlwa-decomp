/**
 * FUN_003ffae4.c
 * Source line: 569951
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 * FUN_003ffae4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &UNK_008ff2a8;
  puVar1 = (undefined4 *)param_1[3];
  while (puVar1 != param_1 + 2) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00429000(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar1);
    puVar1 = puVar2;
  }
  FUN_00429150(param_1 + 1);
  return param_1;
}
