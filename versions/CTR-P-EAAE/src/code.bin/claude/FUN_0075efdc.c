/**
 * FUN_0075efdc.c
 * Source line: 1119430
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0075efdc(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
