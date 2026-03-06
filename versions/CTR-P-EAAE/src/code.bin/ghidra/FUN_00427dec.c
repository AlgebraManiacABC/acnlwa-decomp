/**
 * FUN_00427dec.c
 * Source line: 591593
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00427dec(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) || (param_1 == 0xfd)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
