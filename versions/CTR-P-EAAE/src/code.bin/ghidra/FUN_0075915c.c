/**
 * FUN_0075915c.c
 * Source line: 1114262
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0075915c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x51) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + (param_2 >> 5) * 4 + 0x44b0) & 1 << (param_2 & 0x1f)) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
