/**
 * FUN_0070edac.c
 * Source line: 1066217
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0070edac(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x5b) {
    uVar1 = *(undefined4 *)(&DAT_0083b4d8 + param_2 * 0x1c);
  }
  else {
    uVar1 = 0x1020;
  }
  return uVar1;
}
