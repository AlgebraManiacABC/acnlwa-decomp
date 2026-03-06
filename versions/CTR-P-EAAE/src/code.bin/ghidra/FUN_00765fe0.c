/**
 * FUN_00765fe0.c
 * Source line: 1124412
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_00765fe0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint extraout_r1;
  
  __aeabi_idivmod(param_2,4);
  puVar1 = (undefined1 *)(param_1 + 0xf127);
  if (extraout_r1 < 4) {
    puVar1 = puVar1 + extraout_r1;
  }
  return *puVar1;
}
