/**
 * FUN_001b3a44.c
 * Source line: 220498
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_001b3a44(uint param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (param_1 < 0xc && param_2 < 0xf) {
    uVar1 = *(undefined1 *)(param_1 * 0xf + 0xad53a4 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
