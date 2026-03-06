/**
 * FUN_005d1cd8.c
 * Source line: 882693
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005d1cd8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x54) {
    uVar1 = *(undefined4 *)(&UNK_00857738 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
