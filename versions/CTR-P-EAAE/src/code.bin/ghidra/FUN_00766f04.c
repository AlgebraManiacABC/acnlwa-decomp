/**
 * FUN_00766f04.c
 * Source line: 1124963
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00766f04(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc14);
  if (param_2 < 0x12) {
    puVar1 = puVar1 + param_2;
  }
  return *puVar1;
}
