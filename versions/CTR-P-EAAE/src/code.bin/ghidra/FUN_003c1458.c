/**
 * FUN_003c1458.c
 * Source line: 531981
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_003c1458(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &UNK_008fe2ac;
  puVar2 = (undefined4 *)param_1[0xd];
  for (puVar1 = (undefined4 *)param_1[0xc]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)*puVar1)(puVar1);
  }
  FUN_00361988(param_1[0xc]);
  return param_1;
}
