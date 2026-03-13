/**
 * FUN_00136c9c.c
 * Source line: 143485
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_00136c9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return uVar1;
}
