/**
 * FUN_0074baa4.c
 * Source line: 1105241
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0074baa4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if (param_2 < 2) {
    puVar1 = puVar1 + param_2;
  }
  return *puVar1;
}
