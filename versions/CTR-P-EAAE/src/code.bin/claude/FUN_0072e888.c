/**
 * FUN_0072e888.c
 * Source line: 1085748
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072e888(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 6) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x210);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
