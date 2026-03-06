/**
 * FUN_003b84c0.c
 * Source line: 526735
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_003b84c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &UNK_008fdad4;
  FUN_00361988(param_1[0x1e]);
  puVar2 = (undefined4 *)param_1[0x14];
  for (puVar1 = (undefined4 *)param_1[0x13]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)*puVar1)(puVar1);
  }
  FUN_00361988(param_1[0x13]);
  FUN_00361988(param_1[6]);
  FUN_00361988(param_1[2]);
  return param_1;
}
