/**
 * FUN_00240010.c
 * Source line: 294189
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00240010(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0xab7de4;
  if (param_1 < 4) {
    puVar1 = (undefined4 *)(param_1 * 4 + 0xab7de4);
  }
  return *puVar1;
}
